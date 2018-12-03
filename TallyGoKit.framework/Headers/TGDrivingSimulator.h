//
//  TGDrivingSimulator.h
//  TallyGoKit
//
//  Created by David Deller on 11/2/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface TGDrivingSimulator : NSObject

/// Whether to use the driving simulator.
@property (nonatomic) BOOL enabled;

/// Sets the starting location for the driving simulator.
@property (nonatomic) CLLocationCoordinate2D startingCoordinate;

/// Sets the simulated driving speed on highways
@property (nonatomic) CLLocationSpeed highwaySpeed;

/// Sets the simulated driving speed on city streets
@property (nonatomic) CLLocationSpeed citySpeed;

@property (class, readonly, nonatomic) TGDrivingSimulator *sharedDrivingSimulator;

- (void)makeWrongTurn;

@end
