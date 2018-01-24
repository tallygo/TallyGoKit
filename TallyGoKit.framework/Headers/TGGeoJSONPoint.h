//
//  TGGeoJSONPoint.h
//  TallyGoKit
//
//  Created by David Deller on 12/1/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGGeoJSONObject.h"

/// A GeoJSON object that represents a single point.
@interface TGGeoJSONPoint : TGGeoJSONObject

/// The coordinate of the point represented.
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@end
