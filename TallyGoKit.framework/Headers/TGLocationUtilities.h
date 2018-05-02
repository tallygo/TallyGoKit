//
//  TGLocationUtilities.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/// Encodes coordinates as lat,long.
NSString * _Nonnull TGLocationCoordinate2DMakeString(CLLocationCoordinate2D location);

/// Encodes coordinates as long,lat.
NSString * _Nonnull TGLocationCoordinate2DMakeLegacyString(CLLocationCoordinate2D location);

/// Finds the distance (as the crow flies) between two `CLLocationCoordinate2d`s.
CLLocationDistance TGLocationCoordinateDistanceFromCoordinate(CLLocationCoordinate2D coordinate1, CLLocationCoordinate2D coordinate2);

