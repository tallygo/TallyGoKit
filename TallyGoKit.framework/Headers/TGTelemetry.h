//
//  TGTelemetry.h
//  TallyGoKit
//
//  Created by David Deller on 12/7/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <Mapbox/Mapbox.h>

@interface TGTelemetry : NSObject<MGLLocationManagerDelegate>

/** A notification that is posted when the user passes a point on a segment. The userInfo dictionary will contain values for the keys TGTelemetryUserInfoFromPointIndex and TGTelemetryUserInfoToPointIndex.
 
 **Usage Example:**
 
 ```
 NotificationCenter.default.addObserver(self, selector: #selector(pointChangeHandler(notification:)), name: TGTelemetryCurrentPointChangeNotification, object: nil)
 
 func pointChangeHandler(notification: Notification) {
 guard let toPointIndex = notification.userInfo?[TGTelemetryUserInfoToPointIndex] as? Int else {
 return
 }
 
 let segment = TallyGoKit.currentSegment
 let nextPoint = segment?.points[toPointIndex]
 
 if let streetName = nextPoint?.turn?.street?.name {
 // Do something with the street name
 debugPrint("Next street name is \(streetName)")
 }
 }
 ```
 
 */
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryCurrentPointChangeNotification;

/**
 * A notification that is posted every time we receive a location update (usually about 1 Hz).
 * This notification will always contain the user info key `TGTelemetryUserInfoCurrentLocation`.
 * This notification may also contain the user info key `TGTelemetryUserInfoCurrentLocationSnappedToRoute`.
 */
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryDidUpdateLocationNotification;

/// A notification that is posted when the user passes a turn.  The userInfo dictionary will contain a value for the key TGTelemetryUserInfoTurnPointIndex.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryNextTurnChangeNotification;

/// A notification that is posted when the user is instructed to proceed to route.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryProceedingToRouteNotification;

/// A notification that is posted when user telemetry is started.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryOnRouteNotification;

/// A notification that is posted when the user is determined to be off the route.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryOffRouteNotification;

/// A notification that is posted when the user is being rerouted.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryReroutingNotification;

/// A notification that is posted when the user has been rerouted.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryReroutedNotification;

/// A notification that is posted when the user cancels the route.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryCancelledNotification;

/// A notification that is posted when the user concludes the route segment.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetrySegmentConcludedNotification;

/// A notification that is posted when the user advances to the next route segment.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetrySegmentAdvancedNotification;

/// A notification that is posted when the user concludes the route.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryRouteConcludedNotification;

/// A notification that is posted when user telemetry is initiated, but not yet started.
FOUNDATION_EXPORT NSNotificationName _Nonnull const TGTelemetryInitializedNotification;


typedef NSString *TGTelemetryUserInfo NS_TYPED_ENUM;

/// A userInfo key for the point change notifications and represents the index of the point that was just passed.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoFromPointIndex;

/// A userInfo key for the point change notifications and represents the point that was just passed.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoFromPoint;

/// A userInfo key for the point change notifications and represents the index of the upcoming point.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoToPointIndex;

/// A userInfo key for the point change notifications and represents the upcoming point.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoToPoint;

/// A userInfo key for the turn change notifications and represents the index of the point of the upcoming turn.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoTurnPointIndex;

/// A userInfo key for the turn change notifications and represents the point of the upcoming turn.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoTurnPoint;

/// A userInfo key for the turn change notifications and represents the driver's ETA at their destination.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoETA;

/// A userInfo key for the turn change notifications and represents the driver's route.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoRoute;

/// A userInfo key for the turn change notifications and represents the driver's route segment.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoRouteSegment;

// A userInfo key for the driver's current location, as reported by Location Services.
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoCurrentLocation;

// A userInfo key for the driver's current location, adjusted to the most probable location on the current route line (to compensate for inaccuracy inherent in Location Services).
FOUNDATION_EXPORT TGTelemetryUserInfo _Nonnull const TGTelemetryUserInfoCurrentLocationSnappedToRoute;

/// If GPX logging is enabled (see `TallyGoKitInfoPlistKeyGPXLogging`), this URL will be the directory where GPX log files can be found. You may read or delete files in this directory if you wish. If no files have been created yet, this directory may not exist.
+ (NSURL *)gpxFilesDirectoryURL;

@end
