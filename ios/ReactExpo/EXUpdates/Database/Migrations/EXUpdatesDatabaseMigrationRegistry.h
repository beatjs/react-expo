//  Copyright © 2021 650 Industries. All rights reserved.

#import <Expo/EXUpdatesDatabaseMigration.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXUpdatesDatabaseMigrationRegistry : NSObject

+ (NSArray<id<EXUpdatesDatabaseMigration>> *)migrations;

@end

NS_ASSUME_NONNULL_END

