//
//  TGBoundaryResponse.h
//  TallyGoKit
//
//  Created by David Deller on 12/1/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseResponse.h"

@class TGGeoJSONFeatureCollection;

/// The response that contains the boundary of the covered navigational area.
@interface TGBoundaryResponse : TGBaseResponse

@property (nonatomic, readonly, nullable) TGGeoJSONFeatureCollection *featureCollection;

@end
