//
//  TGRouteResponse.h
//  TallyGoKit
//
//  Created by David Deller on 11/29/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseResponse.h"

@class TGRoute;

/// Response object from navigation API call.
@interface TGRouteResponse : TGBaseResponse

/// The route that was generated.
@property (nonatomic, readonly, nullable) TGRoute *route;

@end
