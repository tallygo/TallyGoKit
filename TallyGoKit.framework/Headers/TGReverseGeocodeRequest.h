//
//  TGReverseGeocodeRequest.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseRequest.h"

#import <CoreLocation/CoreLocation.h>

/// Request for reverse geocoding a coordinate
@interface TGReverseGeocodeRequest : TGBaseRequest

/// Defines the point location to be reverse geocoded.
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/// Create a reverse geocode request with the required location parameters.
- (nonnull instancetype)initWithLocation:(CLLocationCoordinate2D)location;

@end
