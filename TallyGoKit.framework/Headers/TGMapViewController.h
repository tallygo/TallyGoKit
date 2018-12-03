//
//  TGMapViewController.h
//  TallyGoKit
//
//  Created by David Deller on 2/7/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <Mapbox/Mapbox.h>

#import "TGStoryboardInitializableViewController.h"
#import "TGSearchResultsViewControllerDelegate.h"
#import "TGSearchViewControllerDelegate.h"
#import "TGMapView.h"
#import "TGTurnByTurnConfiguration.h"

@class TGCompassButton;

/**
 * A view controller that shows a map, complete with search bar, compass toggle button, and hamburger menu button (the latter of which can be customized).
 */
@interface TGMapViewController : TGStoryboardInitializableViewController <TGSearchResultsViewControllerDelegate, TGSearchViewControllerDelegate, UIGestureRecognizerDelegate, MGLMapViewDelegate, TGTurnByTurnConfigurable, UINavigationControllerDelegate>

/**
 * Whether to show a 'hambuger' style menu button. By default, it does nothing when tapped, but you can implement a handler with `didSelectMenuButton`.
 * @default YES
 */
@property (nonatomic) BOOL showMenuButton;

/**
 * Whether to show a button that toggles the compass mode of the map (whether up is north, or whether up is the direction the user is facing).
 * @default YES
 */
@property (nonatomic) BOOL showCompassButton;

/**
 * Whether to show the TallyGo logo at the bottom of the map view.
 * @default NO
 */
@property (nonatomic) BOOL showTallyGoLogo;

/**
 * If enabled, when turn-by-turn navigation is active, the user's location will be 'snapped' onto the route; in other words, if the driver is slightly away from the route (most likely due to inaccuracy inherent in location services), the UI will show the driver at their most probable location on the route instead. This is enabled by default, but you can turn it off to show the driver's actual location as reported by Location Services. This is only available when turn-by-turn navigation is in progress; when using a map view without turn-by-turn, this property has no effect.
 */
@property (nonatomic) BOOL snapToRoute;

/// If enabled, shows colored traffic lines as an overlay on the map
@property (nonatomic) BOOL showTraffic;


@property (nonatomic, readonly, nonnull) TGMapView *mapView;

/**
 * This block is executed when the user taps the hamburger button. You should present a menu of some kind, perhaps with an option to exit the map and return
 * to the rest of your app.
 */
@property (nonatomic, copy, nullable) void (^onSelectMenuButton)(void);

@property (nonatomic, readonly, nonnull) TGTurnByTurnConfiguration *configuration;

/**
 * When the user is searching for or selecting a location, whether to show additional details such as Yelp or
 * Foursquare rating, phone number, web site, etc. Not available for every location. Defaults to `NO`.
 */
@property (nonatomic) BOOL showExtendedLocationDetails;

@end
