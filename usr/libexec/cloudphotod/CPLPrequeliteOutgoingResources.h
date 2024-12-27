//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteOutgoingResources
{
    _Bool _countOfOriginalsIsCached;	// 8 = 0x8
    unsigned long long _countOfOriginalImages;	// 16 = 0x10
    unsigned long long _countOfOriginalVideos;	// 24 = 0x18
    unsigned long long _countOfOriginalOthers;	// 32 = 0x20
    unsigned long long _sizeOfResourcesToUpload;	// 40 = 0x28
    unsigned long long _sizeOfOriginalResourcesToUpload;	// 48 = 0x30
    _Bool _sizeOfResourcesToUploadHasBeenCached;	// 56 = 0x38
    _Bool _storageHasChangedDuringThisTransaction;	// 57 = 0x39
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 discardedResources:(id *)arg4 error:(id *)arg5;	// IMP=0x00200000001968b5
- (void)writeTransactionDidFail;	// IMP=0x0010000000196861
- (id)statusPerScopeIndex;	// IMP=0x00100000001967dd
- (id)status;	// IMP=0x0010000000196331
- (id)recordsDesignation;	// IMP=0x0010000000196324
@property(readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
- (void)_cacheUploadSizesIfNecessary;	// IMP=0x0010000000196157
- (unsigned long long)countOfOriginalOthers;	// IMP=0x001000000019612f
- (unsigned long long)countOfOriginalVideos;	// IMP=0x0010000000196107
- (unsigned long long)countOfOriginalImages;	// IMP=0x00100000001960df
- (void)_cacheCountOfOriginalsIfNecessary;	// IMP=0x0010000000195f5c
- (_Bool)shouldUploadResource:(id)arg1;	// IMP=0x0010000000195daa
- (id)resourcesToUploadForUploadIdentifier:(id)arg1;	// IMP=0x0010000000195c23
- (unsigned long long)availableResourceSizeForUploadIdentifier:(id)arg1;	// IMP=0x0010000000195b34
- (id)resourceTypesToUploadForUploadIdentifier:(id)arg1;	// IMP=0x0010000000195a0a
- (_Bool)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001958d6
- (_Bool)storeResourceToUpload:(id)arg1 withUploadIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000195419
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000019520c
- (_Bool)initializeStorage;	// IMP=0x00100000001950b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

