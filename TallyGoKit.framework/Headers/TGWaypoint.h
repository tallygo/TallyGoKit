//
//  TGWaypoint.h
//  TallyGoKit
//
//  Created by David Deller on 2/22/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <TallyGoKit/TallyGoKit.h>

@class TGStreetAddress;

/**
 * Represents a start or end point of a route segment
 */
@interface TGWaypoint : NSObject

/// The coordinate of the waypoint
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

/// An address that represents this waypoint, if known. Must be supplied during initialization, and cannot be changed after.
@property (nonatomic, readonly, nullable) TGStreetAddress *address;

/// A textual description that represents this waypoint. May be a string representation of the street address, or any other custom description that would be meaningful to the user. Must be supplied during initialization, and cannot be changed after.
@property (nonatomic, readonly, nullable) NSString *addressDescription;

/// Whether this waypoint is a placeholder for the user's current location. If `YES`, other properties such as coordinate and address will not contain any data yet. At some point in the future, the user's current location will attempt to be determined, after which this property will return `NO` and the coordinate (at least) will return a valid value.
@property (nonatomic, readonly) BOOL placeholderForUserCurrentLocation;

/// Initialize with only a coordinate. The address and a description will be loaded asynchronously, if possible.
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate;

/// Initialize with a coordinate, while specifying an address and description for display in the UI.
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate address:(nullable TGStreetAddress *)address description:(nullable NSString *)addressDescription;

/// Initialize with a latitude and longitude. The address and a description will be loaded asynchronously, if possible.
- (nonnull instancetype)initWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude;

/// Initialize with a latitude and longitude, while specifying an address and description for display in the UI.
- (nonnull instancetype)initWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude address:(nullable TGStreetAddress *)address description:(nullable NSString *)addressDescription;

/// Initialize without providing a coordinate, and attempt to later determine the user's current location. You can use this kind of waypoint as a convenience to avoid writing your own code to determine the user's location. You should only use this kind of waypoint as the origin, or as the first item in a waypoints array in a route request. Otherwise, an exception may be thrown.
+ (nonnull instancetype)waypointWithUserCurrentLocation;

@end
