//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class HMDCoreData, HMDCoreDataCloudTransformChangeSet, NSString, NSUUID;

@interface NSManagedObjectContext (HMDCoreDataInternal)
- (void)setHmd_coreData:(id)arg1;	// IMP=0x003000000068bc8b
@property(readonly, nonatomic) __weak HMDCoreData *hmd_coreData;
- (void)setHmd_homeManagerApplicationDataChanged:(_Bool)arg1;	// IMP=0x00300000007a9c5c
@property(readonly, nonatomic) HMDCoreDataCloudTransformChangeSet *hmd_currentChangeSet;
- (void)setHmd_currentChangeSet:(id)arg1;	// IMP=0x00300000007a9b61
@property(readonly, nonatomic) _Bool hmd_homeManagerApplicationDataChanged;
- (void)setHmd_fakeRecordsEnabled:(_Bool)arg1;	// IMP=0x00300000007a9a5c
@property(readonly, nonatomic) _Bool hmd_fakeRecordsEnabled;
@property(retain, nonatomic) NSManagedObjectContext *hmd_homeManagerContext;
- (void)setHmd_workingStoreIdentifier:(id)arg1;	// IMP=0x00300000007a9850
@property(readonly, nonatomic) NSString *hmd_workingStoreIdentifier;
- (void)setHmd_cloudSharedStoreIdentifier:(id)arg1;	// IMP=0x00300000007a9755
@property(readonly, nonatomic) NSString *hmd_cloudSharedStoreIdentifier;
- (void)setHmd_cloudPrivateStoreIdentifier:(id)arg1;	// IMP=0x00300000007a965a
@property(readonly, nonatomic) NSString *hmd_cloudPrivateStoreIdentifier;
- (void)hmd_logPendingChangesWithReason:(id)arg1;	// IMP=0x00300000009ec1b4
- (id)hmd_fetchExistingObjectWithID:(id)arg1 propertiesToFetch:(id)arg2;	// IMP=0x00300000009ec034
- (id)hmd_fetchExistingObjectWithID:(id)arg1 propertiesToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x00300000009ebec0
- (_Bool)hmd_saveWithTransactionAuthor:(unsigned long long)arg1 clientIdentifier:(id)arg2 allowQoSEscalation:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00300000009eb762
- (_Bool)hmd_saveWithTransactionAuthor:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00300000009eb748
- (void)hmd_assertIsExecuting;	// IMP=0x00300000009eb736
@property(readonly, nonatomic) unsigned long long hmd_transactionAuthor;
@property(readonly, copy, nonatomic) NSUUID *hmd_homeUUID;
@end

