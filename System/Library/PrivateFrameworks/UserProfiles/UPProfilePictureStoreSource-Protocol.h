//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UPProfilePictureCacheSnapshot, UPProfilePictureRequest, UPProfilePictureResponse, UPPruneProfilePictureCacheRequest, UPPruneProfilePictureCacheResponse;
@protocol BSInvalidatable, UPProfilePictureStoreSourceObserver;

@protocol UPProfilePictureStoreSource
- (void)pruneProfilePictureCacheForRequest:(UPPruneProfilePictureCacheRequest *)arg1 completion:(void (^)(UPPruneProfilePictureCacheResponse *, NSError *))arg2;
- (void)fetchProfilePictureCacheSnapshotWithCompletion:(void (^)(UPProfilePictureCacheSnapshot *, NSError *))arg1;
- (void)fetchProfilePictureForRequest:(UPProfilePictureRequest *)arg1 completion:(void (^)(UPProfilePictureResponse *, NSError *))arg2;
- (UPPruneProfilePictureCacheResponse *)pruneProfilePictureCacheForRequest:(UPPruneProfilePictureCacheRequest *)arg1 error:(out id *)arg2;
- (UPProfilePictureCacheSnapshot *)profilePictureCacheSnapshotWithError:(out id *)arg1;
- (UPProfilePictureResponse *)cachedProfilePictureForRequest:(UPProfilePictureRequest *)arg1 error:(out id *)arg2;
- (id <BSInvalidatable>)addObserver:(id <UPProfilePictureStoreSourceObserver>)arg1;
@end

