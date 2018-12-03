//
//  TGConstants.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Notification posted when the SDK finishes initializing successfully.
FOUNDATION_EXPORT NSNotificationName const TallyGoKitInitializeDidFinishNotification;

/// Notification posted when the SDK is taking a long time to initialize (likely due to network connectivity) but is continuing to retry. You may receive this notification repeatedly, and if the situation does not improve, you may never receive a DidFinish or DidFail notification. If you do not wish to retry indefinitely, you should provide your own logic to time out or cancel, if desired.
FOUNDATION_EXPORT NSNotificationName const TallyGoKitInitializeWillRetryNotification;

/// Notification posted when the SDK encountered a permanent error preventing it from initializing.
FOUNDATION_EXPORT NSNotificationName const TallyGoKitInitializeDidFailNotification;

FOUNDATION_EXPORT NSString *const TallyGoKitInitializeUserInfoKeyError;

/// To enable GPX logging, set the value of the key `TGGPXLogging` in your app's Info.plist to `YES`. When this setting is enabled, you may find GPX files in the directory specified by `TGTelemetry` `+gpxFilesDirectoryURL`.
FOUNDATION_EXPORT NSString *const TallyGoKitInfoPlistKeyGPXLogging;
