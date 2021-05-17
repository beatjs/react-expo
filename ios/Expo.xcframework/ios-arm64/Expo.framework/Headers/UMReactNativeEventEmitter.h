// Copyright 2018-present 650 Industries. All rights reserved.

#import <Expo/UMInternalModule.h>
#import <Expo/UMEventEmitterService.h>
#import <Expo/UMModuleRegistryConsumer.h>
#import <Expo/UMBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface UMReactNativeEventEmitter : RCTEventEmitter <UMInternalModule, UMBridgeModule, UMModuleRegistryConsumer, UMEventEmitterService>

@end
