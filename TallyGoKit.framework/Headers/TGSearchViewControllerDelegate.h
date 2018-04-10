//
//  TGSearchViewControllerDelegate.h
//  TallyGoKit
//
//  Created by David Deller on 1/15/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <Mapbox/Mapbox.h>

@class TGSearchExtent, TGSearchResult, TGSearchCategory;

typedef NS_ENUM(NSInteger, TGSearchViewControllerRequestType) {
    TGSearchViewControllerRequestTypeSearch,
    TGSearchViewControllerRequestTypeSuggest,
    TGSearchViewControllerRequestTypeCategory,
};

/**
 * Implement this protocol to be notified of user search activity and to provide locations and search extents for effective searching.
 */
@protocol TGSearchViewControllerDelegate <NSObject>

@required

/**
 * A coordinate to be provided when making a search or suggest request. This helps provide better search results.
 * In most cases, you should provide the user's current location, which you can get from the map view if you are using one.
 */
- (CLLocationCoordinate2D)coordinateForRequestType:(TGSearchViewControllerRequestType)requestType;

/**
 * A search extent to be provided when making a search or suggest request. This helps provide better search results.
 * In most cases, you should provide the view currently shown in the map, which you can get from the map view if you are using one.
 */
- (nonnull TGSearchExtent *)searchExtentForRequestType:(TGSearchViewControllerRequestType)requestType;

/**
 * Handle the search result that the user selected. This could be a selection the user picked from the list of suggestions, or the list of search results.
 */
- (void)didSelectSearchResult:(nonnull TGSearchResult *)searchResult;

@optional

/**
 * Override this function to be notified when the user begin interacting with the search text field. The default implementation does nothing.
 */
- (void)searchFieldDidBeginEditing;

/**
 * When the user performs a search that has multiple results, the view controller calls this delegate method in order to ask whether to show its own results UI.
 * If not implemented, `YES` is assumed.
 *
 * You can implement this method if you want to perform your own logic based on the search results, and the selected category (if applicable). You can then
 * return `NO` if you want to override the provided results UI. Or, you can return `YES` if you want to continue showing the provided UI even after performing
 * your own logic.
 *
 * If this method returns `YES`, the view controller presents a list of results, and if the user picks one, the delegate method `didSelectSearchResult:` is
 * called.
 */
- (BOOL)shouldShowSearchResults:(nonnull NSArray<TGSearchResult *> *)searchResults selectedSearchCategory:(nullable TGSearchCategory *)searchCategory;

/**
 * Whether or not to show a cancel button after the user selects a search result. If not implemented, `NO` is assumed.
 */
- (BOOL)shouldShowSearchCancelButton;

/**
 * Override this function to be notified when the user presses the cancel button. The default implementation does nothing.
 */
- (void)didPressSearchCancelButton;

@end
