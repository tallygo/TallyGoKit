//
//  TGTurnListViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/9/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TGStoryboardInitializableViewController.h"

@class TGRouteSegment;

@interface TGTurnListViewController : TGStoryboardInitializableViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, nullable) TGRouteSegment *segment;

@property (nonatomic, nullable) NSString *originDescription;

@property (nonatomic, nullable) NSString *destinationDescription;

@end
