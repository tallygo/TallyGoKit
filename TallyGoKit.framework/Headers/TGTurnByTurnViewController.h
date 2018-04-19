//
//  TGTurnByTurnViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/2/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Mapbox/Mapbox.h>
#import <AVFoundation/AVFoundation.h>
#import "TGStoryboardInitializableViewController.h"
#import "TGTurnByTurnConfiguration.h"

@class TGRouteSegment;

// UIControl classes
@class TGVisualTurnIndicator, TGRouteProgress, TGButton, TGMenuButton;

/// Storyboad name
FOUNDATION_EXPORT NSString * _Nonnull const TGTurnByTurnControllerStoryboardName;

/// View controller with TallyGo navigation and map view
@interface TGTurnByTurnViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate, TGTurnByTurnConfigurable>

/// Map view
@property (nonatomic, readonly, nonnull) MGLMapView *mapView;

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

@property (nonatomic, readonly, nonnull) TGTurnByTurnConfiguration *configuration;

/// IBAction for unwind segues.
- (IBAction)backAction:(nonnull UIStoryboardSegue *)segue;

@end
