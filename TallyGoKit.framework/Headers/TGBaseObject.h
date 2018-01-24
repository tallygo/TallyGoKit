//
//  TGBaseObject.h
//  TallyGoKit
//
//  Created by David Deller on 11/16/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGBaseObject : NSObject

/// The underlying JSON object.
@property (nonatomic, readonly, nonnull) NSDictionary *dictionary;

/// Initializer from a JSON object.
- (nonnull instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary;

/// Returns a value from the JSON using a key.
- (nullable id)valueForKey:(nonnull NSString *)key;

- (nullable NSURL *)urlForKey:(nonnull NSString *)key;
- (NSInteger)integerForKey:(nonnull NSString *)key;
- (double)doubleForKey:(nonnull NSString *)key;
- (BOOL)boolForKey:(nonnull NSString *)key;
- (nullable NSString *)stringForKey:(nonnull NSString *)key;
- (nonnull NSString *)stringForKey:(nonnull NSString *)key memberOfEnum:(nonnull NSArray<NSString *> *)allValues default:(nonnull NSString *)defaultValue;
- (nonnull NSArray *)arrayForKey:(nonnull NSString *)key;
- (nonnull NSDictionary *)dictionaryForKey:(nonnull NSString *)key;
- (nullable id)valueForKey:(nonnull NSString *)key ofKind:(nonnull Class)kind;

@end
