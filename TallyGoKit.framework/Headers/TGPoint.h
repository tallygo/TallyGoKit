//
//  TGPoint.h
//  TallyGoKit
//
//  Created by David Deller on 11/30/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <CoreLocation/CoreLocation.h>

@class TGTurn;

/**
 TGPoint represents a specific location along the route, and may also contain data important at that location.
 
 Points occur at locations considered important for any of these reasons:
 - Start and end points of a segment
 - Geographic significance, like a bend in the road
 - A location that requires navigation instructions to be given to the driver. Refer to notify and say memebrs.
 - An intersection. If the driver needs to make a turn, the turn property contains information about the action the driver should take.
 */
@interface TGPoint : TGBaseObject

/// The turn at this point.
@property (nonatomic, readonly, nullable) TGTurn *turn;

/// The out-of-app notification to be displayed at or near this point.
@property (nonatomic, readonly, nullable) NSString *notify;

/// Estimated travel time in seconds from the previous point.
@property (nonatomic, readonly) NSTimeInterval travelTime;

/// The distance in meters from the previous point.
@property (nonatomic, readonly) CLLocationDistance distance;

/// The latitude of this point.
@property (nonatomic, readonly) CLLocationDegrees latitude;

/// The longitude of this point.
@property (nonatomic, readonly) CLLocationDegrees longitude;

/// The coordinate of the point being represented.
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

/// The instructions to be spoken at or near this point.
@property (nonatomic, readonly, nullable) NSArray<NSString *> *say;

@end
