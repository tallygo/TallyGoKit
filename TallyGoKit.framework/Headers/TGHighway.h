//
//  TGHighway.h
//  TallyGoKit
//
//  Created by David Deller on 11/30/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

/// The type of highway.
typedef NSString *TGHighwayType NS_TYPED_ENUM;

/// California Highway.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeCalifornia;

/// US Highway.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeUnitedStates;

/// Interstate.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeInterstate;

/// Highway.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeHighway;

/// County Road.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeCountyRoad;

/// State Road.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeStateRoad;

/// Unknown highway type.
FOUNDATION_EXPORT TGHighwayType _Nonnull const TGHighwayTypeUnknown;

/// Represents a highway.
@interface TGHighway : TGBaseObject

@property (nonatomic, readonly, nonnull) TGHighwayType type;

@end
