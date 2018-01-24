//
//  TGStoryboardInitializableViewController.h
//  TallyGoKit
//
//  Created by David Deller on 1/10/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TGStoryboardInitializableViewController : UIViewController

@property (class, nonatomic, readonly, nonnull) NSString *storyboardName;

@property (class, nonatomic, readonly, nonnull) NSBundle *storyboardBundle;

/// Creates a new instance of the class.
+ (nonnull instancetype)makeFromStoryboard;

/// Convenience alias for `makeFromStoryboard`.
+ (nonnull instancetype)create;

- (nonnull UINavigationController *)embedInNavigationController;

- (nonnull UINavigationController *)embedInNavigationControllerWithNavigationBarClass:(nullable Class)navigationBarClass;

@end
