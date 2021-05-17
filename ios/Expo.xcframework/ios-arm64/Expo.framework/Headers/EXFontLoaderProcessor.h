// Copyright 2015-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <Expo/UMFontProcessorInterface.h>
#import <Expo/EXFontManager.h>

@interface EXFontLoaderProcessor : NSObject <UMFontProcessorInterface>

- (instancetype)initWithFontFamilyPrefix:(NSString *)prefix
                                 manager:(EXFontManager *)manager;

- (instancetype)initWithManager:(EXFontManager *)manager;

@end
