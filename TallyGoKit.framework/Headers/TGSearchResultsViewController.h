//
//  TGSearchResultsViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/16/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <TallyGoKit/TallyGoKit.h>

#import "TGStoryboardInitializableViewController.h"
#import "TGSearchResultsViewControllerDelegate.h"

@class TGSearchResult;

@interface TGSearchResultsViewController : TGStoryboardInitializableViewController <UITableViewDataSource, UITableViewDelegate>

/// The delegate for receiving user search results activity.
@property (nonatomic, nullable) NSObject<TGSearchResultsViewControllerDelegate> *delegate;

/// Call this function to create an instance of the search results view controller.
+ (nonnull instancetype)makeWithSearchResults:(nonnull NSArray<TGSearchResult *> *)searchResults origin:(CLLocationCoordinate2D)origin;

@end
