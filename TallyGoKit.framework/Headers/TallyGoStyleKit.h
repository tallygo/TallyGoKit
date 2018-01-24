//
//  TallyGoStyleKit.h
//  TallyGoKit
//
//  Created by David Deller on 1/2/18.
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

// Colors
+ (UIColor*)tGWhite;
+ (UIColor*)tGRed;
+ (UIColor*)tGGreen;
+ (UIColor*)tGBlue;
+ (UIColor*)tGYellow;
+ (UIColor*)tGButtonTextColor;
+ (UIColor*)tGYellowGreen;
+ (UIColor*)mediumGrey;

// Drawing Methods
+ (void)drawVisualTurnIndicatorWithFrame: (CGRect)frame approachColor: (UIColor*)approachColor image: (UIImage*)image approachIndicatorWidth: (CGFloat)approachIndicatorWidth street: (NSString*)street distance: (NSString*)distance;
+ (void)drawVisualTurnIndicatorWithSignWithFrame: (CGRect)frame approachColor: (UIColor*)approachColor sign: (UIImage*)sign image: (UIImage*)image approachIndicatorWidth: (CGFloat)approachIndicatorWidth street: (NSString*)street distance: (NSString*)distance;
+ (void)drawRouteProgressWithFrame: (CGRect)frame approachIndicatorWidth: (CGFloat)approachIndicatorWidth firstLine: (NSString*)firstLine secondLine: (NSString*)secondLine thirdLine: (NSString*)thirdLine;
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
+ (void)drawTurnListButtonWithHighlighted: (BOOL)highlighted;
+ (void)drawMapMarker;
+ (void)drawMapMarkerWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawBackArrow;
+ (void)drawBackArrowWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSearchBackground;
+ (void)drawSearchBackgroundWithFrame: (CGRect)targetFrame resizing: (TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawMenuButtonWithHighlighted: (BOOL)highlighted;

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
+ (UIImage*)imageOfUSHighwayWithHighwayNumber: (NSString*)highwayNumber;
+ (UIImage*)imageOfInterstateWithHighwayNumber: (NSString*)highwayNumber nudge: (CGFloat)nudge;
+ (UIImage*)imageOfKeyboardInstructions;
+ (UIImage*)imageOfGreenCheckmark;
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

@end