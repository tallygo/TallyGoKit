//
//  TGVoiceSynthesis.h
//  TallyGoKit
//
//  Created by David Deller on 12/20/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <Speech/Speech.h>

typedef NS_ENUM(NSInteger, TGVoiceSynthesisResponseCode) {
    /// The request failed.
    TGVoiceSynthesisResponseCodeFailed,
    /// The request text is empty.
    TGVoiceSynthesisResponseCodeEmpty,
    /// Voice synthesis is disabled.
    TGVoiceSynthesisResponseCodeDisabled,
    /// The volume is set to 0 and cannot play audio.
    TGVoiceSynthesisResponseCodeNotPlayedVolumeAtZero,
    /// Voice synthesis is paused.
    TGVoiceSynthesisResponseCodeNotPlayedInPause,
    /// Voice synthesis queued.
    TGVoiceSynthesisResponseCodeQueued,
    /// Voice synthesis played.
    TGVoiceSynthesisResponseCodePlayed
};

/// Service to speak and preload voice prompts.
@interface TGVoiceSynthesis : NSObject <AVSpeechSynthesizerDelegate>

/// Allows the voice service to be turned on/off globally.
@property (class, nonatomic) BOOL enabled;

/// The shared instance of TGVoiceSynthesis.
@property (class, nonatomic, readonly, nonnull) TGVoiceSynthesis *sharedVoiceSynthesis;

/// Speaks the requested voice prompt using the current voice. If the audio is already cached, it will be used, otherwise it will be downloaded.
- (TGVoiceSynthesisResponseCode)say:(nonnull NSString *)text;

@end
