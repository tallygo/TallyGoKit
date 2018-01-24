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

// In this header, you should import all the public headers of your framework using statements like #import <TallyGoKit/PublicHeader.h>

#import <TallyGoKit/TallyGo.h>

// Audio
#import <TallyGoKit/TGVoiceSynthesis.h>
#import <TallyGoKit/TGVoice.h>

// Base Classes
#import <TallyGoKit/TGBaseService.h>
#import <TallyGoKit/TGBaseRequest.h>
#import <TallyGoKit/TGBaseResponse.h>
#import <TallyGoKit/TGBaseObject.h>

// Common
#import <TallyGoKit/DeviceTypes.h>
#import <TallyGoKit/TGConstants.h>

// Categories
#import <TallyGoKit/MGLMapView+LocationValidation.h>

// Configuration
#import <TallyGoKit/TGConfigurationService.h>
#import <TallyGoKit/TGConfigurationRequest.h>
#import <TallyGoKit/TGConfigurationResponse.h>

// Events
#import <TallyGoKit/TGEventService.h>
#import <TallyGoKit/TGEventRequest.h>
#import <TallyGoKit/TGEventResponse.h>

// Find
#import <TallyGoKit/TGFindService.h>
#import <TallyGoKit/TGSearchRequest.h>
#import <TallyGoKit/TGSearchResponse.h>
#import <TallyGoKit/TGReverseGeocodeRequest.h>
#import <TallyGoKit/TGReverseGeocodeResponse.h>
#import <TallyGoKit/TGSuggestRequest.h>
#import <TallyGoKit/TGSuggestResponse.h>
#import <TallyGoKit/TGStreetAddress.h>
#import <TallyGoKit/TGSearchResult.h>
#import <TallyGoKit/TGOrigin.h>
#import <TallyGoKit/TGSearchExtent.h>
#import <TallyGoKit/TGSuggestion.h>

// Navigation
#import <TallyGoKit/TGNavigationService.h>
#import <TallyGoKit/TGRouteRequest.h>
#import <TallyGoKit/TGRouteResponse.h>
#import <TallyGoKit/TGBoundaryRequest.h>
#import <TallyGoKit/TGBoundaryResponse.h>
#import <TallyGoKit/TGRoute.h>
#import <TallyGoKit/TGRouteSegment.h>
#import <TallyGoKit/TGPoint.h>
#import <TallyGoKit/TGTurn.h>
#import <TallyGoKit/TGStreet.h>
#import <TallyGoKit/TGHighway.h>
#import <TallyGoKit/TGGeoJSONObject.h>
#import <TallyGoKit/TGGeoJSONFeatureCollection.h>
#import <TallyGoKit/TGGeoJSONFeature.h>
#import <TallyGoKit/TGGeoJSONPolygon.h>
#import <TallyGoKit/TGGeoJSONPoint.h>

// Search Category
#import <TallyGoKit/TGSearchCategoryService.h>
#import <TallyGoKit/TGSearchCategoryRequest.h>
#import <TallyGoKit/TGSearchCategoryResponse.h>
#import <TallyGoKit/TGSearchCategory.h>

// Telemetry
#import <TallyGoKit/TGStyledMapView.h>
#import <TallyGoKit/TGMapStyle.h>

// UI

// Assets
#import <TallyGoKit/TallyGoStyleKit.h>

// Turn-By-Turn
#import <TallyGoKit/TGTurnByTurnViewController.h>

// Preview
#import <TallyGoKit/TGPreviewViewController.h>

// Search
#import <TallyGoKit/TGSearchViewController.h>
#import <TallyGoKit/TGSearchResultsViewController.h>
#import <TallyGoKit/TGSearchViewControllerDelegate.h>

// Overview
#import <TallyGoKit/TGOverviewViewController.h>

// Turn List
#import <TallyGoKit/TGTurnListViewController.h>
#import <TallyGoKit/TGTurnListBaseTableViewCell.h>

// Classes
#import <TallyGoKit/TGIdleTimer.h>
#import <TallyGoKit/TGStoryboardInitializableViewController.h>

// Feedback
#import <TallyGoKit/TGFeedbackViewController.h>

// Buttons
#import <TallyGoKit/TGButton.h>
