//
//  TGTurnByTurnConfiguration.h
//  TallyGoKit
//
//  Created by David (work 2) on 3/1/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <AVFoundation/AVFoundation.h>

@class TGRouteSegment, TGTurnByTurnConfiguration;

/**
 * Protocol for view controllers that can use a TGTurnByTurnConfiguration
 */
@protocol TGTurnByTurnConfigurable

/// Create a new instance of the view controller with a given TGTurnByTurnConfiguration
+ (nonnull instancetype)createWithConfiguration:(nonnull TGTurnByTurnConfiguration *)configuration;

/// The TGTurnByTurnConfiguration that was used to create the view controller. Do not attempt to modify any properties after creation.
- (nonnull TGTurnByTurnConfiguration *)configuration;

@end

/**
 * Contains configuration settings that can be used by the various view controllers related to turn-by-turn navigation.
 */
@interface TGTurnByTurnConfiguration : NSObject

/// The requested origin location
@property (nonatomic) CLLocationCoordinate2D origin;

/// The requested destination. If this is changed while en route, a reroute will be triggered.
@property (nonatomic) CLLocationCoordinate2D destination;

/// The current segment
@property (nonatomic, nullable) TGRouteSegment *segment;

/// Determines whether origin icon is displayed
@property (nonatomic) BOOL showsOriginIcon;

/// Determines whether destination icon is displayed
@property (nonatomic) BOOL showsDestinationIcon;

/// Text that will be spoken as view is displayed
@property (nonatomic, nullable) NSString *commencementSpeech;

/// Text that will be spoken when the user needs to proceed to the route
@property (nonatomic, nullable) NSString *proceedToRouteSpeech;

/// Text that will be spoken upon arrival
@property (nonatomic, nullable) NSString *arrivalSpeech;

/// Text used in local notification if app is in background
@property (nonatomic, nullable) NSString *arrivalNotificationMessage;

/// The voice that should be used for voice prompts during the route.
@property (nonatomic, nullable) AVSpeechSynthesisVoice *voice;

/// Do not use. For internal testing only.
@property (nonatomic) BOOL showMakeWrongTurnButton;

/// Address to be displayed in the route progress bar
@property (nonatomic, nullable) NSString *destinationAddressShort;

/// Address to be displayed on the turn list
@property (nonatomic, nullable) NSString *originDescription;

/// Address to be displayed in the arrival overlay under the address, and on the turn list
@property (nonatomic, nullable) NSString *destinationDescription;

/// Override point to perform additional layout tasks. Default implementation does nothing.
@property (nonatomic, copy, nullable) void (^performAdditionalLayout)(void);

/// Override point to perform tasks at arrival. Default implementation does nothing.
@property (nonatomic, copy, nullable) void (^performActionOnArrival)(void);

@end
