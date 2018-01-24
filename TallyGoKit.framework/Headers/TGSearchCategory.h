//
//  TGSearchCategory.h
//  TallyGoKit
//
//  Created by David Deller on 12/19/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

#import <UIKit/UIKit.h>

typedef NSString *TGSearchCategoryShortName NS_TYPED_ENUM;

FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameATMs;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameAutoRepair;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameCarWash;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameCoffee;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameConvenience;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameCopyShops;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameDepartmentStores;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameDrugStores;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameGas;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameGroceries;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameHardware;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameHospitals;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameHotels;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameParking;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameParks;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNamePostOffice;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameRestaurants;
FOUNDATION_EXPORT TGSearchCategoryShortName _Nonnull const TGSearchCategoryShortNameUnknown;

@interface TGSearchCategory : TGBaseObject

@property (nonatomic, readonly, nullable) NSString *serviceCategoryName;

@property (nonatomic, readonly, nullable) NSString *displayName;

@property (nonatomic, readonly) NSInteger defaultSortOrder;

@property (nonatomic, readonly, nullable) TGSearchCategoryShortName shortName;

- (void)image:(void (^_Nonnull)(UIImage * _Nullable))completion;

@end
