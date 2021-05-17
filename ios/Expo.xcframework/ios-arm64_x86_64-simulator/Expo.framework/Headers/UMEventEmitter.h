// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/UMDefines.h>
#import <Expo/UMExportedModule.h>

// Implement this protocol in your exported module to be able
// to send events through platform event emitter.

@protocol UMEventEmitter

- (void)startObserving;
- (void)stopObserving;

- (NSArray<NSString *> *)supportedEvents;

@end
