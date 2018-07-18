//
//  TGBaseResponse.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"
#import "TGBaseRequest.h"

FOUNDATION_EXPORT NSErrorDomain const TGBaseResponseErrorDomain;

NS_ERROR_ENUM(TGBaseResponseErrorDomain) {
    TGBaseResponseErrorServerIndicatedFailure,
    TGBaseResponseErrorHTTPStatusCodeFailure,
    TGBaseResponseErrorJSONUnexpectedFormat,
};

typedef NSString *TGBaseResponseErrorUserInfoKey NS_TYPED_ENUM;

FOUNDATION_EXPORT TGBaseResponseErrorUserInfoKey const TGBaseResponseErrorUserInfoKeyServerErrorCode;
FOUNDATION_EXPORT TGBaseResponseErrorUserInfoKey const TGBaseResponseErrorUserInfoKeyDetails;
FOUNDATION_EXPORT TGBaseResponseErrorUserInfoKey const TGBaseResponseErrorUserInfoKeyMessage;
FOUNDATION_EXPORT TGBaseResponseErrorUserInfoKey const TGBaseResponseErrorUserInfoKeyHTTPStatusCode;

@interface TGBaseResponse : TGBaseObject

@property (nonatomic, readonly, nullable) NSData *data;
@property (nonatomic, readonly, nullable) TGBaseRequest *request;
@property (nonatomic, readonly, nullable) NSHTTPURLResponse *response;
@property (nonatomic, readonly, nullable) NSError *error;
@property (nonatomic, readonly, nonnull) NSDate *timestamp;
@property (nonatomic, readonly) BOOL isCancelled;

- (instancetype _Nonnull)initWithData:(NSData * _Nullable)data
                             request:(TGBaseRequest * _Nullable)request
                             response:(NSURLResponse * _Nullable)response
                                error:(NSError * _Nullable)error;

- (void)processErrors;
- (void)processResponse;
- (void)processTracking;

- (BOOL)shouldProcessTracking;

@end
