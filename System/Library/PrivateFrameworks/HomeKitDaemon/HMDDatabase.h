//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMBLocalDatabase, NSHashTable, NSMapTable, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDDatabase : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _hasStarted;	// 12 = 0xc
    HMBLocalDatabase *_localDatabase;	// 16 = 0x10
    HMBCloudDatabase *_cloudDatabase;	// 24 = 0x18
    NSHashTable *_delegates;	// 32 = 0x20
    NSMapTable *_zoneDelegatesByLocalZone;	// 40 = 0x28
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000862cf2
+ (id)hindsightDatabase;	// IMP=0x0010000000862b8a
+ (id)cameraClipsDatabase;	// IMP=0x001000000086281f
+ (id)defaultDatabase;	// IMP=0x00100000008627bc
+ (void)registerQueries;	// IMP=0x0010000000862760
+ (id)defaultLocalDatabaseFileURL;	// IMP=0x00100000008626da
- (void).cxx_destruct;	// IMP=0x0000000000861cef
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(readonly) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
- (id)logIdentifier;	// IMP=0x0000000000861c11
- (void)cloudZone:(id)arg1 didEncounterZoneDisabledError:(id)arg2;	// IMP=0x0000000000861b32
- (void)cloudZone:(id)arg1 didChangeRebuildStatus:(id)arg2;	// IMP=0x0000000000861b2c
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;	// IMP=0x0000000000861a4d
- (void)cloudZone:(id)arg1 didUpdateParticipantWithClientIdentifier:(id)arg2;	// IMP=0x000000000086196e
- (void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2;	// IMP=0x00000000008618b6
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;	// IMP=0x00000000008617e0
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;	// IMP=0x000000000086175f
- (void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000008615da
- (void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;	// IMP=0x0000000000861455
- (id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;	// IMP=0x0000000000861268
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;	// IMP=0x00000000008610e3
- (void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;	// IMP=0x0000000000860fc1
- (id)mergedActionFutureForActionFutures:(id)arg1;	// IMP=0x0000000000860e71
- (void)performZoneDelegateCallback:(CDUnknownBlockType)arg1 forLocalZone:(id)arg2;	// IMP=0x0000000000860c7b
- (void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2;	// IMP=0x0000000000860b54
- (void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2;	// IMP=0x0000000000860a1b
@property(readonly) NSMapTable *zoneDelegatesByLocalZone; // @synthesize zoneDelegatesByLocalZone=_zoneDelegatesByLocalZone;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000860848
@property(readonly) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (id)removeZonesWithID:(id)arg1 isPrivate:(_Bool)arg2;	// IMP=0x0000000000860302
- (id)zonesWithID:(id)arg1 isPrivate:(_Bool)arg2 shouldCreate:(_Bool)arg3 configuration:(id)arg4 delegate:(id)arg5 error:(id *)arg6;	// IMP=0x000000000085fd7c
- (id)acceptInvitation:(id)arg1;	// IMP=0x000000000085fc25
- (id)removeLocalAndCloudDataForLocalZone:(id)arg1;	// IMP=0x000000000085fa64
- (id)removeSharedZonesWithName:(id)arg1;	// IMP=0x000000000085f814
- (id)removePrivateZonesWithName:(id)arg1;	// IMP=0x000000000085f6b4
- (id)synchronizeSharedZones;	// IMP=0x000000000085f582
- (id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000085f3db
- (id)existingSharedZoneIDWithName:(id)arg1;	// IMP=0x000000000085f0ec
- (id)privateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000085ef32
- (id)existingPrivateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000085ed7b
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x000000000085ec24
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x000000000085eacd
- (void)start;	// IMP=0x000000000085e8d7
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000085e843
- (void)addDelegate:(id)arg1;	// IMP=0x000000000085e7af
- (void)dealloc;	// IMP=0x000000000085e6b0
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x000000000085e554
- (id)initWithFileURL:(id)arg1 cloudConfiguration:(id)arg2;	// IMP=0x000000000085e227

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

