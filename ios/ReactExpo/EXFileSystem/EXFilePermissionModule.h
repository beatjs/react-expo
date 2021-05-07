// Copyright 2015-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/UMFileSystemInterface.h>
#import <Expo/UMFilePermissionModuleInterface.h>
#import <Expo/UMInternalModule.h>
#import <Expo/UMModuleRegistryConsumer.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXFilePermissionModule : NSObject <UMInternalModule, UMFilePermissionModuleInterface, UMModuleRegistryConsumer>

- (UMFileSystemPermissionFlags)getPathPermissions:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
