// Copyright 2016-present 650 Industries. All rights reserved.

#import <Expo/UMExportedModule.h>
#import <Expo/UMModuleRegistryConsumer.h>
#import <Expo/UMPermissionsInterface.h>

@interface EXPermissionsService : UMExportedModule <UMPermissionsInterface, UMModuleRegistryConsumer>

+ (UMPermissionStatus)statusForPermission:(NSDictionary *)permission;

+ (NSString *)permissionStringForStatus:(UMPermissionStatus)status;

- (void)askForGlobalPermissionUsingRequesterClass:(Class)requesterClass
                                    withResolver:(UMPromiseResolveBlock)resolver
                                    withRejecter:(UMPromiseRejectBlock)reject;

- (NSDictionary *)getPermissionUsingRequesterClass:(Class)requesterClass;

@end
