//
//  TGConfigurationService.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseService.h"
#import "TGConfigurationRequest.h"
#import "TGConfigurationResponse.h"

typedef void (^TGConfigurationHandler)(TGConfigurationResponse * _Nullable response);

@interface TGConfigurationService : TGBaseService

@property (class, nullable) TGConfigurationResponse *configurationResponse;

+ (nullable NSURLSessionDataTask *)get:(nonnull TGConfigurationHandler)completion;

+ (nullable NSURLSessionDataTask *)getWithRequest:(nonnull TGConfigurationRequest *)request
                                       completion:(nonnull TGConfigurationHandler)completion;

@end
