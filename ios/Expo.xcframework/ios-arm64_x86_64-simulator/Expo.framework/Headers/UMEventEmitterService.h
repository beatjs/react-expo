// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/UMDefines.h>
#import <Expo/UMExportedModule.h>

@protocol UMEventEmitterService

- (void)sendEventWithName:(NSString *)name body:(id)body;

@end
