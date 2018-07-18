//
//  TGSearchCategoryService.h
//  TallyGoKit
//
//  Created by David Deller on 12/19/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseService.h"

@class TGSearchCategoryRequest, TGSearchCategoryResponse;

@interface TGSearchCategoryService : TGBaseService

@property (class, nonatomic, nullable) TGSearchCategoryResponse *cachedResponse;

+ (nullable NSURLSessionDataTask *)getWithRequest:(nullable TGSearchCategoryRequest *)request completionHandler:(void (^_Nonnull)(TGSearchCategoryResponse * _Nonnull response))completionHandler;

@end
