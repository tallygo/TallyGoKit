//
//  TGBaseRequest.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGBaseRequest : NSObject

@property (nonatomic, class, nullable) NSString *accessToken;

@property (nonatomic, readonly, nullable) NSURLRequest *getRequest;
@property (nonatomic, readonly, nullable) NSURLRequest *postRequest;
@property (nonatomic, readonly, nullable) NSURLRequest *putRequest;
//@property (nonatomic, readonly, nullable) NSURLRequest *deleteRequest;

@property (nonatomic, readonly, nullable) NSURL *url;

@end
