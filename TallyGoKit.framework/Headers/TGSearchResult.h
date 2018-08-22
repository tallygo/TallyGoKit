//
//  TGSearchResult.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <CoreLocation/CoreLocation.h>
#import "TGOrigin.h"

typedef NSString *TGSearchResultProvider NS_TYPED_ENUM;

FOUNDATION_EXPORT TGSearchResultProvider TGSearchResultProviderFoursquare;
FOUNDATION_EXPORT TGSearchResultProvider TGSearchResultProviderYelp;
FOUNDATION_EXPORT TGSearchResultProvider TGSearchResultProviderUnknown;

@class TGStreetAddress, TGWaypoint;

/// A search result, including geographic location.
/// Returned from TGFind.search
@interface TGSearchResult : TGBaseObject <NSCopying>

/// The point found for the closest address.
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/// Nonempty list of category names.
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *categories;

/// Number of reviews from provider.
@property (nonatomic, readonly) NSInteger reviewCount;

/// Provider's name.
@property (nonatomic, readonly, nullable) TGSearchResultProvider provider;

/// Phone number.
@property (nonatomic, readonly, nullable) NSString *phone;

/// Rating value depending on provider
@property (nonatomic, readonly) double rating;

/// Whether or not this search result has a rating
@property (nonatomic, readonly) BOOL hasRating;

/// URL associated with this search result.
@property (nonatomic, readonly, nullable) NSString *url;

/// URL to a profile on the provider's website.
@property (nonatomic, readonly, nullable) NSString *providerUrl;

/// The name of the point of interest or address.
@property (nonatomic, readonly, nullable) NSString *address;

/// Collection of name/value pairs of attributes.
@property (nonatomic, readonly, nullable) NSDictionary *attributes;

/// The place name or partial address string.
@property (nonatomic, readonly, nullable) NSString *matchAddress;

/// The complete matched address.
@property (nonatomic, readonly, nullable) NSString *placeAddress;

/// The type of address returned, e.g. POI.
@property (nonatomic, readonly, nullable) NSString *addressType;

/// The origin of the suggestion.
@property (nonatomic, readonly, nonnull) TGOrigin origin;

/// Provider's relevance score.
@property (nonatomic, readonly) double score;

/// Get a TGAddress object from search result. Only location name, match address, and address may be populated.
- (nonnull TGStreetAddress *)streetAddress;

- (nonnull TGStreetAddress *)toAddressObject __attribute__((deprecated("Replace with streetAddress")));

/// Get a TGWaypoint object from search result.
- (nonnull TGWaypoint *)waypoint;

@end
