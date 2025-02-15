//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudChangeTree, HMDCloudGroup, HMDCloudManagerMetricsDispatcher, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDCloudGroupChange : HMFObject
{
    _Bool _temporaryCache;	// 8 = 0x8
    _Bool _decryptionFailed;	// 9 = 0x9
    _Bool _encryptionFailed;	// 10 = 0xa
    _Bool _controllerIdentifierChanged;	// 11 = 0xb
    HMDCloudGroup *_cloudGroup;	// 16 = 0x10
    HMDCloudChangeTree *_cloudChangeTree;	// 24 = 0x18
    NSMutableArray *_cloudChanges;	// 32 = 0x20
    NSMutableArray *_processingCloudChanges;	// 40 = 0x28
    NSMutableArray *_processedCloudChanges;	// 48 = 0x30
    HMDCloudManagerMetricsDispatcher *_metricsDispatcher;	// 56 = 0x38
}

+ (id)shortDescription;	// IMP=0x006000000033e965
- (void).cxx_destruct;	// IMP=0x000000000033d631
@property(readonly) HMDCloudManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property(retain, nonatomic) NSMutableArray *processedCloudChanges; // @synthesize processedCloudChanges=_processedCloudChanges;
@property(retain, nonatomic) NSMutableArray *processingCloudChanges; // @synthesize processingCloudChanges=_processingCloudChanges;
@property(retain, nonatomic) NSMutableArray *cloudChanges; // @synthesize cloudChanges=_cloudChanges;
@property(retain, nonatomic) HMDCloudChangeTree *cloudChangeTree; // @synthesize cloudChangeTree=_cloudChangeTree;
@property(readonly, nonatomic) __weak HMDCloudGroup *cloudGroup; // @synthesize cloudGroup=_cloudGroup;
@property(nonatomic) _Bool controllerIdentifierChanged; // @synthesize controllerIdentifierChanged=_controllerIdentifierChanged;
@property(nonatomic) _Bool encryptionFailed; // @synthesize encryptionFailed=_encryptionFailed;
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
@property(readonly, nonatomic, getter=isTemporaryCache) _Bool temporaryCache; // @synthesize temporaryCache=_temporaryCache;
@property(readonly, nonatomic) NSArray *objectChanges;
- (_Bool)isRootRecord:(id)arg1;	// IMP=0x000000000033d400
- (_Bool)isRootRecordName:(id)arg1;	// IMP=0x000000000033d392
- (void)flushAllChangesToCache;	// IMP=0x000000000033d09d
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;	// IMP=0x000000000033cea9
- (void)resetRecordWithRecordID:(id)arg1;	// IMP=0x000000000033cca4
- (void)setSaveAsProcessedWithRecord:(id)arg1;	// IMP=0x000000000033ca4f
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;	// IMP=0x000000000033c627
- (void)removeChangeWithObjectID:(id)arg1;	// IMP=0x000000000033c4e4
- (void)_removeChange:(id)arg1;	// IMP=0x000000000033bf4b
- (void)addChange:(id)arg1 setAsProcessing:(_Bool)arg2;	// IMP=0x000000000033bd9b
- (void)collectRecordsForBatch;	// IMP=0x000000000033b9ca
- (void)addRootRecordChange;	// IMP=0x000000000033b7cd
- (id)rootRecordModelObject;	// IMP=0x000000000033b717
@property(readonly, nonatomic, getter=isRootRecordRequired) _Bool rootRecordRequired;
- (void)setAllChangedAsProcessed;	// IMP=0x000000000033b3d2
- (void)setAsProcessedChange:(id)arg1;	// IMP=0x000000000033b26d
- (_Bool)moreChangesToProcess;	// IMP=0x000000000033b226
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;	// IMP=0x000000000033b149
- (void)loadCloudRecordsFromCache:(CDUnknownBlockType)arg1;	// IMP=0x000000000033afa3
- (void)_initializeCloudChanges;	// IMP=0x000000000033aeda
- (void)loadCloudChangeTreeFromCache:(CDUnknownBlockType)arg1;	// IMP=0x000000000033aca5
- (void)_loadTreeWithRecordMapping:(id)arg1;	// IMP=0x000000000033ac3c
- (void)addChangeWithDeletedRecordID:(id)arg1;	// IMP=0x000000000033a951
- (void)_addChangeWithDeletedCloudRecord:(id)arg1;	// IMP=0x000000000033a59f
- (void)addChangeWithRecord:(id)arg1;	// IMP=0x0000000000339a06
- (void)addChangeWithObjectChange:(id)arg1;	// IMP=0x00000000003397f2
- (id)cloudRecordWithName:(id)arg1;	// IMP=0x0000000000339644
- (id)changeWithRecordName:(id)arg1;	// IMP=0x00000000003394d1
@property(readonly) _Bool doRecordsExistInCache;
- (id)cachedCloudRecordWithObjectID:(id)arg1;	// IMP=0x0000000000339413
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000339388
- (id)cloudRecordWithObjectID:(id)arg1;	// IMP=0x00000000003391fb
- (id)changeWithObjectID:(id)arg1;	// IMP=0x0000000000339088
@property(readonly, nonatomic) _Bool hasValidChanges;
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
- (id)description;	// IMP=0x0000000000338d34
- (id)shortDescription;	// IMP=0x0000000000338c73
- (id)initWithGroup:(id)arg1 temporaryCache:(_Bool)arg2 metricsDispatcher:(id)arg3;	// IMP=0x00000000003389a1
- (id)initWithGroup:(id)arg1 temporaryCache:(_Bool)arg2;	// IMP=0x00000000003388f3
- (id)init;	// IMP=0x000000000033884b

@end

