// Copyright 2015-present 650 Industries. All rights reserved.

#import <Expo/UMExportedModule.h>
#import <Expo/UMModuleRegistryConsumer.h>

@interface EXFontLoader : UMExportedModule <UMModuleRegistryConsumer>

- (instancetype)initWithFontFamilyPrefix:(NSString *)prefix;

@end
