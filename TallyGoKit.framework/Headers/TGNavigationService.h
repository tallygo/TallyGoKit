//
//  TGNavigation.h
//  TallyGoKit
//
//  Created by David Deller on 11/29/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseService.h"

@class TGRouteRequest, TGRouteResponse, TGBoundaryRequest, TGBoundaryResponse;

/// Provides an interface to TallyGo's navigation API.
@interface TGNavigationService : TGBaseService

/// Find the fastest route given multiple waypoints, a time, and a search type describing whether the time is a departure or arrival time.
+ (nullable NSURLSessionDataTask *)routeForRequest:(nonnull TGRouteRequest *)request completionHandler:(void (^ _Nonnull)(TGRouteResponse * _Nonnull response))completionHandler;

/// Returns the boundary of the supported navigation area. The navigation API is unable to handle routes outside of these bounds.
+ (nullable NSURLSessionDataTask *)boundaryForRequest:(nullable TGBoundaryRequest *)request completionHandler:(void (^ _Nonnull)(TGBoundaryResponse * _Nonnull response))completionHandler;

@end
