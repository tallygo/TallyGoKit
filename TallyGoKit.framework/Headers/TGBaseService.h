//
//  TGBaseService.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGConfigurationResponse.h"

FOUNDATION_EXPORT NSErrorDomain const TGBaseServiceErrorDomain;

NS_ERROR_ENUM(TGBaseServiceErrorDomain) {
    TGBaseServiceErrorNotInitialized,
    TGBaseServiceErrorWaitingForConnection,
};

@interface TGBaseService : NSObject

@property (class, readonly) NSURLSession *sharedSession;

@end
