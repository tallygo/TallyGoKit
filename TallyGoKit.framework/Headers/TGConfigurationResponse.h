//
//  TGConfigurationResponse.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseResponse.h"

FOUNDATION_EXPORT NSErrorDomain const TGConfigurationResponseErrorDomain;

NS_ERROR_ENUM(TGConfigurationResponseErrorDomain) {
    TGConfigurationResponseErrorInvalidAccessToken = 401,
};

@interface TGConfigurationResponse : TGBaseResponse

@property (nonatomic, readonly, nullable) NSURL *findRootURL;
@property (nonatomic, readonly) NSTimeInterval mapRefreshInterval;
@property (nonatomic, readonly, nullable) NSURL *mapstyleURL;
@property (nonatomic, readonly, nullable) NSURL *navigationRootURL;
@property (nonatomic, readonly, nullable) NSString *parseApplicationID;
@property (nonatomic, readonly, nullable) NSURL *parseRootURL;
@property (nonatomic, readonly, nullable) NSURL *voxRootURL;
@property (nonatomic, readonly) NSInteger navigationWaypointLimit;

@end
