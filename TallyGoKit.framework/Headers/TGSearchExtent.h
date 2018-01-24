//
//  TGSearchExtent.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/// Represents a rectagular area.
@interface TGSearchExtent : NSObject

/// The southwest coordinate.
@property (nonatomic, readonly) CLLocationCoordinate2D southwestCoordinate;

/// The northeast coordinate.
@property (nonatomic, readonly) CLLocationCoordinate2D northeastCoordinate;

/// Create a rectangular area.
- (instancetype _Nonnull)initWithSouthwestCoordinate:(CLLocationCoordinate2D)southwestCoordinate northeastCoordinate:(CLLocationCoordinate2D)northeastCoordinate;

/// A comma separated string of longitude and latitude.
- (NSString * _Nonnull)string;

@end
