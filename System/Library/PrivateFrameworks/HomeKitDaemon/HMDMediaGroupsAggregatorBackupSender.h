//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMDMediaGroupsAggregateBackupMessageTimerProvider, HMDMediaGroupsAggregatorBackupSenderDataSource;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregatorBackupSender : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_backupTimers;	// 16 = 0x10
    id <HMDMediaGroupsAggregatorBackupSenderDataSource> _dataSource;	// 24 = 0x18
    id <HMDMediaGroupsAggregateBackupMessageTimerProvider> _backupTimerProvider;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000302748
- (void).cxx_destruct;	// IMP=0x0000000000302549
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregateBackupMessageTimerProvider> backupTimerProvider; // @synthesize backupTimerProvider=_backupTimerProvider;
@property __weak id <HMDMediaGroupsAggregatorBackupSenderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000302489
- (id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000030243c
- (void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)arg1;	// IMP=0x000000000030226e
- (void)markAttemptForParticipantAccessoryUUID:(id)arg1 withMessageIdentifier:(id)arg2;	// IMP=0x000000000030210a
- (void)startBackupTimerWithParticipantAccessoryUUID:(id)arg1 dueToFailedMessageIdentifier:(id)arg2;	// IMP=0x000000000030205b
- (void)removeBackupTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000301fe5
- (id)backupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000301f5c
- (void)setBackUpTimer:(id)arg1;	// IMP=0x0000000000301eba
- (void)createNewBackupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000301d44
- (id)receiverForParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000301be3
- (id)routerParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000301a82
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000301921
- (void)locallyRouteGroupsBackupDataMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x000000000030177c
- (void)routeBackedUpGroupsMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x000000000030146b
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003013f5
- (void)clearCachedData;	// IMP=0x0000000000301387
- (void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)arg1 backupGroups:(id)arg2;	// IMP=0x0000000000301109
- (void)_sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000300f08
- (void)sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000300eb3
- (id)initWithIdentifier:(id)arg1 backupTimerProvider:(id)arg2;	// IMP=0x0000000000300da7
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000300d92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

