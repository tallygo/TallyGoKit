//
//  TGGeoJSONPolygon.h
//  TallyGoKit
//
//  Created by David Deller on 12/1/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGGeoJSONObject.h"

/// A GeoJSON polygon.
@interface TGGeoJSONPolygon : TGGeoJSONObject

/// An array of coordinate arrays.
@property (nonatomic, readonly, nonnull) NSArray <NSArray *> *coordinates;

@end
