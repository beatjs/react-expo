//  Copyright © 2019 650 Industries. All rights reserved.

#import <Expo/EXUpdatesConfig.h>
#import <Expo/EXUpdatesDatabase.h>
#import <Expo/EXUpdatesSelectionPolicy.h>
#import <Expo/EXUpdatesUpdate.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXUpdatesReaper : NSObject

+ (void)reapUnusedUpdatesWithConfig:(EXUpdatesConfig *)config
                           database:(EXUpdatesDatabase *)database
                          directory:(NSURL *)directory
                    selectionPolicy:(id<EXUpdatesSelectionPolicy>)selectionPolicy
                     launchedUpdate:(EXUpdatesUpdate *)launchedUpdate;

@end

NS_ASSUME_NONNULL_END
