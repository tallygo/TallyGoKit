//
//  TGSuggestResponse.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseResponse.h"

@class TGSuggestion;

/// Response object from the suggest function.
@interface TGSuggestResponse : TGBaseResponse

/// A collection of suggestion objects.
@property (nonatomic, readonly, nullable) NSArray<TGSuggestion *> *suggestions;

@end
