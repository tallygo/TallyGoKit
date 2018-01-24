//
//  TGVoice.h
//  TallyGoKit
//
//  Created by David Deller on 12/20/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

/// Reserved for future use.
@interface TGVoice : NSObject

+ (nullable AVSpeechSynthesisVoice *)enhancedVoice;

@end
