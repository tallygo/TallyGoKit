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

@class TGCompassButton;

/**
 * A view controller that shows a map, complete with search bar, compass toggle button, and hamburger menu button (the latter of which can be customized).
 */
@interface TGMapViewController : TGStoryboardInitializableViewController <TGSearchResultsViewControllerDelegate, TGSearchViewControllerDelegate, UIGestureRecognizerDelegate, MGLMapViewDelegate>

/**
 * A 'hambuger' style menu button. By default, it does nothing when tapped, but you can implement a handler with `didSelectMenuButton`. You can hide this
 * button if you don't need it.
 */
@property (nonatomic, nonnull) IBOutlet UIButton *menuButton;

/**
 * A button that toggles the compass mode of the map (whether up is north, or whether up is the direction the user is facing). You can hide this button if
 * you don't need it.
 */
@property (nonatomic, nonnull) IBOutlet TGCompassButton *compassButton;

/**
 * Whether to show the TallyGo logo at the bottom of the map view.
 * @default NO
 */
@property (nonatomic) BOOL showTallyGoLogo;


@property (nonatomic, readonly, nonnull) TGMapView *mapView;

/**
 * This block is executed when the user taps the hamburger button. You should present a menu of some kind, perhaps with an option to exit the map and return
 * to the rest of your app.
 */
@property (nonatomic, copy, nullable) void (^onSelectMenuButton)(void);

@end
