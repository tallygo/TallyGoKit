//
//  TGRouteSegment.h
//  TallyGoKit
//
//  Created by David Deller on 11/30/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <CoreLocation/CoreLocation.h>

@class TGPoint;

/**
 TGRouteSegment represets one segment of a route. A route from location A to B will consist of only one segment. Introducing a stop along the way will result in two segments, from A to B, and B to C. Similar to routes, each segment has its own distance, and estimated travel time.
 
 A segment consists of a sequence of points which represent the geographic shape of the route. Points may also include information about turns or other instructions necessary to navigate the route. See TGPoint.
 */
@interface TGRouteSegment : TGBaseObject

/// Every point in the route in sequence.
@property (nonatomic, readonly, nonnull) NSArray<TGPoint *> *points;

/// The total travel distance in meters.
@property (nonatomic, readonly) CLLocationDistance totalDistance;

/// Estimated travel time in seconds.
@property (nonatomic, readonly) NSTimeInterval totalDuration;

/// A unique ID representing a sequence of segments from different rerouting event.
@property (nonatomic, readwrite, nonnull) NSString *tripId;

- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary tripId:(nullable NSString *)tripId;

@end
