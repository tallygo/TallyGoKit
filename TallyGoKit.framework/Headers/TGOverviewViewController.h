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

@class TGRouteSegment;

@interface TGOverviewViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate>

@property (nonatomic, nullable) TGRouteSegment *segment;

@end
