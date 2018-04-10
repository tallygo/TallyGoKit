//
//  TGRouteSegment.h
//  TallyGoKit
//
//  Created by David Deller on 11/30/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <CoreLocation/CoreLocation.h>

@class TGPoint, TGRoute;

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

/// The route this segment belongs to
@property (nonatomic, weak, readonly, nullable) TGRoute *route;

- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary route:(nullable TGRoute *)route;

@end
