//
//  TGMapStyle.h
//  TallyGoKit
//
//  Created by David Deller on 12/22/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString * _Nonnull const TGMapStyleTrafficTestString;

/// URLs for the TallyGo map styles
@interface TGMapStyle : NSObject

/// URL for map style without traffic overlay.
@property (class, nonatomic, readonly, nullable) NSURL *normalURL;

/// URL for map style with traffic overlay.
@property (class, nonatomic, readonly, nullable) NSURL *trafficURL;

@end
