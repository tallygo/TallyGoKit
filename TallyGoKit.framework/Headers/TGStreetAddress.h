//
//  TGAddress.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

/// Represents a street address.
@interface TGStreetAddress : TGBaseObject

/// Contains the state for U.S. addresses.
@property (nonatomic, readonly, nullable) NSString *region;

/// Contains the first 5 digits of the U.S. Zip Code
@property (nonatomic, readonly, nullable) NSString *postal;

/// The complete matched address.
@property (nonatomic, readonly, nullable) NSString *matchAddress;

/// The type of address found. Contents varies.
@property (nonatomic, readonly, nullable) NSString *locationName;

/// The name of place found. Contents varies.
@property (nonatomic, readonly, nullable) NSString *placeName;

/// The street address portion of the result.
@property (nonatomic, readonly, nullable) NSString *address;

/// A three character country code.
@property (nonatomic, readonly, nullable) NSString *countyCode;

/// The last 4 digits of a 9-digit U.S. Zip Code.
@property (nonatomic, readonly, nullable) NSString *postalExtension;

/// The name of the neighborhood.
@property (nonatomic, readonly, nullable) NSString *neighborhood;

/// The subregion. Not normally used for U.S. locations.
@property (nonatomic, readonly, nullable) NSString *subregion;

/// The name of the city.
@property (nonatomic, readonly, nullable) NSString *city;



@end
