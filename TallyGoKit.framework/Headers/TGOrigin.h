//
//  TGOrigin.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Origin enumeration.
typedef NSString *TGOrigin NS_TYPED_ENUM;

/// Open Street Maps
FOUNDATION_EXPORT TGOrigin const TGOriginOSM;
/// ArcGIS
FOUNDATION_EXPORT TGOrigin const TGOriginArcGIS;
/// TallyGo
FOUNDATION_EXPORT TGOrigin const TGOriginTallyGo;
/// Yelp
FOUNDATION_EXPORT TGOrigin const TGOriginYelp;
/// Foursquare
FOUNDATION_EXPORT TGOrigin const TGOriginFoursquare;
/// Mapbox
FOUNDATION_EXPORT TGOrigin const TGOriginMapBox;
/// Unknown origin
FOUNDATION_EXPORT TGOrigin const TGOriginUnknown;
