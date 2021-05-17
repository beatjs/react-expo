//  Copyright © 2019 650 Industries. All rights reserved.

#import <Expo/EXUpdatesUpdate.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXUpdatesBareUpdate : NSObject

+ (EXUpdatesUpdate *)updateWithBareManifest:(NSDictionary *)manifest
                                     config:(EXUpdatesConfig *)config
                                   database:(EXUpdatesDatabase *)database;

@end

NS_ASSUME_NONNULL_END
