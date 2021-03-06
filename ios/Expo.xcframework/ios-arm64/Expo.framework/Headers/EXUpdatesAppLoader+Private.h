//  Copyright © 2019 650 Industries. All rights reserved.

#import <Expo/EXUpdatesAppLoader.h>
#import <Expo/EXUpdatesAsset.h>
#import <Expo/EXUpdatesDatabase.h>
#import <Expo/EXUpdatesUpdate.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXUpdatesAppLoader ()

@property (nonatomic, strong) EXUpdatesConfig *config;
@property (nonatomic, strong) EXUpdatesDatabase *database;
@property (nonatomic, strong) NSURL *directory;
@property (nonatomic, strong) EXUpdatesUpdate *updateManifest;
@property (nonatomic, copy) EXUpdatesAppLoaderManifestBlock manifestBlock;
@property (nonatomic, copy) EXUpdatesAppLoaderSuccessBlock successBlock;
@property (nonatomic, copy) EXUpdatesAppLoaderErrorBlock errorBlock;

- (void)startLoadingFromManifest:(EXUpdatesUpdate *)updateManifest;
- (void)handleAssetDownloadAlreadyExists:(EXUpdatesAsset *)asset;
- (void)handleAssetDownloadWithData:(NSData *)data response:(nullable NSURLResponse *)response asset:(EXUpdatesAsset *)asset;
- (void)handleAssetDownloadWithError:(NSError *)error asset:(EXUpdatesAsset *)asset;

- (void)downloadAsset:(EXUpdatesAsset *)asset;

@end

NS_ASSUME_NONNULL_END
