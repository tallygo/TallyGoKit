//
//  TGBaseResponse.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"
#import "TGBaseRequest.h"

@interface TGBaseResponse : TGBaseObject

@property (nonatomic, readonly, nullable) NSData *data;
@property (nonatomic, readonly, nullable) TGBaseRequest *request;
@property (nonatomic, readonly, nullable) NSURLResponse *response;
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

@end
