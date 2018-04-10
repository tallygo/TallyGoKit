//
//  TGSearchResultsViewControllerDelegate.h
//  TallyGoKit
//
//  Created by David (work 2) on 3/8/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TGSearchResult;

/// Implement this protocol to be notified of user search results activity.
@protocol TGSearchResultsViewControllerDelegate <NSObject>

- (void)didSelectSearchResult:(nonnull TGSearchResult *)searchResult;

@optional

- (void)didPressDoneButton;

@end
