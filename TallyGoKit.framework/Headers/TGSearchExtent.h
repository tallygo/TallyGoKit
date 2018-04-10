//
//  TGSearchExtent.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <Mapbox/Mapbox.h>

/// Represents a rectagular area.
@interface TGSearchExtent : NSObject

/// The southwest coordinate.
@property (nonatomic, readonly) CLLocationCoordinate2D southwestCoordinate;

/// The northeast coordinate.
@property (nonatomic, readonly) CLLocationCoordinate2D northeastCoordinate;

/// Create a rectangular area.
- (nonnull instancetype)initWithSouthwestCoordinate:(CLLocationCoordinate2D)southwestCoordinate northeastCoordinate:(CLLocationCoordinate2D)northeastCoordinate;

- (nonnull instancetype)initWithCoordinateBounds:(MGLCoordinateBounds)coordinateBounds;

/// A comma separated string of longitude and latitude.
- (NSString * _Nonnull)string;

@end
