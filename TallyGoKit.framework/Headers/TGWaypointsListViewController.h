//
//  TGWaypointsListViewController.h
//  TallyGoKit
//
//  Created by David Deller on 6/18/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TGTurnByTurnConfiguration.h"
#import "TGStoryboardInitializableViewController.h"
#import "TGSearchViewControllerDelegate.h"

@class TGRoute, TGWaypoint;

typedef void (^TGWaypointsListRouteChangeBlock)(TGRoute *_Nonnull newRoute, TGRouteSegment *_Nullable nextSegment);

@interface TGWaypointsListViewController : TGStoryboardInitializableViewController <UITableViewDataSource, UITableViewDelegate, TGTurnByTurnConfigurable>

@property (nonatomic, readonly, nonnull) TGTurnByTurnConfiguration *configuration;

/// The route whose waypoints to show.
@property (nonatomic, nonnull) TGRoute *route;

/// The next waypoint that the user is currently travelling towards. Waypoints prior to this one will not be shown.
@property (nonatomic, nonnull) TGWaypoint *nextWaypoint;

/// The current trip ID, if any. Used when requesting a new route, necessary if the user edits the waypoints list.
@property (nonatomic, nullable) NSString *tripId;

/// Whether to provide a UI for adding waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowAddingWaypoints;

/// Whether to provide a UI for reordering waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowReorderingWaypoints;

/// Whether to provide a UI for removing waypoints. Defaults to `YES`.
@property (nonatomic) BOOL allowRemovingWaypoints;

/// If any of the three properties `allowAddingWaypoints`, `allowReorderingWaypoints`, or `allowRemovingWaypoints` are `YES`, then this block must be provided. It should return a waypoint corresponding to the user's current location, on demand.
@property (nonatomic, copy, nonnull) TGWaypoint *_Nonnull (^getCurrentLocationWaypoint)(void);

/// This optional block is called whenever the user's actions result in a new route being generated.
@property (nonatomic, copy, nullable) TGWaypointsListRouteChangeBlock onRouteChange;

@end
