// Copyright 2015-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/EXSessionTaskDelegate.h>
#import <Expo/EXSessionHandler.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXSessionTaskDispatcher : NSObject <NSURLSessionDelegate>

- (instancetype)initWithSessionHandler:(id<EXSessionHandler>)sessionHandler;

- (void)registerTaskDelegate:(EXSessionTaskDelegate *)delegate forTask:(NSURLSessionTask *)task;

- (void)deactivate;

@end

NS_ASSUME_NONNULL_END
