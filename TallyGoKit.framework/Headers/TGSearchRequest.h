//
//  TGSearchRequest.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseRequest.h"

#import <CoreLocation/CoreLocation.h>

@class TGSearchExtent;

/// Defines parameters for a location search performed with TGFind.search()
@interface TGSearchRequest : TGBaseRequest

/// Specifies the location to be geocoded. This can be a street address, place name, postal code, or point of interest.
/// The input address components need to be formatted as a single string.
@property (nonatomic, readonly, nonnull) NSString *singleLine;

/**
 Defines an origin point location to improve the search results.
 Possible values include the user's current location, or the center point of their current view.
 */
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/// Default value is approximated LA city area. Bounding rectangle to search within. No results outside of the rectangle are returned.
@property (nonatomic, readonly, nullable) TGSearchExtent *searchExtent;

/// Value obtained from prior request to suggest API, used to get the location of a specific suggestion.
@property (nonatomic, readonly, nullable) NSString *suggestionKey;

/// Create a find address request with the required and optional parameters.
- (nonnull instancetype)initWithSingleLine:(nonnull NSString *)singleLine location:(CLLocationCoordinate2D)location searchExtent:(nullable TGSearchExtent *)searchExtent suggestionKey:(nullable NSString *)suggestionKey;

@end
