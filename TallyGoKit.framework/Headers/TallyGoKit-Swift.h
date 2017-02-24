// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
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
#if defined(__has_feature) && __has_feature(modules)
@import CoreLocation;
@import Foundation;
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import Mapbox;
@import AVFoundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CLLocation (SWIFT_EXTENSION(TallyGoKit))
@end


@interface NSDateFormatter (SWIFT_EXTENSION(TallyGoKit))
@end

@class NSCoder;

SWIFT_CLASS("_TtC10TallyGoKit8TGButton")
@interface TGButton : UIButton
/**
  Redraws the button is the highlighting is changed.
*/
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
/**
  Redraws the button if the enabled value is changed.
*/
@property (nonatomic, setter=setEnabled:) BOOL isEnabled;
/**
  Redraws the button when the subviews are layed out.
*/
- (void)layoutSubviews;
/**
  Draws the button image.
*/
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/**
  A class that facilitiates disabling the device’s idle timer.
*/
SWIFT_CLASS("_TtC10TallyGoKit11TGIdleTimer")
@interface TGIdleTimer : NSObject
/**
  The shared instance of TGIdleTimer.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) TGIdleTimer * _Nonnull shared;)
+ (TGIdleTimer * _Nonnull)shared;
/**
  Disables the idle timer and prevents the device from sleeping.
*/
- (void)disableIdleTimer;
/**
  Enables the idle timer and allows the device to sleep, but only after the given delay.
*/
- (void)enableIdleTimerAfterTimeInterval:(NSTimeInterval)afterTimeInterval;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MGLMapView;
@class UIStoryboardSegue;
@class NSBundle;

/**
  View controller with TallyGo navigation and Mapbox mapview
*/
SWIFT_CLASS("_TtC10TallyGoKit19TGNavViewController")
@interface TGNavViewController : UIViewController
/**
  Mapbox MGLMapView
*/
@property (nonatomic, readonly, strong) MGLMapView * _Nonnull mapview;
/**
  Determines whether origin icon is displayed
*/
@property (nonatomic) BOOL showsOriginIcon;
/**
  Determines whether destination icon is displayed
*/
@property (nonatomic) BOOL showsDestinationIcon;
/**
  Text that will be spoken as view is displayed
*/
@property (nonatomic, copy) NSString * _Nullable commencementSpeech;
/**
  Text that will be spoken when the user needs to proceed to the route
*/
@property (nonatomic, copy) NSString * _Nullable proceedToRouteSpeech;
/**
  Text that will be spoken upon arrival
*/
@property (nonatomic, copy) NSString * _Nullable arrivalSpeech;
/**
  Do not use. For internal testing only.
*/
@property (nonatomic) BOOL showMakeWrongTurnButton;
/**
  Address to be displayed in the route progress bar
*/
@property (nonatomic, copy) NSString * _Nullable destinationAddress;
/**
  The default initializer.
*/
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/**
  Configures the map, add notification observers, and requests the route.
*/
- (void)viewDidLoad;
/**
  Sets the status bar style.
*/
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
/**
  Shows the user’s location
*/
- (void)viewDidAppear:(BOOL)animated;
/**
  Position the subviews.
*/
- (void)viewDidLayoutSubviews;
/**
  IBAction for unwind segues.
*/
- (IBAction)backAction:(UIStoryboardSegue * _Nonnull)segue;
/**
  Override point to perform addtional layout tasks. Default implementation does nothing.
*/
@property (nonatomic, copy) void (^ _Nullable performAdditionalLayout)(void);
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


/**
  A subclass of MGLMapView that uses the TallyGo map style and updates traffic lines.
*/
SWIFT_CLASS("_TtC10TallyGoKit15TGStyledMapView")
@interface TGStyledMapView : MGLMapView
/**
  The URL of the map style.
*/
@property (nonatomic, copy) NSURL * _Null_unspecified styleURL;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame styleURL:(NSURL * _Nullable)styleURL OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVAudioPlayer;

/**
  Service to speak and preload voice prompts.
*/
SWIFT_CLASS("_TtC10TallyGoKit16TGVoiceSynthesis")
@interface TGVoiceSynthesis : NSObject <AVAudioPlayerDelegate>
/**
  The shared instance of TGVoiceSynthesis.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) TGVoiceSynthesis * _Nonnull shared;)
+ (TGVoiceSynthesis * _Nonnull)shared;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Allows the voice service to be turned on/off globally.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enabled;)
+ (BOOL)enabled;
+ (void)setEnabled:(BOOL)newValue;
/**
  Deletes all of the cached audio from disk.
*/
+ (void)deleteAudioCache;
/**
  Used internally. Client app should not call this method.
*/
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer * _Nonnull)player successfully:(BOOL)flag;
/**
  Used internally. Client app should not call this method.
*/
- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer * _Nonnull)player error:(NSError * _Nullable)error;
@end

@class UIColor;
@class UIImage;
enum ResizingBehavior : NSInteger;

SWIFT_CLASS("_TtC10TallyGoKit15TallyGoStyleKit")
@interface TallyGoStyleKit : NSObject
/**
  / Colors
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGWhite;)
+ (UIColor * _Nonnull)tGWhite;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGRed;)
+ (UIColor * _Nonnull)tGRed;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGGreen;)
+ (UIColor * _Nonnull)tGGreen;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGBlue;)
+ (UIColor * _Nonnull)tGBlue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGYellow;)
+ (UIColor * _Nonnull)tGYellow;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIColor * _Nonnull tGButtonTextColor;)
+ (UIColor * _Nonnull)tGButtonTextColor;
/**
  / Drawing Methods
*/
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
+ (void)drawCloseButtonWithFrame:(CGRect)targetFrame resizing:(enum ResizingBehavior)resizing;
/**
  / Generated Images
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfUTurnLeft;)
+ (UIImage * _Nonnull)imageOfUTurnLeft;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfExitRight;)
+ (UIImage * _Nonnull)imageOfExitRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfMergeRight;)
+ (UIImage * _Nonnull)imageOfMergeRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfUTurnRight;)
+ (UIImage * _Nonnull)imageOfUTurnRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfVTIDestination;)
+ (UIImage * _Nonnull)imageOfVTIDestination;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfHardLeft;)
+ (UIImage * _Nonnull)imageOfHardLeft;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfHardRight;)
+ (UIImage * _Nonnull)imageOfHardRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTurnLeft;)
+ (UIImage * _Nonnull)imageOfTurnLeft;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfVTIDestinationLeft;)
+ (UIImage * _Nonnull)imageOfVTIDestinationLeft;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSlightRight;)
+ (UIImage * _Nonnull)imageOfSlightRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfTurnRight;)
+ (UIImage * _Nonnull)imageOfTurnRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfMerge;)
+ (UIImage * _Nonnull)imageOfMerge;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfExitLeft;)
+ (UIImage * _Nonnull)imageOfExitLeft;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfRightAtTheFork;)
+ (UIImage * _Nonnull)imageOfRightAtTheFork;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfVTIDestinationRight;)
+ (UIImage * _Nonnull)imageOfVTIDestinationRight;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfSlightLeft;)
+ (UIImage * _Nonnull)imageOfSlightLeft;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfLeftAtTheFork;)
+ (UIImage * _Nonnull)imageOfLeftAtTheFork;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIImage * _Nonnull imageOfForward;)
+ (UIImage * _Nonnull)imageOfForward;
+ (UIImage * _Nonnull)imageOfCAHighwayWithHighwayNumber:(NSString * _Nonnull)highwayNumber;
+ (UIImage * _Nonnull)imageOfUSHighwayWithHighwayNumber:(NSString * _Nonnull)highwayNumber;
+ (UIImage * _Nonnull)imageOfInterstateWithHighwayNumber:(NSString * _Nonnull)highwayNumber nudge:(CGFloat)nudge;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, ResizingBehavior) {
  ResizingBehaviorAspectFit = 0,
/**
  The content is proportionally resized to fit into the target rectangle.
*/
  ResizingBehaviorAspectFill = 1,
/**
  The content is proportionally resized to completely fill the target rectangle.
*/
  ResizingBehaviorStretch = 2,
/**
  The content is stretched to match the entire target rectangle.
*/
  ResizingBehaviorCenter = 3,
};


@interface UIColor (SWIFT_EXTENSION(TallyGoKit))
@end


@interface UIFont (SWIFT_EXTENSION(TallyGoKit))
/**
  Allows a custom font to be used.
*/
+ (void)registerFontWithFilenameStringWithFilenameString:(NSString * _Nonnull)filenameString;
@end


@interface NSURLSession (SWIFT_EXTENSION(TallyGoKit))
@end

#pragma clang diagnostic pop
