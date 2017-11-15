// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import CoreLocation;
@import Foundation;
@import Mapbox;
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import AVFoundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CLLocation (SWIFT_EXTENSION(TallyGoKit))
@end


@interface NSDateFormatter (SWIFT_EXTENSION(TallyGoKit))
@end


@interface MGLMapView (SWIFT_EXTENSION(TallyGoKit))
@end

@class NSCoder;

/// A stylized subclass of UIButton
SWIFT_CLASS("_TtC10TallyGoKit8TGButton")
@interface TGButton : UIButton
/// Redraws the button if the highlighting is changed.
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
/// Redraws the button if the enabled value is changed.
@property (nonatomic, getter=isEnabled) BOOL enabled;
/// Redraws the button when the subviews are layed out.
- (void)layoutSubviews;
/// Draws the button image.
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStoryboardSegue;
@class NSBundle;

SWIFT_CLASS("_TtC10TallyGoKit24TGFeedbackViewController")
@interface TGFeedbackViewController : UIViewController
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull storyboardName;)
+ (NSString * _Nonnull)storyboardName SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

@interface TGFeedbackViewController (SWIFT_EXTENSION(TallyGoKit)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UITableViewCell;

@interface TGFeedbackViewController (SWIFT_EXTENSION(TallyGoKit)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class AVSpeechSynthesisVoice;

/// View controller with TallyGo navigation and Mapbox mapview
SWIFT_CLASS("_TtC10TallyGoKit24TGGuidanceViewController")
@interface TGGuidanceViewController : UIViewController
/// Storyboad name
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull storyboardName;)
+ (NSString * _Nonnull)storyboardName SWIFT_WARN_UNUSED_RESULT;
/// Mapbox MGLMapView
@property (nonatomic, readonly, strong) MGLMapView * _Nonnull mapview;
/// Determines whether origin icon is displayed
@property (nonatomic) BOOL showsOriginIcon;
/// Determines whether destination icon is displayed
@property (nonatomic) BOOL showsDestinationIcon;
/// Text that will be spoken as view is displayed
@property (nonatomic, copy) NSString * _Nullable commencementSpeech;
/// Text that will be spoken when the user needs to proceed to the route
@property (nonatomic, copy) NSString * _Nullable proceedToRouteSpeech;
/// Text that will be spoken upon arrival
@property (nonatomic, copy) NSString * _Nullable arrivalSpeech;
/// Text used in local notification if app is in background
@property (nonatomic, copy) NSString * _Nullable arrivalNotification;
/// The voice that should be used for voice prompts during the route.
@property (nonatomic, strong) AVSpeechSynthesisVoice * _Nullable voice;
/// Do not use. For internal testing only.
@property (nonatomic) BOOL showMakeWrongTurnButton;
/// Address to be displayed in the route progress bar
@property (nonatomic, copy) NSString * _Nullable destinationAddressShort;
/// Address to be displayed on the turn list
@property (nonatomic, copy) NSString * _Nullable originAddress;
/// Address to be displayed in the arrival overlay under the address, and on the turn list
@property (nonatomic, copy) NSString * _Nullable destinationAddress;
/// Configures the map, add notification observers, and requests the route.
- (void)viewDidLoad;
/// Sets the status bar style.
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
/// Hides the navigation bar
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
/// Shows the user’s location
- (void)viewDidAppear:(BOOL)animated;
/// Position the subviews.
- (void)viewDidLayoutSubviews;
/// IBAction for unwind segues.
- (IBAction)backAction:(UIStoryboardSegue * _Nonnull)segue;
/// Override point to perform addtional layout tasks. Default implementation does nothing.
@property (nonatomic, copy) void (^ _Nullable performAdditionalLayout)(void);
/// Override point to perform tasks at arrival. Default implementation does nothing.
@property (nonatomic, copy) void (^ _Nullable performActionOnArrival)(void);
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface TGGuidanceViewController (SWIFT_EXTENSION(TallyGoKit))
@end


@interface TGGuidanceViewController (SWIFT_EXTENSION(TallyGoKit))
@end


@interface TGGuidanceViewController (SWIFT_EXTENSION(TallyGoKit))
@end


/// A class that facilitiates disabling the device’s idle timer.
SWIFT_CLASS("_TtC10TallyGoKit11TGIdleTimer")
@interface TGIdleTimer : NSObject
/// The shared instance of TGIdleTimer.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) TGIdleTimer * _Nonnull shared;)
+ (TGIdleTimer * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Disables the idle timer and prevents the device from sleeping.
- (void)disableIdleTimer;
/// Enables the idle timer and allows the device to sleep, but only after the given delay.
- (void)enableIdleTimerAfterTimeInterval:(NSTimeInterval)afterTimeInterval;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TallyGoKit24TGOverviewViewController")
@interface TGOverviewViewController : UIViewController
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull storyboardName;)
+ (NSString * _Nonnull)storyboardName SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol MGLAnnotation;
@class MGLAnnotationImage;
@class MGLPolyline;
@class MGLShape;
@class UIColor;

@interface TGOverviewViewController (SWIFT_EXTENSION(TallyGoKit)) <MGLMapViewDelegate>
- (MGLAnnotationImage * _Nullable)mapView:(MGLMapView * _Nonnull)mapView imageForAnnotation:(id <MGLAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)mapView:(MGLMapView * _Nonnull)mapView lineWidthForPolylineAnnotation:(MGLPolyline * _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)mapView:(MGLMapView * _Nonnull)mapView strokeColorForShapeAnnotation:(MGLShape * _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)mapView:(MGLMapView * _Nonnull)mapView alphaForShapeAnnotation:(MGLShape * _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10TallyGoKit28TGRoutePreviewViewController")
@interface TGRoutePreviewViewController : UIViewController
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull storyboardName;)
+ (NSString * _Nonnull)storyboardName SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nullable originAddress;
@property (nonatomic, copy) NSString * _Nullable destinationAddress;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
@property (nonatomic, copy) void (^ _Nullable onTallyGo)(void);
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface TGRoutePreviewViewController (SWIFT_EXTENSION(TallyGoKit)) <MGLMapViewDelegate>
- (MGLAnnotationImage * _Nullable)mapView:(MGLMapView * _Nonnull)mapView imageForAnnotation:(id <MGLAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)mapView:(MGLMapView * _Nonnull)mapView lineWidthForPolylineAnnotation:(MGLPolyline * _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)mapView:(MGLMapView * _Nonnull)mapView strokeColorForShapeAnnotation:(MGLShape * _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)mapView:(MGLMapView * _Nonnull)mapView alphaForShapeAnnotation:(MGLShape * _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10TallyGoKit29TGSearchResultsViewController")
@interface TGSearchResultsViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface TGSearchResultsViewController (SWIFT_EXTENSION(TallyGoKit)) <UITableViewDataSource>
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end


@interface TGSearchResultsViewController (SWIFT_EXTENSION(TallyGoKit)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UITextField;

/// View controller that allows the user to find locations by entering text searches. This feature is currently in beta and the implementation may change.
SWIFT_CLASS("_TtC10TallyGoKit22TGSearchViewController")
@interface TGSearchViewController : UIViewController
/// The search bar text field.
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified searchBar;
/// Use this function to force the cancel button to display. This is useful, for example, if your app has other means to select a location.
- (void)showCancelButton;
/// Use this function to notify the search view controller to reset, for example, after completing or cancelling a route.
- (void)reset;
/// Factory method to create an instance of TGSearchViewController.
+ (TGSearchViewController * _Nonnull)create SWIFT_WARN_UNUSED_RESULT;
/// If you choose to override this method, you should call super.viewDidLoad().
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface TGSearchViewController (SWIFT_EXTENSION(TallyGoKit)) <UITextFieldDelegate>
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
@end


@interface TGSearchViewController (SWIFT_EXTENSION(TallyGoKit)) <UITableViewDataSource>
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end


@interface TGSearchViewController (SWIFT_EXTENSION(TallyGoKit)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


/// A subclass of MGLMapView that uses the TallyGo map style and updates traffic lines.
SWIFT_CLASS("_TtC10TallyGoKit15TGStyledMapView")
@interface TGStyledMapView : MGLMapView
/// The URL of the map style.
@property (nonatomic, copy) NSURL * _Null_unspecified styleURL;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame styleURL:(NSURL * _Nullable)styleURL OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TallyGoKit27TGTurnListBaseTableViewCell")
@interface TGTurnListBaseTableViewCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TallyGoKit24TGTurnListViewController")
@interface TGTurnListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull storyboardName;)
+ (NSString * _Nonnull)storyboardName SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLoad;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Service to speak and preload voice prompts.
SWIFT_CLASS("_TtC10TallyGoKit16TGVoiceSynthesis")
@interface TGVoiceSynthesis : NSObject
/// The shared instance of TGVoiceSynthesis.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) TGVoiceSynthesis * _Nonnull shared;)
+ (TGVoiceSynthesis * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/// Allows the voice service to be turned on/off globally.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enabled;)
+ (BOOL)enabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnabled:(BOOL)newValue;
@end

@class AVSpeechSynthesizer;
@class AVSpeechUtterance;

@interface TGVoiceSynthesis (SWIFT_EXTENSION(TallyGoKit)) <AVSpeechSynthesizerDelegate>
- (void)speechSynthesizer:(AVSpeechSynthesizer * _Nonnull)synthesizer didPauseSpeechUtterance:(AVSpeechUtterance * _Nonnull)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer * _Nonnull)synthesizer didStartSpeechUtterance:(AVSpeechUtterance * _Nonnull)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer * _Nonnull)synthesizer didCancelSpeechUtterance:(AVSpeechUtterance * _Nonnull)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer * _Nonnull)synthesizer didFinishSpeechUtterance:(AVSpeechUtterance * _Nonnull)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer * _Nonnull)synthesizer didContinueSpeechUtterance:(AVSpeechUtterance * _Nonnull)utterance;
@end

@class UIImage;
enum TallyGoStyleKitResizingBehavior : NSInteger;

SWIFT_CLASS("_TtC10TallyGoKit15TallyGoStyleKit")
@interface TallyGoStyleKit : NSObject
/// / Colors
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGWhite;)
+ (UIColor * _Nonnull)tGWhite SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGRed;)
+ (UIColor * _Nonnull)tGRed SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGGreen;)
+ (UIColor * _Nonnull)tGGreen SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGBlue;)
+ (UIColor * _Nonnull)tGBlue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGYellow;)
+ (UIColor * _Nonnull)tGYellow SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGButtonTextColor;)
+ (UIColor * _Nonnull)tGButtonTextColor SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGYellowGreen;)
+ (UIColor * _Nonnull)tGYellowGreen SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull mediumGrey;)
+ (UIColor * _Nonnull)mediumGrey SWIFT_WARN_UNUSED_RESULT;
/// / Drawing Methods
+ (void)drawVisualTurnIndicatorWithFrame:(CGRect)frame approachColor:(UIColor * _Nonnull)approachColor image:(UIImage * _Nonnull)image approachIndicatorWidth:(CGFloat)approachIndicatorWidth street:(NSString * _Nonnull)street distance:(NSString * _Nonnull)distance;
+ (void)drawVisualTurnIndicatorWithSignWithFrame:(CGRect)frame approachColor:(UIColor * _Nonnull)approachColor sign:(UIImage * _Nonnull)sign image:(UIImage * _Nonnull)image approachIndicatorWidth:(CGFloat)approachIndicatorWidth street:(NSString * _Nonnull)street distance:(NSString * _Nonnull)distance;
+ (void)drawUTurnLeft;
+ (void)drawExitRight;
+ (void)drawMergeRight;
+ (void)drawUTurnRight;
+ (void)drawVTIDestination;
+ (void)drawHardLeft;
+ (void)drawHardRight;
+ (void)drawTurnLeft;
+ (void)drawVTIDestinationLeft;
+ (void)drawSlightRight;
+ (void)drawTurnRight;
+ (void)drawMerge;
+ (void)drawExitLeft;
+ (void)drawRightAtTheFork;
+ (void)drawVTIDestinationRight;
+ (void)drawSlightLeft;
+ (void)drawLeftAtTheFork;
+ (void)drawForward;
+ (void)drawCAHighwayWithHighwayNumber:(NSString * _Nonnull)highwayNumber;
+ (void)drawUSHighwayWithHighwayNumber:(NSString * _Nonnull)highwayNumber;
+ (void)drawInterstateWithHighwayNumber:(NSString * _Nonnull)highwayNumber nudge:(CGFloat)nudge;
+ (void)drawRouteProgressWithFrame:(CGRect)frame approachIndicatorWidth:(CGFloat)approachIndicatorWidth firstLine:(NSString * _Nonnull)firstLine secondLine:(NSString * _Nonnull)secondLine thirdLine:(NSString * _Nonnull)thirdLine;
+ (void)drawStopNavigationButtonWithFrame:(CGRect)frame highlighted:(BOOL)highlighted;
+ (void)drawBigRedButtonWithFrame:(CGRect)frame fontSize:(CGFloat)fontSize highlighted:(BOOL)highlighted buttonText:(NSString * _Nonnull)buttonText;
+ (void)drawBigWhiteButtonWithFrame:(CGRect)frame fontSize:(CGFloat)fontSize highlighted:(BOOL)highlighted buttonText:(NSString * _Nonnull)buttonText;
+ (void)drawBigGreenButtonWithFrame:(CGRect)frame fontSize:(CGFloat)fontSize highlighted:(BOOL)highlighted buttonText:(NSString * _Nonnull)buttonText;
+ (void)drawBigGrayButtonWithFrame:(CGRect)frame fontSize:(CGFloat)fontSize highlighted:(BOOL)highlighted buttonText:(NSString * _Nonnull)buttonText;
+ (void)drawResumeNavigationButtonWithFrame:(CGRect)frame highlighted:(BOOL)highlighted;
+ (void)drawCloseButtonWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawKeyboardInstructionsWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawGreenCheckmarkWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawErrorIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawTurnListButtonWithHighlighted:(BOOL)highlighted;
+ (void)drawTLMerge;
+ (void)drawTLRightAtTheFork;
+ (void)drawTLSlightRight;
+ (void)drawTLExitRight;
+ (void)drawTLUTurnLeft;
+ (void)drawTLLeftAtTheFork;
+ (void)drawTLTurnRight;
+ (void)drawTLMergeRight;
+ (void)drawTLTurnLeft;
+ (void)drawTLExitLeft;
+ (void)drawTLUTurnRight;
+ (void)drawTLHardRight;
+ (void)drawTLHardLeft;
+ (void)drawTLDestinationLeft;
+ (void)drawTLDistanceIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawTLForward;
+ (void)drawTLDestination;
+ (void)drawTLOrigin;
+ (void)drawTLDestinationRight;
+ (void)drawTLSlightLeft;
+ (void)drawBackButtonWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawMapMarkerWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSmallMapMarkerWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawBackArrowWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSearchBackgroundWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSearchIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawMenuButtonWithHighlighted:(BOOL)highlighted;
+ (void)drawStopNavigationIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSendFeedbackIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawRouteOverviewIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawTurnListIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSoundIconWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
+ (void)drawSelectionArrowWithFrame:(CGRect)targetFrame resizing:(enum TallyGoStyleKitResizingBehavior)resizing;
/// / Generated Images
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfUTurnLeft;)
+ (UIImage * _Nonnull)imageOfUTurnLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfExitRight;)
+ (UIImage * _Nonnull)imageOfExitRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfMergeRight;)
+ (UIImage * _Nonnull)imageOfMergeRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfUTurnRight;)
+ (UIImage * _Nonnull)imageOfUTurnRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfVTIDestination;)
+ (UIImage * _Nonnull)imageOfVTIDestination SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfHardLeft;)
+ (UIImage * _Nonnull)imageOfHardLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfHardRight;)
+ (UIImage * _Nonnull)imageOfHardRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTurnLeft;)
+ (UIImage * _Nonnull)imageOfTurnLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfVTIDestinationLeft;)
+ (UIImage * _Nonnull)imageOfVTIDestinationLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSlightRight;)
+ (UIImage * _Nonnull)imageOfSlightRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTurnRight;)
+ (UIImage * _Nonnull)imageOfTurnRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfMerge;)
+ (UIImage * _Nonnull)imageOfMerge SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfExitLeft;)
+ (UIImage * _Nonnull)imageOfExitLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfRightAtTheFork;)
+ (UIImage * _Nonnull)imageOfRightAtTheFork SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfVTIDestinationRight;)
+ (UIImage * _Nonnull)imageOfVTIDestinationRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSlightLeft;)
+ (UIImage * _Nonnull)imageOfSlightLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfLeftAtTheFork;)
+ (UIImage * _Nonnull)imageOfLeftAtTheFork SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfForward;)
+ (UIImage * _Nonnull)imageOfForward SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)imageOfCAHighwayWithHighwayNumber:(NSString * _Nonnull)highwayNumber SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)imageOfUSHighwayWithHighwayNumber:(NSString * _Nonnull)highwayNumber SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)imageOfInterstateWithHighwayNumber:(NSString * _Nonnull)highwayNumber nudge:(CGFloat)nudge SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfKeyboardInstructions;)
+ (UIImage * _Nonnull)imageOfKeyboardInstructions SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfGreenCheckmark;)
+ (UIImage * _Nonnull)imageOfGreenCheckmark SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLMerge;)
+ (UIImage * _Nonnull)imageOfTLMerge SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLRightAtTheFork;)
+ (UIImage * _Nonnull)imageOfTLRightAtTheFork SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLSlightRight;)
+ (UIImage * _Nonnull)imageOfTLSlightRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLExitRight;)
+ (UIImage * _Nonnull)imageOfTLExitRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLUTurnLeft;)
+ (UIImage * _Nonnull)imageOfTLUTurnLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLLeftAtTheFork;)
+ (UIImage * _Nonnull)imageOfTLLeftAtTheFork SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLTurnRight;)
+ (UIImage * _Nonnull)imageOfTLTurnRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLMergeRight;)
+ (UIImage * _Nonnull)imageOfTLMergeRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLTurnLeft;)
+ (UIImage * _Nonnull)imageOfTLTurnLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLExitLeft;)
+ (UIImage * _Nonnull)imageOfTLExitLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLUTurnRight;)
+ (UIImage * _Nonnull)imageOfTLUTurnRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLHardRight;)
+ (UIImage * _Nonnull)imageOfTLHardRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLHardLeft;)
+ (UIImage * _Nonnull)imageOfTLHardLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLDestinationLeft;)
+ (UIImage * _Nonnull)imageOfTLDestinationLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLDistanceIcon;)
+ (UIImage * _Nonnull)imageOfTLDistanceIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLForward;)
+ (UIImage * _Nonnull)imageOfTLForward SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLDestination;)
+ (UIImage * _Nonnull)imageOfTLDestination SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLOrigin;)
+ (UIImage * _Nonnull)imageOfTLOrigin SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLDestinationRight;)
+ (UIImage * _Nonnull)imageOfTLDestinationRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTLSlightLeft;)
+ (UIImage * _Nonnull)imageOfTLSlightLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfBackButton;)
+ (UIImage * _Nonnull)imageOfBackButton SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfMapMarker;)
+ (UIImage * _Nonnull)imageOfMapMarker SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSmallMapMarker;)
+ (UIImage * _Nonnull)imageOfSmallMapMarker SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSearchIcon;)
+ (UIImage * _Nonnull)imageOfSearchIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfStopNavigationIcon;)
+ (UIImage * _Nonnull)imageOfStopNavigationIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSendFeedbackIcon;)
+ (UIImage * _Nonnull)imageOfSendFeedbackIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfRouteOverviewIcon;)
+ (UIImage * _Nonnull)imageOfRouteOverviewIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTurnListIcon;)
+ (UIImage * _Nonnull)imageOfTurnListIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSoundIcon;)
+ (UIImage * _Nonnull)imageOfSoundIcon SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSelectionArrow;)
+ (UIImage * _Nonnull)imageOfSelectionArrow SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, TallyGoStyleKitResizingBehavior, "ResizingBehavior") {
  TallyGoStyleKitResizingBehaviorAspectFit = 0,
/// The content is proportionally resized to fit into the target rectangle.
  TallyGoStyleKitResizingBehaviorAspectFill = 1,
/// The content is proportionally resized to completely fill the target rectangle.
  TallyGoStyleKitResizingBehaviorStretch = 2,
/// The content is stretched to match the entire target rectangle.
  TallyGoStyleKitResizingBehaviorCenter = 3,
};


@interface UIColor (SWIFT_EXTENSION(TallyGoKit))
@end


@interface UIDevice (SWIFT_EXTENSION(TallyGoKit))
@property (nonatomic, readonly, copy) NSString * _Nonnull modelName;
@end


@interface UIFont (SWIFT_EXTENSION(TallyGoKit))
/// Allows a custom font to be used.
+ (void)registerFontWithFilenameStringWithFilenameString:(NSString * _Nonnull)filenameString;
@end


@interface UIImage (SWIFT_EXTENSION(TallyGoKit))
@end


@interface NSURLSession (SWIFT_EXTENSION(TallyGoKit))
@end

#pragma clang diagnostic pop
