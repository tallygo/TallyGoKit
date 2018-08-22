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

@class TGRouteSegment, TGTurnByTurnConfiguration, TGRouteRequest, TGRoute, TGWaypoint;

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

/// The origin coordinate to request. This is a quick convenient alternative to providing a full `routeRequest`. If specified, a `destination` must also be specified.
@property (nonatomic) CLLocationCoordinate2D origin;

/// The destination coordinate to request. This is a quick convenient alternative to providing a full `routeRequest`. If specified, an `origin` must also be specified.
@property (nonatomic) CLLocationCoordinate2D destination;

/// The route to request for navigation. If specified, it will be requested and the resulting route will be used.
@property (nonatomic, nullable) TGRouteRequest *routeRequest;

/// The route to use for navigation. You can specify this directly if you already made a request and have the result.
@property (nonatomic, nullable) TGRoute *route;

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

/// Override point to perform tasks at arrival. Default implementation does nothing.
@property (nonatomic, copy, nullable) void (^onArrival)(TGWaypoint *_Nonnull destination);


/// Whether to provide a UI for adding waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowAddingWaypoints;

/// Whether to provide a UI for reordering waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowReorderingWaypoints;

/// Whether to provide a UI for removing waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowRemovingWaypoints;

/**
 * When the user is searching for a location, whether to show recent searches. These will be stored in NSUserDefaults.
 */
@property (nonatomic) BOOL showRecentSearches;

/**
 * When the user is searching for or selecting a location, whether to show additional details such as Yelp or
 * Foursquare rating, phone number, web site, etc. Not available for every location. Defaults to `NO`.
 */
@property (nonatomic) BOOL showExtendedLocationDetails;

@end
