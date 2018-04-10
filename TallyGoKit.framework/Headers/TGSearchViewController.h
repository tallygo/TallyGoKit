//
//  TGSearchViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/15/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Mapbox/Mapbox.h>

#import "TGStoryboardInitializableViewController.h"
#import "TGSearchViewControllerDelegate.h"
#import "TGSearchResultsViewControllerDelegate.h"

/// View controller that allows the user to find locations by entering text searches.
@interface TGSearchViewController : TGStoryboardInitializableViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, TGSearchResultsViewControllerDelegate>

/// The search bar text field.
@property (nonatomic, nonnull) IBOutlet UITextField *searchBar;

/// The delegate for receiving user search activity.
@property (nonatomic, nullable) NSObject<TGSearchViewControllerDelegate> *delegate;

/// Use this function to force the cancel button to display. This is useful, for example, if your app has other means to select a location.
- (void)showCancelButton;

/// Use this function to notify the search view controller to reset, for example, after completing or cancelling a route.
- (void)reset;

@end
