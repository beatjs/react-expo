// Copyright 2018-present 650 Industries. All rights reserved.

#import <Expo/UMFontScalerInterface.h>

@protocol UMFontScalersManagerInterface

- (void)registerFontScaler:(id<UMFontScalerInterface>)scaler;

@end
