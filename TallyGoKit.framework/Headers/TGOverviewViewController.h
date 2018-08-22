//
//  TGOverviewViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/10/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <TallyGoKit/TallyGoKit.h>
#import "TGStoryboardInitializableViewController.h"
#import <Mapbox/Mapbox.h>

@class TGRoute, TGRouteSegment;

@interface TGOverviewViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate>

/// The route to display
@property (nonatomic, nonnull) TGRoute *route;

/// The route segment that is currently displayed. If not provided, the first segment in the route will be used. This property changes whenever the user goes back and forward between the route segments.
@property (nonatomic, nullable) TGRouteSegment *currentRouteSegment;

@end
