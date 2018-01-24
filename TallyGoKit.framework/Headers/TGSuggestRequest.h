//
//  TGSuggestRequest.h
//  TallyGoKit
//
//  Created by David Deller on 11/17/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseRequest.h"

#import <CoreLocation/CoreLocation.h>

@class TGSearchExtent;

/// Request for a list of suggested autocompletion location items.
@interface TGSuggestRequest : TGBaseRequest

/// The input text entered by a user which is used by the suggest operation to generate a list of possible matches.
@property (nonatomic, readonly, nonnull) NSString *text;

/// Defines an origin point location.
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/// Optional. Default value is approximated LA city area. Bounding rectangle to search within. No candidates outside of the rectangle are returned.
@property (nonatomic, readonly, nullable) TGSearchExtent *searchExtent;

/// Create a suggest request with the required and optional parameters.
- (nonnull instancetype)initWithText:(nonnull NSString *)text location:(CLLocationCoordinate2D)location searchExtent:(nullable TGSearchExtent *)searchExtent;

@end
