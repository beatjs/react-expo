// Copyright 2018-present 650 Industries. All rights reserved.

#import <Expo/UMUIManager.h>
#import <Expo/UMInternalModule.h>
#import <Expo/UMAppLifecycleService.h>
#import <Expo/UMAppLifecycleListener.h>
#import <Expo/UMModuleRegistryConsumer.h>
#import <Expo/UMJavaScriptContextProvider.h>
#import <Expo/UMBridgeModule.h>

@interface UMReactNativeAdapter : NSObject <UMInternalModule, UMBridgeModule, UMAppLifecycleService, UMUIManager, UMJavaScriptContextProvider, UMModuleRegistryConsumer>

@end
