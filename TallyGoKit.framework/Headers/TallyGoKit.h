//
//  TallyGoKit.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 11/14/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for TallyGoKit.
FOUNDATION_EXPORT double TallyGoKitVersionNumber;

//! Project version string for TallyGoKit.
FOUNDATION_EXPORT const unsigned char TallyGoKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import "PublicHeader.h"

#import "TallyGo.h"

// Audio
#import "TGVoiceSynthesis.h"
#import "TGVoice.h"

// Base Classes
#import "TGBaseService.h"
#import "TGBaseRequest.h"
#import "TGBaseResponse.h"
#import "TGBaseObject.h"

// Common
#import "DeviceTypes.h"
#import "TGConstants.h"
#import "TGLocationUtilities.h"

// Configuration
#import "TGConfigurationService.h"
#import "TGConfigurationRequest.h"
#import "TGConfigurationResponse.h"

// Events
#import "TGEventService.h"
#import "TGEventRequest.h"
#import "TGEventResponse.h"

// Find
#import "TGFindService.h"
#import "TGSearchRequest.h"
#import "TGSearchResponse.h"
#import "TGReverseGeocodeRequest.h"
#import "TGReverseGeocodeResponse.h"
#import "TGSuggestRequest.h"
#import "TGSuggestResponse.h"
#import "TGStreetAddress.h"
#import "TGSearchResult.h"
#import "TGOrigin.h"
#import "TGSearchExtent.h"
#import "TGSuggestion.h"

// Navigation
#import "TGNavigationService.h"
#import "TGRouteRequest.h"
#import "TGRouteResponse.h"
#import "TGBoundaryRequest.h"
#import "TGBoundaryResponse.h"
#import "TGRoute.h"
#import "TGRouteSegment.h"
#import "TGWaypoint.h"
#import "TGPoint.h"
#import "TGTurn.h"
#import "TGStreet.h"
#import "TGHighway.h"
#import "TGGeoJSONObject.h"
#import "TGGeoJSONFeatureCollection.h"
#import "TGGeoJSONFeature.h"
#import "TGGeoJSONPolygon.h"
#import "TGGeoJSONPoint.h"

// Search Category
#import "TGSearchCategoryService.h"
#import "TGSearchCategoryRequest.h"
#import "TGSearchCategoryResponse.h"
#import "TGSearchCategory.h"

// Telemetry
#import "TGTelemetry.h"

// UI

// Assets
#import "TallyGoStyleKit.h"

// Map
#import "TGMapViewController.h"
#import "TGMapView.h"
#import "TGMapStyle.h"

// Turn-By-Turn
#import "TGTurnByTurnViewController.h"
#import "TGTurnByTurnConfiguration.h"

// Preview
#import "TGPreviewViewController.h"

// Search
#import "TGSearchViewController.h"
#import "TGSearchResultsViewController.h"
#import "TGSearchViewControllerDelegate.h"
#import "TGSearchResultsViewControllerDelegate.h"

// Overview
#import "TGOverviewViewController.h"

// Turn List
#import "TGTurnListViewController.h"
#import "TGTurnListBaseTableViewCell.h"

// Waypoints
#import "TGWaypointsListViewController.h"

// Classes
#import "TGIdleTimer.h"
#import "TGStoryboardInitializableViewController.h"

// Feedback
#import "TGFeedbackViewController.h"

// Buttons
#import "TGButton.h"
