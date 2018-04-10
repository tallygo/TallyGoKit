//
//  TallyGoStyleKit.h
//  TallyGoKit
//
//  Created by David Deller on 4/4/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//
//  Generated by PaintCode
//  http://www.paintcodeapp.com
//

#import <UIKit/UIKit.h>



typedef enum : NSInteger
{
    TallyGoStyleKitResizingBehaviorAspectFit, //!< The content is proportionally resized to fit into the target rectangle.
    TallyGoStyleKitResizingBehaviorAspectFill, //!< The content is proportionally resized to completely fill the target rectangle.
    TallyGoStyleKitResizingBehaviorStretch, //!< The content is stretched to match the entire target rectangle.
    TallyGoStyleKitResizingBehaviorCenter, //!< The content is centered in the target rectangle, but it is NOT resized.

} TallyGoStyleKitResizingBehavior;

extern CGRect TallyGoStyleKitResizingBehaviorApply(TallyGoStyleKitResizingBehavior behavior, CGRect rect, CGRect target);


@interface TallyGoStyleKit : NSObject

// iOS Controls Customization Outlets
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* uTurnLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* exitRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* mergeRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* uTurnRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* vTIDestinationTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hardLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hardRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* turnLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* vTIDestinationLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* slightRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* turnRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* mergeTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* exitLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* rightAtTheForkTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* vTIDestinationRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* slightLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* leftAtTheForkTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* forwardTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* keyboardInstructionsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* greenCheckmarkTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLMergeTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLRightAtTheForkTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLSlightRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLExitRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLUTurnLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLLeftAtTheForkTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLTurnRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLMergeRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLTurnLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLExitLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLUTurnRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLHardRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLHardLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLDestinationLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLDistanceIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLForwardTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLDestinationTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLOriginTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLDestinationRightTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* tLSlightLeftTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* backButtonTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* mapMarkerTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* smallMapMarkerTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* searchIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* stopNavigationIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* sendFeedbackIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* routeOverviewIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* turnListIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* soundIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* selectionArrowTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* sendFeedbackIcon2Targets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* drivingSimulatorIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* settingsIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* officeSupplyIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hardwareIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* carWashTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* convenienceStoresTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hospitalIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* coffeeIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* drugstoresTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* drugstoreIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* eVIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* postOfficeIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hazardIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* parksTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* departmentStoreIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* carWashIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* parkingIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* genericPlaceIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* autoRepairTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* convenienceStoreIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hotelIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* aTMsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* groceriesTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* aTMIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* gasStationsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* gasIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* mapMarker2Targets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* copeeShopsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* accidentIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* restaurantIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* departmentStoresTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* groceryIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hardwareStoresTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* genericPlaceTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* coffeeTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* eVChargingStationsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* restaurantsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* autoRepairIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* parkingTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* parkIconTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hotelsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* hospitalsTargets;
@property (strong, nonatomic) IBOutletCollection(NSObject) NSArray* postOfficeTargets;

// Colors
+ (UIColor*)tGWhite;
+ (UIColor*)tGRed;
+ (UIColor*)tGGreen;
+ (UIColor*)tGBlue;
+ (UIColor*)tGYellow;
+ (UIColor*)tGButtonTextColor;
+ (UIColor*)tGYellowGreen;
+ (UIColor*)mediumGrey;
+ (UIColor*)green;
+ (UIColor*)polylineColor;
+ (UIColor*)userLocationAnnotationColor;

// Drawing Methods
+ (void)drawVisualTurnIndicatorWithFrame: (CGRect)frame approachColor: (UIColor*)approachColor image: (UIImage*)image approachIndicatorWidth: (CGFloat)approachIndicatorWidth street: (NSString*)street distance: (NSString*)distance;
+ (void)drawVisualTurnIndicatorWithSignWithFrame: (CGRect)frame approachColor: (UIColor*)approachColor sign: (UIImage*)sign image: (UIImage*)image approachIndicatorWidth: (CGFloat)approachIndicatorWidth street: (NSString*)street distance: (NSString*)distance;
+ (void)drawRouteProgressWithFrame: (CGRect)frame approachIndicatorWidth: (CGFloat)approachIndicatorWidth firstLine: (NSString*)firstLine secondLine: (NSString*)secondLine;
+ (void)drawStopNavigationButtonWithFrame: (CGRect)frame highlighted: (BOOL)highlighted;
+ (void)drawBigRedButtonWithFrame: (CGRect)frame fontSize: (CGFloat)fontSize highlighted: (BOOL)highlighted buttonText: (NSString*)buttonText;
+ (void)drawBigWhiteButtonWithFrame: (CGRect)frame fontSize: (CGFloat)fontSize highlighted: (BOOL)highlighted buttonText: (NSString*)buttonText;
+ (void)drawBigGreenButtonWithFrame: (CGRect)frame fontSize: (CGFloat)fontSize highlighted: (BOOL)highlighted buttonText: (NSString*)buttonText;
+ (void)drawBigGrayButtonWithFrame: (CGRect)frame fontSize: (CGFloat)fontSize highlighted: (BOOL)highlighted buttonText: (NSString*)buttonText;
+ (void)drawResumeNavigationButtonWithFrame: (CGRect)frame highlighted: (BOOL)highlighted;
+ (void)drawCloseButton;
+ (void)drawCloseButtonWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawErrorIcon;
+ (void)drawErrorIconWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawWhiteCheckmark;
+ (void)drawWhiteCheckmarkWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawTurnListButtonWithHighlighted: (BOOL)highlighted;
+ (void)drawMapMarker;
+ (void)drawMapMarkerWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawBackArrowWithTintColor: (UIColor*)tintColor;
+ (void)drawBackArrowWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing tintColor: (UIColor*)tintColor;
+ (void)drawSearchBackground;
+ (void)drawSearchBackgroundWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawMenuButtonWithHighlighted: (BOOL)highlighted;
+ (void)drawLocationIcon;
+ (void)drawLocationIconWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawTallyGoLogoOutline;
+ (void)drawGreenButtonWithFrame: (CGRect)frame highlighted: (BOOL)highlighted buttonText2: (NSString*)buttonText2;
+ (void)drawTallyGoLogoOutlineSim;
+ (void)drawBlueGradient;
+ (void)drawBlueGradientWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawGreyButtonWithFrame: (CGRect)frame highlighted: (BOOL)highlighted buttonText2: (NSString*)buttonText2;
+ (void)drawCalloutHorizontalWithTitle: (NSString*)title isLeft: (BOOL)isLeft subTitle: (NSString*)subTitle;
+ (void)drawDarkGreyButtonWithFrame: (CGRect)frame highlighted: (BOOL)highlighted buttonText2: (NSString*)buttonText2;
+ (void)drawViewpointCompassButtonWithCentered: (BOOL)centered;
+ (void)drawViewpointCompassButtonWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing centered: (BOOL)centered;
+ (void)drawCardinalCompassButtonWithCentered: (BOOL)centered;
+ (void)drawCardinalCompassButtonWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing centered: (BOOL)centered;
+ (void)drawMenuButton2;
+ (void)drawMenuButton2WithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawCalloutVerticalWithTitle: (NSString*)title subTitle: (NSString*)subTitle isTop: (BOOL)isTop;
+ (void)drawMapMarker2;
+ (void)drawMarkerShape;
+ (void)drawMarkerShapeWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;

// Generated Images
+ (UIImage*)imageOfUTurnLeft;
+ (UIImage*)imageOfExitRight;
+ (UIImage*)imageOfMergeRight;
+ (UIImage*)imageOfUTurnRight;
+ (UIImage*)imageOfVTIDestination;
+ (UIImage*)imageOfHardLeft;
+ (UIImage*)imageOfHardRight;
+ (UIImage*)imageOfTurnLeft;
+ (UIImage*)imageOfVTIDestinationLeft;
+ (UIImage*)imageOfSlightRight;
+ (UIImage*)imageOfTurnRight;
+ (UIImage*)imageOfMerge;
+ (UIImage*)imageOfExitLeft;
+ (UIImage*)imageOfRightAtTheFork;
+ (UIImage*)imageOfVTIDestinationRight;
+ (UIImage*)imageOfSlightLeft;
+ (UIImage*)imageOfLeftAtTheFork;
+ (UIImage*)imageOfForward;
+ (UIImage*)imageOfCAHighwayWithHighwayNumber: (NSString*)highwayNumber;
+ (UIImage*)imageOfInterstateWithHighwayNumber: (NSString*)highwayNumber nudge: (CGFloat)nudge;
+ (UIImage*)imageOfKeyboardInstructions;
+ (UIImage*)imageOfGreenCheckmark;
+ (UIImage*)imageOfGenericHighwayWithHighwayNumber: (NSString*)highwayNumber;
+ (UIImage*)imageOfUSHighwayWithHighwayNumber: (NSString*)highwayNumber showBackground: (BOOL)showBackground;
+ (UIImage*)imageOfTLMerge;
+ (UIImage*)imageOfTLRightAtTheFork;
+ (UIImage*)imageOfTLSlightRight;
+ (UIImage*)imageOfTLExitRight;
+ (UIImage*)imageOfTLUTurnLeft;
+ (UIImage*)imageOfTLLeftAtTheFork;
+ (UIImage*)imageOfTLTurnRight;
+ (UIImage*)imageOfTLMergeRight;
+ (UIImage*)imageOfTLTurnLeft;
+ (UIImage*)imageOfTLExitLeft;
+ (UIImage*)imageOfTLUTurnRight;
+ (UIImage*)imageOfTLHardRight;
+ (UIImage*)imageOfTLHardLeft;
+ (UIImage*)imageOfTLDestinationLeft;
+ (UIImage*)imageOfTLDistanceIcon;
+ (UIImage*)imageOfTLForward;
+ (UIImage*)imageOfTLDestination;
+ (UIImage*)imageOfTLOrigin;
+ (UIImage*)imageOfTLDestinationRight;
+ (UIImage*)imageOfTLSlightLeft;
+ (UIImage*)imageOfBackButton;
+ (UIImage*)imageOfMapMarker;
+ (UIImage*)imageOfSmallMapMarker;
+ (UIImage*)imageOfSearchIcon;
+ (UIImage*)imageOfStopNavigationIcon;
+ (UIImage*)imageOfSendFeedbackIcon;
+ (UIImage*)imageOfRouteOverviewIcon;
+ (UIImage*)imageOfTurnListIcon;
+ (UIImage*)imageOfSoundIcon;
+ (UIImage*)imageOfSelectionArrow;
+ (UIImage*)imageOfSendFeedbackIcon2;
+ (UIImage*)imageOfDrivingSimulatorIcon;
+ (UIImage*)imageOfSettingsIcon;
+ (UIImage*)imageOfOfficeSupplyIcon;
+ (UIImage*)imageOfHardwareIcon;
+ (UIImage*)imageOfCarWash;
+ (UIImage*)imageOfConvenienceStores;
+ (UIImage*)imageOfHospitalIcon;
+ (UIImage*)imageOfCoffeeIcon;
+ (UIImage*)imageOfDrugstores;
+ (UIImage*)imageOfDrugstoreIcon;
+ (UIImage*)imageOfEVIcon;
+ (UIImage*)imageOfPostOfficeIcon;
+ (UIImage*)imageOfHazardIcon;
+ (UIImage*)imageOfParks;
+ (UIImage*)imageOfDepartmentStoreIcon;
+ (UIImage*)imageOfCarWashIcon;
+ (UIImage*)imageOfParkingIcon;
+ (UIImage*)imageOfGenericPlaceIcon;
+ (UIImage*)imageOfAutoRepair;
+ (UIImage*)imageOfConvenienceStoreIcon;
+ (UIImage*)imageOfHotelIcon;
+ (UIImage*)imageOfATMs;
+ (UIImage*)imageOfGroceries;
+ (UIImage*)imageOfATMIcon;
+ (UIImage*)imageOfGasStations;
+ (UIImage*)imageOfGasIcon;
+ (UIImage*)imageOfMapMarker2;
+ (UIImage*)imageOfCopeeShops;
+ (UIImage*)imageOfAccidentIcon;
+ (UIImage*)imageOfRestaurantIcon;
+ (UIImage*)imageOfDepartmentStores;
+ (UIImage*)imageOfGroceryIcon;
+ (UIImage*)imageOfHardwareStores;
+ (UIImage*)imageOfGenericPlace;
+ (UIImage*)imageOfCoffee;
+ (UIImage*)imageOfEVChargingStations;
+ (UIImage*)imageOfRestaurants;
+ (UIImage*)imageOfAutoRepairIcon;
+ (UIImage*)imageOfParking;
+ (UIImage*)imageOfParkIcon;
+ (UIImage*)imageOfHotels;
+ (UIImage*)imageOfHospitals;
+ (UIImage*)imageOfPostOffice;

@end
