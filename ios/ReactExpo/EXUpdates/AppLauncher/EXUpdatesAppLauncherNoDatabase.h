//  Copyright © 2019 650 Industries. All rights reserved.

#import <Expo/EXUpdatesAppLauncher.h>
#import <Expo/EXUpdatesConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXUpdatesAppLauncherNoDatabase : NSObject <EXUpdatesAppLauncher>

- (void)launchUpdateWithConfig:(EXUpdatesConfig *)config;
- (void)launchUpdateWithConfig:(EXUpdatesConfig *)config fatalError:(NSError *)error;
+ (nullable NSString *)consumeError;

@end

NS_ASSUME_NONNULL_END

