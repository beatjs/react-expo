// Copyright © 2018 650 Industries. All rights reserved.

#import <Expo/UMExportedModule.h>
#import <Expo/UMModuleRegistryConsumer.h>

@interface EXErrorRecoveryModule : UMExportedModule

- (NSString *)userDefaultsKey;

- (BOOL)setRecoveryProps:(NSString *)props;

- (NSString *)consumeRecoveryProps;

@end
