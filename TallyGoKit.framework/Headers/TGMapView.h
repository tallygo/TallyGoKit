//
//  TGStyledMapView.h
//  TallyGoKit
//
//  Created by David Deller on 12/22/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <Mapbox/Mapbox.h>

/// A subclass of MGLMapView that uses the TallyGo map style and updates traffic lines.
@interface TGMapView : MGLMapView <CLLocationManagerDelegate>

/**
 * If enabled, when turn-by-turn navigation is active, the user's location will be 'snapped' onto the route; in other words, if the driver is slightly away from the route (most likely due to inaccuracy inherent in location services), the UI will show the driver at their most probable location on the route instead. This is enabled by default, but you can turn it off to show the driver's actual location as reported by Location Services. This is only available when turn-by-turn navigation is in progress; when using a map view without turn-by-turn, this property has no effect.
 */
@property (nonatomic) BOOL snapToRoute;

/// If enabled, shows colored traffic lines as an overlay on the map
@property (nonatomic) BOOL showTraffic;

/// Initializer that allows specifying TallyGo configuration
- (instancetype)initWithFrame:(CGRect)frame showTraffic:(BOOL)showTraffic snapToRoute:(BOOL)snapToRoute;

@end
