//
//  TGRoute.h
//  TallyGoKit
//
//  Created by David Deller on 11/29/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <CoreLocation/CoreLocation.h>

@class TGRouteSegment;

/**
 TGRoute represents a drivable route between points in the road network. A route consists of one or more segments, which in turn consist of a collection of points on the road network.
 
 A segment consists of an ordered collection of points. Points serve a few purposes. First, they express the shape of the path along the road. Points also allow the routing engine to insert specific instructions, like an instruction to prepare for an upcoming highway exit.
 
 See TGSegment and TGPoint for details.
 */
@interface TGRoute : TGBaseObject

@property (nonatomic, readonly, nonnull) NSArray<TGRouteSegment *> *segments;

/// The total travel distance across all segments, represented in meters.
@property (nonatomic, readonly) CLLocationDistance totalDistance;

/// Estimated driven travel time across all segments, in seconds.
@property (nonatomic, readonly) NSTimeInterval totalDuration;

/// A unique ID representing a sequence of segments from different rerouting event.
@property (nonatomic, readwrite, nonnull) NSString *tripId;

- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary tripId:(nullable NSString *)tripId;

@end
