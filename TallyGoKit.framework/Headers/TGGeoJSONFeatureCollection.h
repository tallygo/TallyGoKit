//
//  TGGeoJSONFeatureCollection.h
//  TallyGoKit
//
//  Created by David Deller on 12/1/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGGeoJSONObject.h"

@class TGGeoJSONFeature;

/// A collection of GeoJSON features.
@interface TGGeoJSONFeatureCollection : TGGeoJSONObject

@property (nonatomic, readonly, nonnull) NSArray <TGGeoJSONFeature *> *features;

@end
