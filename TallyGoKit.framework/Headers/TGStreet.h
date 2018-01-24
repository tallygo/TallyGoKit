//
//  TGStreet.h
//  TallyGoKit
//
//  Created by David Deller on 11/30/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

@class TGHighway;

/// The type of this street, such as highway or residential.
typedef NSString *TGStreetFunction NS_TYPED_ENUM;

/// Highway type
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionHighway;

/// Highway type
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionLocalHighway;

/// Non-highway type
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionArterial;

/// Non-highway type
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionLocalArterial;

/// Non-highway type
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionResidential;

/// Non-highway type
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionService;

/// Unknown street function.
FOUNDATION_EXPORT TGStreetFunction _Nonnull const TGStreetFunctionUnknown;


/// Connection type for this street.
typedef NSString *TGStreetConnection NS_TYPED_ENUM;

/// The start of a journey.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionOrigin;

/// An unnamed road connecting a highway to a non-highway.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionOfframp;

/// An unnamed road connecting a non-highway to a highway.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionOnramp;

/// An unnamed road connecting two highways.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionInterchange;

/// A brief, unnamed section of road between two residential streets.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionConnector;

/// The end of a journey.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionDestination;

/// Unknown street connection.
FOUNDATION_EXPORT TGStreetConnection _Nonnull const TGStreetConnectionUnknown;


/// The directionality of the street.
typedef NSString *TGStreetDirection NS_TYPED_ENUM;

/// North street direction.
FOUNDATION_EXPORT TGStreetDirection _Nonnull const TGStreetDirectionNorth;

/// South street direction.
FOUNDATION_EXPORT TGStreetDirection _Nonnull const TGStreetDirectionSouth;

/// East street direction.
FOUNDATION_EXPORT TGStreetDirection _Nonnull const TGStreetDirectionEast;

/// West street direction.
FOUNDATION_EXPORT TGStreetDirection _Nonnull const TGStreetDirectionWest;

/// Unknown street direction.
FOUNDATION_EXPORT TGStreetDirection _Nonnull const TGStreetDirectionUnknown;

/**
 Represents a street.
 */
@interface TGStreet : TGBaseObject

/// More information about this street if it is a highway.
@property (nonatomic, readonly, nullable) TGHighway *highway;

/// The name of this street.
@property (nonatomic, readonly, nullable) NSString *name;

/// The function of the street.
@property (nonatomic, readonly, nonnull) TGStreetFunction function;

/// The connection type of the street.
@property (nonatomic, readonly, nonnull) TGStreetConnection connection;

/// The directionality of the street.
@property (nonatomic, readonly, nonnull) TGStreetDirection direction;

@end
