//
//  TallyGo.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mapbox/Mapbox.h>

typedef void (^TGInitializeCompletionHandler)(BOOL success, NSError *_Nullable error);

/// The main TallyGoKit class.
@interface TallyGo : NSObject

/// Client ID used for internal analytics.
@property (class, nonatomic, nullable) NSString *clientId;

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

/**
 Asynchronously initializes the TallyGoKit framework with your access token.
 @param accessToken The access token that will be used for all API requests.
 @param configurationName The configuration name that will be used for all API requests. If nil, uses the default configuration name.
 @param simulatedCoordinate The starting location for the driving simulator
 */
+ (void)initializeWithAccessToken:(nonnull NSString *)accessToken configurationName:(nullable NSString *)configurationName simulatedCoordinate:(CLLocationCoordinate2D)simulatedCoordinate;

/**
 Asynchronously initializes the TallyGoKit framework with your access token.
 @param accessToken The access token that will be used for all API requests.
 @param configurationName The configuration name that will be used for all API requests.
 @param simulatedCoordinate The starting location for the driving simulator
 @param completion An optional block to call after the initialization is complete. You may wish to use this to check for errors before proceeding. An alternative is to listen for `TallyGoKitInitializeDidFinishNotification`, `TallyGoKitInitializeWillRetryNotification`, and `TallyGoKitInitializeDidFailNotification`. If you are using `TGMapViewController`, you do not need to wait for the completion block, because that controller listens for errors via the notifications and handles them in its UI accordingly.
 */
+ (void)initializeWithAccessToken:(nonnull NSString *)accessToken configurationName:(nullable NSString *)configurationName simulatedCoordinate:(CLLocationCoordinate2D)simulatedCoordinate completion:(nullable TGInitializeCompletionHandler)completion;

@end
