//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/PLAssetsdResourceWriteOnlyServiceProtocol-Protocol.h>

@class NSArray, NSData, NSDictionary, NSProgress, NSString, NSURL;

@protocol PLAssetsdResourceServiceProtocol <PLAssetsdResourceWriteOnlyServiceProtocol>
- (void)projectExtensionDataForProjectUuid:(NSString *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)updateInternalResourcePath:(NSString *)arg1 objectURI:(NSURL *)arg2 sandboxExtension:(NSData *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (NSProgress *)consolidateAssets:(NSArray *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)downloadCloudSharedAsset:(NSURL *)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(_Bool)arg3 shouldExtendTimer:(_Bool)arg4 reply:(void (^)(_Bool, NSURL *, NSError *))arg5;
- (void)estimatedFileLengthOfVideo:(NSURL *)arg1 fallbackFilePath:(NSString *)arg2 exportPreset:(NSString *)arg3 exportProperties:(NSDictionary *)arg4 reply:(void (^)(long long))arg5;
- (void)asynchronousAdjustmentDataForAsset:(NSURL *)arg1 networkAccessAllowed:(_Bool)arg2 reply:(void (^)(NSString *, NSString *, NSString *, long long, _Bool, PLXPCFileDescriptor *, PLXPCFileDescriptor *, NSError *))arg3;
- (void)getSandboxExtensionForFileSystemBookmark:(NSURL *)arg1 reply:(void (^)(_Bool, NSURL *, NSString *, NSError *))arg2;
- (void)getSandboxExtensionsForAssetWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)imageDataForAssetWithObjectURI:(NSURL *)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 reply:(void (^)(PLXPCGenericObject *, NSNumber *, long long, _Bool, NSURL *, NSString *, NSString *, long long, NSString *, NSString *, NSError *))arg7;
- (void)fileDescriptorForPersistentURL:(NSURL *)arg1 withAdjustments:(_Bool)arg2 reply:(void (^)(_Bool, PLXPCFileDescriptor *, NSString *, NSError *))arg3;
- (void)sandboxExtensionURLForPersistentURL:(NSURL *)arg1 withAdjustments:(_Bool)arg2 reply:(void (^)(_Bool, NSURL *, NSData *, NSError *))arg3;
- (void)filePathForPersistentURL:(NSURL *)arg1 withAdjustments:(_Bool)arg2 reply:(void (^)(_Bool, NSURL *, NSError *))arg3;
- (void)addAssetWithURL:(NSURL *)arg1 toAlbum:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)addAssetGroupWithName:(NSString *)arg1 reply:(void (^)(_Bool, NSURL *))arg2;
@end

