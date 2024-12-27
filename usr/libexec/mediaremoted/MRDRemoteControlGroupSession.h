//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDFastSyncGroupSession, MRGroupSessionToken, MRUserIdentity, MSVTimer, NSArray, NSError, NSHashTable, NSMapTable, NSString, _TtC12mediaremoted14MRDNearbyGroup, _TtC12mediaremoted19MRDNearbyInvitation;
@protocol MRDGroupSessionParticipant, OS_dispatch_queue;

@interface MRDRemoteControlGroupSession : NSObject
{
    _Bool _isHosted;	// 8 = 0x8
    _Bool _isLowPowerMode;	// 9 = 0x9
    _Bool _isUpdatingLowPowerMode;	// 10 = 0xa
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    long long _state;	// 16 = 0x10
    NSArray *_participants;	// 24 = 0x18
    NSArray *_members;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    MRUserIdentity *_localIdentity;	// 48 = 0x30
    NSMapTable *_pendingParticipantsMap;	// 56 = 0x38
    NSArray *_remotePendingParticipants;	// 64 = 0x40
    NSMapTable *_pendingJoinCompletions;	// 72 = 0x48
    id <MRDGroupSessionParticipant> _leader;	// 80 = 0x50
    MRDFastSyncGroupSession *_fastSyncSession;	// 88 = 0x58
    _TtC12mediaremoted19MRDNearbyInvitation *_nearbyInvitation;	// 96 = 0x60
    _TtC12mediaremoted14MRDNearbyGroup *_nearbyGroup;	// 104 = 0x68
    MRGroupSessionToken *_joinToken;	// 112 = 0x70
    NSString *_sharedSecret;	// 120 = 0x78
    MSVTimer *_lowPowerDeferralTimer;	// 128 = 0x80
    NSError *_lowPowerError;	// 136 = 0x88
    NSHashTable *_observers;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 152 = 0x98
}

+ (id)remoteSessionWithNearbyGroup:(id)arg1 identity:(id)arg2 hostSigningKey:(id)arg3 joinToken:(id)arg4;	// IMP=0x002000000019bcc5
+ (id)hostedSessionWithNearbyGroup:(id)arg1 nearbyInvitation:(id)arg2 identity:(id)arg3;	// IMP=0x001000000019bc32
- (void).cxx_destruct;	// IMP=0x00200000001a08de
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSError *lowPowerError; // @synthesize lowPowerError=_lowPowerError;
@property(retain, nonatomic) MSVTimer *lowPowerDeferralTimer; // @synthesize lowPowerDeferralTimer=_lowPowerDeferralTimer;
@property(nonatomic) _Bool isUpdatingLowPowerMode; // @synthesize isUpdatingLowPowerMode=_isUpdatingLowPowerMode;
@property(nonatomic) _Bool isLowPowerMode; // @synthesize isLowPowerMode=_isLowPowerMode;
@property(retain, nonatomic) NSString *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(retain, nonatomic) MRGroupSessionToken *joinToken; // @synthesize joinToken=_joinToken;
@property(retain, nonatomic) _TtC12mediaremoted14MRDNearbyGroup *nearbyGroup; // @synthesize nearbyGroup=_nearbyGroup;
@property(retain, nonatomic) _TtC12mediaremoted19MRDNearbyInvitation *nearbyInvitation; // @synthesize nearbyInvitation=_nearbyInvitation;
@property(readonly, nonatomic) MRDFastSyncGroupSession *fastSyncSession; // @synthesize fastSyncSession=_fastSyncSession;
@property(retain, nonatomic) id <MRDGroupSessionParticipant> leader; // @synthesize leader=_leader;
@property(retain, nonatomic) NSMapTable *pendingJoinCompletions; // @synthesize pendingJoinCompletions=_pendingJoinCompletions;
@property(retain, nonatomic) NSArray *remotePendingParticipants; // @synthesize remotePendingParticipants=_remotePendingParticipants;
@property(retain, nonatomic) NSMapTable *pendingParticipantsMap; // @synthesize pendingParticipantsMap=_pendingParticipantsMap;
@property(nonatomic) _Bool isHosted; // @synthesize isHosted=_isHosted;
@property(readonly, nonatomic) MRUserIdentity *localIdentity; // @synthesize localIdentity=_localIdentity;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)trackJoinResponseApproved:(_Bool)arg1;	// IMP=0x00100000001a0610
- (void)session:(id)arg1 didReceiveRemoteRemoveAllRequestFromParticipant:(id)arg2;	// IMP=0x00100000001a05e2
- (void)session:(id)arg1 didReceiveRemoteRemoveRequestForParticipant:(id)arg2 from:(id)arg3;	// IMP=0x00100000001a053c
- (void)session:(id)arg1 didReceiveRemoteRejectionForPendingParticipant:(id)arg2 from:(id)arg3;	// IMP=0x00100000001a04ed
- (void)session:(id)arg1 didReceiveRemoteApprovalForPendingParticipant:(id)arg2 from:(id)arg3;	// IMP=0x00100000001a049e
- (void)session:(id)arg1 didReceiveRemoteControlMessage:(id)arg2 from:(id)arg3;	// IMP=0x00100000001a01e7
- (void)sessionDidCompleteIdentityShare:(id)arg1;	// IMP=0x00100000001a0151
- (void)session:(id)arg1 didUpdatePendingParticipants:(id)arg2;	// IMP=0x00100000001a00fe
- (void)session:(id)arg1 didUpdateMembers:(id)arg2;	// IMP=0x00100000001a00ab
- (void)session:(id)arg1 didUpdateParticipants:(id)arg2;	// IMP=0x00100000001a0058
- (void)session:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x001000000019ffce
- (void)clearPendingCompletions;	// IMP=0x001000000019fde2
- (void)reevaluateLowPowerMode;	// IMP=0x001000000019f9c0
- (void)handleDisplayMonitorChangeNotification:(id)arg1;	// IMP=0x001000000019f98e
- (void)transitionToState:(long long)arg1;	// IMP=0x001000000019f887
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSArray *remoteParticipants;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) id <MRDGroupSessionParticipant> localParticipant;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *pendingParticipants;
- (void)revokeAutoApprovalForAllParticipants;	// IMP=0x001000000019e787
- (void)revokeAutoApprovalForParticipant:(id)arg1;	// IMP=0x001000000019e595
- (void)removeAllParticipants;	// IMP=0x001000000019e169
- (void)removeParticipant:(id)arg1;	// IMP=0x001000000019e0df
- (void)denyPendingParticipant:(id)arg1;	// IMP=0x001000000019da87
- (void)approvePendingParticipant:(id)arg1;	// IMP=0x001000000019d44e
- (void)handleApprovedJoinRequest:(id)arg1 isGuest:(_Bool)arg2;	// IMP=0x001000000019d234
- (id)handleJoinRequest:(id)arg1 isGuest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000019cd2b
- (void)removeObserver:(id)arg1;	// IMP=0x001000000019ccb3
- (void)addObserver:(id)arg1;	// IMP=0x001000000019cc3b
- (void)sendMessageData:(id)arg1 toParticipants:(id)arg2;	// IMP=0x001000000019ca97
- (void)finish;	// IMP=0x001000000019c974
- (void)start;	// IMP=0x001000000019c886
@property(readonly, nonatomic) unsigned char routeType;
@property(readonly, nonatomic) NSString *localizedSessionName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019c6a3
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000019c326
- (void)_initializeWithIdentity:(id)arg1 nearbyGroup:(id)arg2 isHosted:(_Bool)arg3 hostSigningKey:(id)arg4;	// IMP=0x001000000019c110
- (id)initWithNearbyGroup:(id)arg1 identity:(id)arg2 hostSigningKey:(id)arg3 joinToken:(id)arg4;	// IMP=0x001000000019bf9c
- (id)initWithNearbyGroup:(id)arg1 nearbyInvitation:(id)arg2 identity:(id)arg3 hostSigningKey:(id)arg4;	// IMP=0x001000000019bd71

// Remaining properties
@property(readonly) Class superclass;

@end

