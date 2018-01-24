//
//  TGSuggestion.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import "TGOrigin.h"

/**
 This is an autocomplete suggestion.
 To get full info including location, make a call to TGFind.search and include the sugestionKey value from the suggestion.
 */
@interface TGSuggestion : TGBaseObject

/// The origin of the suggestion.
@property (nonatomic, readonly, nonnull) TGOrigin origin;

/// Provider's name.
@property (nonatomic, readonly, nullable) NSString *provider;

/// Provider's relevance score.
@property (nonatomic, readonly) double score;

/// Number of reviews from provider.
@property (nonatomic, readonly) NSInteger reviewCount;

/// URL to a profile on the provider's website.
@property (nonatomic, readonly, nullable) NSString *providerUrl;

/// Menu mobile URL.
@property (nonatomic, readonly, nullable) NSString *menuUrl;

/// Phone number.
@property (nonatomic, readonly, nullable) NSString *phone;

/// Nonempty list of category names.
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *categories;

/// Text of the suggestion. Contains place name and/or full address.
@property (nonatomic, readonly, nullable) NSString *text;

/// Value to be retained and passed into search.
@property (nonatomic, readonly, nullable) NSString *suggestionKey;

/// Rating value depending on provider
@property (nonatomic, readonly) double rating;

/// Website URL
@property (nonatomic, readonly, nullable) NSString *url;

/// An object containing the price tier from 1 (least pricey) - 4 (most pricey) and a message describing the price tier.
@property (nonatomic, readonly) NSInteger price;

@end
