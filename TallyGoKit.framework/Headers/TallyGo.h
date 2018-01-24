//
//  TallyGo.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mapbox/Mapbox.h>

typedef void (^TGInitializeCompletionHandler)(BOOL success);

@interface TallyGo : NSObject

/// Client ID used for internal analytics.
@property (class, nonatomic, nullable) NSString *clientId;

/// Turns debug mode on/off.
@property (class, nonatomic) BOOL allowsDebug;

/// Show colored traffic lines as an overlay on the map
@property (class, nonatomic) BOOL showsTraffic;

/// The most recent location reported by the location manager
@property (class, nonatomic, readonly, nullable) CLLocation *currentLocation;

/// Sets the starting location for the driving simulator. Set to nil to disable simulated locations.
@property (class, nonatomic) CLLocationCoordinate2D simulatedCoordinate;

/// Sets the simulated driving speed on highways
@property (class, nonatomic) CLLocationSpeed simulatedHighwaySpeed;

/// Sets the simulated driving speed on city streets
@property (class, nonatomic) CLLocationSpeed simulatedCitySpeed;

/**
 Asynchronously initializes the TallyGoKit framework with your access token.
 @param accessToken The access token that will be used for all API requests.
 */
+ (void)initializeWithAccessToken:(nonnull NSString *)accessToken;

/**
 Asynchronously initializes the TallyGoKit framework with your access token.
 @param accessToken The access token that will be used for all API requests.
 @param configurationName The configuration name that will be used for all API requests. If nil, uses the default configuration name.
 */
+ (void)initializeWithAccessToken:(nonnull NSString *)accessToken configurationName:(nullable NSString *)configurationName;

/// Returns a new instance of MGLMapView using the TallyGo map style. If the driving simulator is on, the map view will use it instead of the location manager.
+ (nonnull MGLMapView *)createMapView;

@end
