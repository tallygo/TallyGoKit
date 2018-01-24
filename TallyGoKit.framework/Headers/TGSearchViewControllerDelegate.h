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

/// Implement this protocol to be notified of user search activity and to provide locations and search extents for effective searching.
@protocol TGSearchViewControllerDelegate <NSObject>

@required

/// Override this function to handle the search results. This function is required to be implemented by the delegate.
- (BOOL)userDidSearchWithResults:(nonnull NSArray<TGSearchResult *> *)searchResults category:(nullable TGSearchCategory *)searchCategory;

/// This is required to determine useful search parameters
- (nullable MGLMapView *)mapViewForSearch;

@optional

/// Override the default implementation to provide the center coordinate to use for suggestions
- (CLLocationCoordinate2D)coordinateForSuggestions;

/// Override the default implementation to provide the center coordinate to use for searches
- (CLLocationCoordinate2D)coordinateForSearch;

/// Override the default implementation to provide the search Extent to use for suggestions
- (nullable TGSearchExtent *)searchExtentForSuggest;

/// Override the default implementation to provide the search Extent to use for search
- (nullable TGSearchExtent *)searchExtentForSearch;

/// Override this function to be notified when the user begin interacting with the search text field. The default implementaion does nothing.
- (void)userWillSearch;

/// Override this function to be notified when the user presses the cancel button. The default implementaion does nothing.
- (void)cancelButtonPressed;

@end
