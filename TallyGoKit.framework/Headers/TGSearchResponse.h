//
//  TGSearchResponse.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseResponse.h"

@class TGSearchResult;

/// Response object from the search function.
@interface TGSearchResponse : TGBaseResponse

/// A collection of candidate objects.
@property (nonatomic, readonly, nonnull) NSArray<TGSearchResult *> *results;

@end
