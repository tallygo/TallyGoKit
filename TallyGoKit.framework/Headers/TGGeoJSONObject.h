//
//  TGGeoJSONObject.h
//  TallyGoKit
//
//  Created by David Deller on 12/1/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <CoreLocation/CoreLocation.h>

/// An enumeration of GeoJSON object types.
typedef NSString *TGGeoJSONObjectType NS_TYPED_ENUM;

/// A collection of items
FOUNDATION_EXPORT TGGeoJSONObjectType _Nonnull const TGGeoJSONObjectTypeFeatureCollection;

/// A GeoJSON item
FOUNDATION_EXPORT TGGeoJSONObjectType _Nonnull const TGGeoJSONObjectTypeFeature;

/// A GeoJSON shape with defined edges
FOUNDATION_EXPORT TGGeoJSONObjectType _Nonnull const TGGeoJSONObjectTypePolygon;

/// A GeoJSON point
FOUNDATION_EXPORT TGGeoJSONObjectType _Nonnull const TGGeoJSONObjectTypePoint;

FOUNDATION_EXPORT TGGeoJSONObjectType _Nonnull const TGGeoJSONObjectTypeUnknown;

/// A GeoJSON object.
@interface TGGeoJSONObject : TGBaseObject

/// The type of GeoJSON object
@property (nonatomic, readonly, nullable) TGGeoJSONObjectType type;

/// Factory class for create GeoJSON objects.
+ (nullable TGGeoJSONObject *)geoJSONObjectForDictionary:(nonnull NSDictionary *)dictionary;

/// A method to determine if a GeoJSON object contains a given coordinate. Use this to test your origin and destination locations before attempting to generate a route.
- (BOOL)containsCoordinate:(CLLocationCoordinate2D)coordinate;

@end
