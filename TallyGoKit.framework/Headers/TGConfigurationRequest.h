//
//  TGConfigurationRequest.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseRequest.h"

@interface TGConfigurationRequest : TGBaseRequest

@property (nonatomic, class, nullable) NSString *configurationName;

@end
