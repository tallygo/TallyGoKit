//
//  TGEventService.h
//  TallyGoKit
//
//  Created by David Deller on 12/19/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseService.h"

@class TGEventRequest, TGEventResponse;

/// Provides an interface to TallyGo's events API providing accident and road hazard information.
@interface TGEventService : TGBaseService

/// Retrieves a list of current accidents and hazards for the supported service area.
+ (nullable NSURLSessionDataTask *)getWithRequest:(nullable TGEventRequest *)request completionHandler:(void (^_Nonnull)(TGEventResponse * _Nonnull response))completionHandler;

@end
