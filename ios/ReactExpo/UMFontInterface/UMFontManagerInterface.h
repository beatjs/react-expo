// Copyright 2018-present 650 Industries. All rights reserved.
#import <Expo/UMFontProcessorInterface.h>

@protocol UMFontManagerInterface

- (void)addFontProcessor:(id<UMFontProcessorInterface>)processor;

@end
