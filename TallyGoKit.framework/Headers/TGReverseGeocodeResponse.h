//
//  TGReverseGeocodeResponse.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseResponse.h"

#import <CoreLocation/CoreLocation.h>

@class TGStreetAddress;

/// Response object from the reverse geocode function.
@interface TGReverseGeocodeResponse : TGBaseResponse

/// The point found for the closest address.
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/// The address object containing detailed location information.
@property (nonatomic, readwrite) TGStreetAddress *address;

@end
