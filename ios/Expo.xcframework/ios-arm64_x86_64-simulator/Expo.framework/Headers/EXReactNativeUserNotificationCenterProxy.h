// Copyright 2018-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

#import <Expo/UMInternalModule.h>
#import <Expo/UMUserNotificationCenterProxyInterface.h>

@interface EXReactNativeUserNotificationCenterProxy : NSObject <UMInternalModule, UMUserNotificationCenterProxyInterface>

@end
