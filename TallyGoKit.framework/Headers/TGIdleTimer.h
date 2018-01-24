//
//  TGIdleTimer.h
//  TallyGoKit
//
//  Created by David Deller on 1/2/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

/// A class that facilitiates disabling the device's idle timer.
@interface TGIdleTimer : NSObject

/// The shared instance of TGIdleTimer.
+ (nonnull instancetype)sharedTimer;

/// Disables the idle timer and prevents the device from sleeping.
- (void)disableIdleTimer;

/// Enables the idle timer and allows the device to sleep, but only after the given delay.
- (void)enableIdleTimerAfterTimeInterval:(NSTimeInterval)timeInterval;

@end
