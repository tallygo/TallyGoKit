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

@class TGRouteSegment, TGRoute, TGMapView;

// UIControl classes
@class TGVisualTurnIndicator, TGRouteProgress, TGButton, TGMenuButton, TGWaypoint;

typedef void (^TGTurnByTurnAddWaypointCompletionBlock)(TGRoute *_Nullable newRoute, TGRouteSegment *_Nullable nextSegment, NSError *_Nullable error);

/// Storyboad name
FOUNDATION_EXPORT NSString * _Nonnull const TGTurnByTurnControllerStoryboardName;

FOUNDATION_EXPORT NSErrorDomain const TGTurnByTurnViewControllerErrorDomain;

NS_ERROR_ENUM(TGTurnByTurnViewControllerErrorDomain) {
    TGTurnByTurnViewControllerErrorPrecedingWaypointNotFound,
};

/// View controller with TallyGo navigation and map view
@interface TGTurnByTurnViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate, TGTurnByTurnConfigurable, UINavigationControllerDelegate>

/// Map view
@property (nonatomic, readonly, nonnull) TGMapView *mapView;

/// The origin coordinate to request. This is an alternative to providing a full `routeRequest`. If specified, a `destination` must also be specified.
@property (nonatomic) CLLocationCoordinate2D origin;

/// The destination coordinate to request. This is an alternative to providing a full `routeRequest`. If specified, an `origin` may also be specified. If `origin` is not specified, the user's current location will be used.
@property (nonatomic) CLLocationCoordinate2D destination;

/// The origin to request. This is an alternative to providing a full `routeRequest`. If specified, a `destinationWaypoint` must also be specified. If you would like to use the user's current location as the origin, you may choose to use `TGWaypoint`'s alternative constructor `initWithUserCurrentLocation`.
@property (nonatomic, nullable) TGWaypoint *originWaypoint;

/// The destination to request. This is an alternative to providing a full `routeRequest`. If specified, an `originWaypoint` must also be specified.
@property (nonatomic, nullable) TGWaypoint *destinationWaypoint;

/// The route to request for navigation. If specified, it will be requested and the resulting route will be used.
@property (nonatomic, nullable) TGRouteRequest *routeRequest;

/// The route to use for navigation. You can specify this directly if you already made a request and have the result. Otherwise, this property will reflect the route after it has been requested.
@property (nonatomic, nullable) TGRoute *route;

/// The route segment that is currently being navigated
@property (nonatomic, readonly, nullable) TGRouteSegment *currentRouteSegment;

/**
 * If enabled, when turn-by-turn navigation is active, the user's location will be 'snapped' onto the route; in other words, if the driver is slightly away from the route (most likely due to inaccuracy inherent in location services), the UI will show the driver at their most probable location on the route instead. This is enabled by default, but you can turn it off to show the driver's actual location as reported by Location Services. This is only available when turn-by-turn navigation is in progress; when using a map view without turn-by-turn, this property has no effect.
 */
@property (nonatomic) BOOL snapToRoute;

/// If enabled, shows colored traffic lines as an overlay on the map
@property (nonatomic) BOOL showTraffic;

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

/**
 * Programatically adds a waypoint to the current navigation session while it is already in progress. This does not display any additional UI, warning, or notification to the user; the change takes effect immediately and silently. You should probably provide your own UI to confirm with or inform the user that this is going to happen.
 *
 * @param precedingWaypoint The waypoint after which the new waypoint should be added. This parameter must be a waypoint that the driver has not yet arrived at. If you attempt to use a waypoint that the driver has already arrived at, or if you use any waypoint that is not included in the existing route, then the method will return a `TGTurnByTurnViewControllerErrorPrecedingWaypointNotFound` error in the completion block and the new waypoint will not be added.
 */
- (void)addWaypoint:(TGWaypoint *)waypoint afterWaypoint:(TGWaypoint *)precedingWaypoint completion:(TGTurnByTurnAddWaypointCompletionBlock)completion;

@end
