//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDFastSyncGroupSessionParticipant, NSString;

@interface MRDFastSyncGroupSession : NSObject
{
    MISSING_TYPE *executionQueue;	// 8 = 0x8
    MISSING_TYPE *notificationQueue;	// 16 = 0x10
    MISSING_TYPE *shouldHideLeader;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_joinTimings;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_sessionTimings;	// 40 = 0x28
    MISSING_TYPE *_state;	// 48 = 0x30
    MISSING_TYPE *leaderParticipant;	// 56 = 0x38
    MISSING_TYPE *delegate;	// 64 = 0x40
    MISSING_TYPE *isLeader;	// 72 = 0x48
    MISSING_TYPE *identifier;	// 80 = 0x50
    MISSING_TYPE *localParticipantIdentifier;	// 96 = 0x60
    MISSING_TYPE *leaderParticipantIdentifier;	// 112 = 0x70
    MISSING_TYPE *localFastSyncIdentifier;	// 128 = 0x80
    MISSING_TYPE *leaderFastSyncIdentifier;	// 144 = 0x90
    MISSING_TYPE *localHandle;	// 160 = 0xa0
    MISSING_TYPE *leaderHandle;	// 176 = 0xb0
    MISSING_TYPE *participantHandleToMediaRemoteIdentifierMap;	// 192 = 0xc0
    MISSING_TYPE *participantIdentityMap;	// 200 = 0xc8
    MISSING_TYPE *identities;	// 208 = 0xd0
    MISSING_TYPE *guests;	// 216 = 0xd8
    MISSING_TYPE *pendingParticipants;	// 224 = 0xe0
    MISSING_TYPE *connectionManager;	// 232 = 0xe8
    MISSING_TYPE *localIdentity;	// 240 = 0xf0
    MISSING_TYPE *prewarmedParticipantIdentifiers;	// 248 = 0xf8
    MISSING_TYPE *presenceTask;	// 256 = 0x100
    MISSING_TYPE *joinProviderTask;	// 264 = 0x108
    MISSING_TYPE *observeSessionTask;	// 272 = 0x110
    MISSING_TYPE *leaderDiscoveryTimer;	// 280 = 0x118
    MISSING_TYPE *expectedRealtimeParticipants;	// 288 = 0x120
    MISSING_TYPE *isLowPowerMode;	// 296 = 0x128
    MISSING_TYPE *lowPowerCompletion;	// 304 = 0x130
    MISSING_TYPE *hasEncounteredLowPowerError;	// 320 = 0x140
    MISSING_TYPE *removedParticipantIdentityIdentifiers;	// 328 = 0x148
}

+ (id)stateToString:(long long)arg1;	// IMP=0x00200000001f75a0
+ (id)joinSessionWithNearbyGroup:(id)arg1 asUser:(id)arg2 hostSigningKey:(id)arg3 delegate:(id)arg4;	// IMP=0x00100000001f74b0
+ (id)createSessionWithNearbyGroup:(id)arg1 asUser:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000001f74a0
- (void).cxx_destruct;	// IMP=0x00400000001f7cc0
- (id)init;	// IMP=0x00100000001f82e0
- (void)sendRemoteControlMessage:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f81f0
- (void)exitLowPowerModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f8140
- (void)enterLowPowerModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fced0
- (void)remoteRemoveAllParticipants;	// IMP=0x00100000001f8130
- (void)remoteRemoveParticipantWithIdentifier:(id)arg1;	// IMP=0x00100000001f8120
- (void)remoteRejectPendingParticipant:(id)arg1;	// IMP=0x00100000001f8110
- (void)remoteApprovePendingParticipant:(id)arg1;	// IMP=0x00100000001f8100
- (void)removePendingParticipant:(id)arg1;	// IMP=0x00100000001f80f0
- (void)addPendingParticipant:(id)arg1;	// IMP=0x00100000001f80e0
- (void)markParticipantAsGuestIfNeeded:(id)arg1;	// IMP=0x00100000001f80d0
- (void)removeParticipantWithIdentifier:(id)arg1;	// IMP=0x00100000001f80c0
- (_Bool)shouldAutomaticallyApproveWithIdentity:(id)arg1;	// IMP=0x00100000001f8060
- (void)prepareForAddedMember;	// IMP=0x00100000001f7ef0
- (void)cancelPrewarmedIdentifier:(id)arg1 forIdentity:(id)arg2;	// IMP=0x00100000001f7ee0
- (id)prewarmForIdentity:(id)arg1;	// IMP=0x00100000001f7ec0
- (void)end;	// IMP=0x00100000001f7eb0
- (void)start;	// IMP=0x00100000001f7ea0
- (void)dealloc;	// IMP=0x00100000001f7ca0
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, retain) MRDFastSyncGroupSessionParticipant *leaderParticipant; // @synthesize leaderParticipant;
@property(nonatomic, readonly) MRDFastSyncGroupSessionParticipant *localParticipant;
@property(nonatomic, readonly) long long state;

@end

