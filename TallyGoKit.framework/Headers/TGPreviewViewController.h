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

@class TGRouteSegment;

@interface TGPreviewViewController : TGStoryboardInitializableViewController <MGLMapViewDelegate>

@property (nonatomic, nullable) TGRouteSegment *segment;
@property (nonatomic) CLLocationCoordinate2D origin;

@property (nonatomic, nullable) NSString *originDescription;

@property (nonatomic, nullable) NSString *destinationDescription;

@property (nonatomic, copy, nullable) void (^onTallyGo)(void);

@end
