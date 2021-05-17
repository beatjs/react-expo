// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/UMModuleRegistry.h>
#import <Expo/UMSingletonModule.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMModuleRegistryProvider : NSObject

@property (nonatomic, weak) id<UMModuleRegistryDelegate> moduleRegistryDelegate;

+ (NSSet *)singletonModules;
+ (nullable UMSingletonModule *)getSingletonModuleForClass:(Class)singletonClass;

- (instancetype)initWithSingletonModules:(NSSet *)modules;
- (UMModuleRegistry *)moduleRegistry;

@end

NS_ASSUME_NONNULL_END
