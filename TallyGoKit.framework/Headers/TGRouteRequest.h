//
//  TGRouteRequest.h
//  TallyGoKit
//
//  Created by David Deller on 11/29/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseRequest.h"

#import <CoreLocation/CoreLocation.h>

@class TGWaypoint;

/// The request type defines the time parameter as either the desired arrival time or the departure time.
typedef NSString *TGRouteRequestType NS_TYPED_ENUM;

/// The time specified is the desired arrival time.
FOUNDATION_EXPORT TGRouteRequestType _Nonnull const TGRouteRequestTypeArrivalTime;

/// The time specified is the desired departure time.
FOUNDATION_EXPORT TGRouteRequestType _Nonnull const TGRouteRequestTypeDepartureTime;

/// Request for turn by turn navigation with multiple waypoints.
@interface TGRouteRequest : TGBaseRequest

/// Array of corrdinates.
@property (nonatomic, readonly, nonnull) NSArray *coords;

/// Array of waypoints. Alternative way of providing coordinates.
@property (nonatomic, readonly, nonnull) NSArray<TGWaypoint *> *waypoints;

/// The desired departure (or arrival) time
@property (nonatomic, readonly, nonnull) NSDate *time;

/// The type of request, either arrival or departure time request.
@property (nonatomic, readonly, nonnull) TGRouteRequestType requestType;

/// The current speed of the user. This is used by the routing engine to prevent situations where the driver is told to turn sooner than would be possible at the start of their route.
@property (nonatomic, readonly) CLLocationSpeed speed;

/// The current course of the user. This is used by the routing engine to determine the starting direction of the route.
@property (nonatomic, readonly) CLLocationDirection course;

/// Optional. For reroutes you may pass in an existing Trip ID to be used on the first returned segment.
@property (nonatomic, readonly, nullable) NSString *existingTripId;

- (nonnull instancetype)initWithCoords:(nonnull NSArray *)coords __attribute__((deprecated("Replace with initWithOrigin:destination: or initWithWaypoints:")));

- (nonnull instancetype)initWithCoords:(nonnull NSArray *)coords time:(nullable NSDate *)time requestType:(nullable TGRouteRequestType)requestType speed:(CLLocationSpeed)speed course:(CLLocationDirection)course existingTripId:(nullable NSString *)existingTripId __attribute__((deprecated("Replace with initWithWaypoints:time:requestType:speed:course:existingTripId:")));

/// Create a route request with waypoints (which allow you to specify textual descriptions in the UI)
- (nonnull instancetype)initWithWaypoints:(nonnull NSArray<TGWaypoint *> *)waypoints;

/// Create a route request with waypoints (which allow you to specify textual descriptions in the UI) along with optional parameters
- (nonnull instancetype)initWithWaypoints:(nonnull NSArray<TGWaypoint *> *)waypoints time:(nullable NSDate *)time requestType:(nullable TGRouteRequestType)requestType speed:(CLLocationSpeed)speed course:(CLLocationDirection)course existingTripId:(nullable NSString *)existingTripId;

/// Convenience method to quickly create a request with a single origin and destination
- (nonnull instancetype)initWithOrigin:(CLLocationCoordinate2D)origin destination:(CLLocationCoordinate2D)destination;

@end
