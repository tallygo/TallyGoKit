//
//  TGButton.h
//  TallyGoKit
//
//  Created by David Deller on 1/3/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <UIKit/UIKit.h>

/// A stylized subclass of UIButton
@interface TGButton : UIButton

@property (nonatomic, nullable) IBInspectable NSString *buttonText;
@property (nonatomic, nullable) IBInspectable NSString *disabledButtonText;
@property (nonatomic) IBInspectable CGFloat fontSize;
@property (nonatomic) IBInspectable BOOL hideOnDisabled;
@property (nonatomic) IBInspectable BOOL red;
@property (nonatomic) IBInspectable BOOL white;
@property (nonatomic) IBInspectable BOOL dark;
@property (nonatomic) IBInspectable BOOL resumeNavigation;
@property (nonatomic) IBInspectable BOOL stopNavigation;
@property (nonatomic) IBInspectable BOOL close;

@end
