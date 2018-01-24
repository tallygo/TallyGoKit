//
//  TGBaseService.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGConfigurationResponse.h"

@interface TGBaseService : NSObject

typedef void (^TGServiceHandler)(void);

@property (class, readonly) NSURLSession *sharedSession;

+ (void)loadConfiguration:(TGServiceHandler)completion;

@end
