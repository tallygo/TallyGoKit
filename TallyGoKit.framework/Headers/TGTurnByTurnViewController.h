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
#import "TGSearchViewControllerDelegate.h"

@class TGRouteSegment, TGRoute;

// UIControl classes
@class TGVisualTurnIndicator, TGRouteProgress, TGButton, TGMenuButton, TGWaypoint;

typedef void (^TGTurnByTurnAddWaypointCompletionBlock)(TGRoute *_Nullable newRoute, TGRouteSegment *_Nullable nextSegment, NSError *_Nullable error);

/// Storyboad name
FOUNDATION_EXPORT NSString * _Nonnull const TGTurnByTurnControllerStoryboardName;

/// View controller with TallyGo navigation and map view
@interface TGTurnByTurnViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate, TGTurnByTurnConfigurable>

/// Map view
@property (nonatomic, readonly, nonnull) MGLMapView *mapView;

/// The origin coordinate to request. This is a quick convenient alternative to providing a full `request`. If specified, a `destination` must also be specified.
@property (nonatomic) CLLocationCoordinate2D origin;

/// The destination coordinate to request. This is a quick convenient alternative to providing a full `request`. If specified, an `origin` must also be specified.
@property (nonatomic) CLLocationCoordinate2D destination;

/// The route to request for navigation. If specified, it will be requested and the resulting route will be used.
@property (nonatomic, nullable) TGRouteRequest *routeRequest;

/// The route to use for navigation. You can specify this directly if you already made a request and have the result. Otherwise, this property will reflect the route after it has been requested.
@property (nonatomic, nullable) TGRoute *route;

/// The route segment that is currently being navigated
@property (nonatomic, readonly, nullable) TGRouteSegment *currentRouteSegment;

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

/// Override point to perform additional layout tasks. Default implementation does nothing.
@property (nonatomic, copy, nullable) void (^onLayout)(void);

/// Override point to perform tasks at arrival. Default implementation does nothing.
@property (nonatomic, copy, nullable) void (^onArrival)(TGWaypoint *_Nonnull destination);

/// Whether to provide a UI for adding waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowAddingWaypoints;

@property (nonatomic, readonly, nonnull) TGTurnByTurnConfiguration *configuration;

/// IBAction for unwind segues.
- (IBAction)backAction:(nonnull UIStoryboardSegue *)segue;

/**
 * Programatically adds a waypoint to the current navigation session while it is already in progress. This does not display any additional UI, warning, or notification to the user; the change takes effect immediately and silently. You should probably provide your own UI to confirm with or inform the user that this is going to happen.
 *
 * @param addToEnd If YES, the waypoint is added to the end of the current route, and the route will continue navigating to the original destination, followed by the new waypoint afterwards. If NO, the waypoint is added to the soonest possible position in the route, and navigation will immediately reroute to this new waypoint, after which it will resume navigating to the original list of waypoints.
 */
- (void)addWaypoint:(TGWaypoint *)waypoint toEnd:(BOOL)addToEnd completion:(TGTurnByTurnAddWaypointCompletionBlock)completion;

@end
