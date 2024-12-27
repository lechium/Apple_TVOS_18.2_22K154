//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSProgress, NSSecurityScopedURLWrapper, NSSet, NSString, NSURL, PLDelayedSaveActionsDetail, PLInterLibraryTransferOptions, PLPhotoLibraryOptions, PLXPCDictionary;

@protocol PLAssetsdLibraryServiceProtocol <NSObject>
- (void)searchDonationProgressForTaskIDs:(NSArray *)arg1 reply:(void (^)(_Bool, long long, long long, NSError *))arg2;
- (void)proxyLockFileWithDatabasePath:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (NSProgress *)resetSocialGroupsWithReply:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)resetPersonsWithReply:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)transferPersonsWithUuids:(NSSet *)arg1 fromLibraryURL:(NSSecurityScopedURLWrapper *)arg2 transferOptions:(PLInterLibraryTransferOptions *)arg3 reply:(void (^)(NSError *))arg4;
- (NSProgress *)transferAssetsWithUuids:(NSSet *)arg1 fromLibraryURL:(NSSecurityScopedURLWrapper *)arg2 transferOptions:(PLInterLibraryTransferOptions *)arg3 reply:(void (^)(NSError *))arg4;
- (void)publishRemoteChangeEvent:(PLXPCDictionary *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 reply:(void (^)(NSError *))arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)updateThumbnailsForPhotos:(NSArray *)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 reply:(void (^)(void))arg4;
- (void)resetFaceAnalysisWithResetLevel:(long long)arg1 withReply:(void (^)(_Bool, NSError *))arg2;
- (void)repairSingletonObjectsWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)recoverFromCrashIfNeeded;
- (NSProgress *)importFileSystemAssetsWithReason:(NSString *)arg1 force:(_Bool)arg2 reply:(void (^)(void))arg3;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(void (^)(NSXPCListenerEndpoint *))arg1;
- (NSProgress *)postOpenProgressWithReply:(void (^)(NSError *))arg1;
- (NSProgress *)upgradePhotoLibraryDatabaseWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)openPhotoLibraryDatabaseWithOptions:(PLPhotoLibraryOptions *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)openApplicationOwnedFoldersWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)validateOrRebuildPhotoLibraryDatabaseWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)isLibraryReadyForImportWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)getCurrentModelVersionWithReply:(void (^)(unsigned long long))arg1;
- (void)launchAssetsd;
@end

