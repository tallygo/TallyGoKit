//
//  TGGeoJSONFeature.h
//  TallyGoKit
//
//  Created by David Deller on 12/1/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGGeoJSONObject.h"

/// A GeoJSON feature.
@interface TGGeoJSONFeature : TGGeoJSONObject

/// Describes the shape of the GeoJSON object.
@property (nonatomic, readonly, nullable) TGGeoJSONObject *geometry;

@end
