//
//  TGPreviewViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/12/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <TallyGoKit/TallyGoKit.h>
#import <Mapbox/Mapbox.h>

#import "TGStoryboardInitializableViewController.h"
#import "TGTurnByTurnConfiguration.h"
#import "TGSearchViewControllerDelegate.h"
#import "TGWaypointsListViewController.h"

@interface TGPreviewViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate, TGTurnByTurnConfigurable>

/// The route to use for navigation. You can specify this directly if you already made a request and have the result. Otherwise, this property will reflect the route after it has been requested.
@property (nonatomic, nullable) TGRoute *route;

/// The current trip ID, if any. Used when requesting a new route, necessary if the user adds a new waypoint.
@property (nonatomic, nullable) NSString *tripId;

/// Whether to provide a UI for adding waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowAddingWaypoints;

@property (nonatomic, copy, nullable) void (^onStartTurnByTurn)(TGRoute *route);

/// This optional block is called whenever the user's actions result in a new route being generated.
@property (nonatomic, copy, nullable) TGWaypointsListRouteChangeBlock onRouteChange;

@property (nonatomic, readonly, nonnull) TGTurnByTurnConfiguration *configuration;

@end
