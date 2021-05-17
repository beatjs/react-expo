// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/UMAppLifecycleListener.h>

@protocol UMAppLifecycleService <NSObject>

- (void)registerAppLifecycleListener:(id<UMAppLifecycleListener>)listener;
- (void)unregisterAppLifecycleListener:(id<UMAppLifecycleListener>)listener;
- (void)setAppStateToBackground;
- (void)setAppStateToForeground;

@end
