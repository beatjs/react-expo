// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>

#import <Expo/UMInternalModule.h>

@protocol UMModuleRegistryDelegate <NSObject>

- (id<UMInternalModule>)pickInternalModuleImplementingInterface:(Protocol *)interface fromAmongModules:(NSArray<id<UMInternalModule>> *)internalModules;

@end
