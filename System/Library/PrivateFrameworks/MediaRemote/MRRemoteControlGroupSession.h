//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRGroupSessionToken, MRGroupSessionXPCConnection, NSData, NSHashTable, NSMapTable, NSSet, NSString;
@protocol MRGroupSessionDelegate, MRGroupSessionParticipant, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRRemoteControlGroupSession : NSObject
{
    _Bool _placeholder;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSSet *_participants;	// 32 = 0x20
    NSMapTable *_participantMap;	// 40 = 0x28
    NSSet *_pendingParticipants;	// 48 = 0x30
    NSMapTable *_pendingParticipantMap;	// 56 = 0x38
    NSSet *_members;	// 64 = 0x40
    NSMapTable *_memberMap;	// 72 = 0x48
    NSHashTable *_optimisticApprovedPendingParticipants;	// 80 = 0x50
    NSHashTable *_optimisticDeniedPendingParticipants;	// 88 = 0x58
    NSHashTable *_optimisticRemovedParticipants;	// 96 = 0x60
    id <MRGroupSessionParticipant> _host;	// 104 = 0x68
    id <MRGroupSessionParticipant> _localParticipant;	// 112 = 0x70
    MRGroupSessionToken *_joinToken;	// 120 = 0x78
    NSData *_synchronizedMetadata;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 144 = 0x90
    MRGroupSessionXPCConnection *_connection;	// 152 = 0x98
    id <MRGroupSessionDelegate> _delegate;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000002a42e3
@property(nonatomic) __weak id <MRGroupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MRGroupSessionXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSData *synchronizedMetadata; // @synthesize synchronizedMetadata=_synchronizedMetadata;
@property(retain, nonatomic) MRGroupSessionToken *joinToken; // @synthesize joinToken=_joinToken;
@property(retain, nonatomic) id <MRGroupSessionParticipant> localParticipant; // @synthesize localParticipant=_localParticipant;
@property(retain, nonatomic) id <MRGroupSessionParticipant> host; // @synthesize host=_host;
@property(retain, nonatomic) NSHashTable *optimisticRemovedParticipants; // @synthesize optimisticRemovedParticipants=_optimisticRemovedParticipants;
@property(retain, nonatomic) NSHashTable *optimisticDeniedPendingParticipants; // @synthesize optimisticDeniedPendingParticipants=_optimisticDeniedPendingParticipants;
@property(retain, nonatomic) NSHashTable *optimisticApprovedPendingParticipants; // @synthesize optimisticApprovedPendingParticipants=_optimisticApprovedPendingParticipants;
@property(retain, nonatomic) NSMapTable *memberMap; // @synthesize memberMap=_memberMap;
@property(retain, nonatomic) NSSet *members; // @synthesize members=_members;
@property(retain, nonatomic) NSMapTable *pendingParticipantMap; // @synthesize pendingParticipantMap=_pendingParticipantMap;
@property(retain, nonatomic) NSSet *pendingParticipants; // @synthesize pendingParticipants=_pendingParticipants;
@property(retain, nonatomic) NSMapTable *participantMap; // @synthesize participantMap=_participantMap;
@property(retain, nonatomic) NSSet *participants; // @synthesize participants=_participants;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)session:(id)arg1 didConnectWithInitialState:(id)arg2;	// IMP=0x00000000002a3fd8
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000000002a3ce5
- (void)session:(id)arg1 didUpdateSynchronizedMetadata:(id)arg2;	// IMP=0x00000000002a3a83
- (void)session:(id)arg1 didUpdateMembers:(id)arg2;	// IMP=0x00000000002a365b
- (void)session:(id)arg1 didUpdatePendingParticipants:(id)arg2;	// IMP=0x00000000002a2d27
- (void)session:(id)arg1 didUpdateParticipants:(id)arg2;	// IMP=0x00000000002a2295
- (void)session:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x00000000002a206e
- (void)updateParticipantsForOptimisticStateChange;	// IMP=0x00000000002a1839
- (void)parseInitialState:(id)arg1;	// IMP=0x00000000002a0e20
- (void)parseParticipants:(id)arg1 local:(id *)arg2 host:(id *)arg3 parsed:(id *)arg4;	// IMP=0x00000000002a0bd2
- (void)removeParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a056d
- (void)removeAllParticipantsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a03c1
- (id)assertSessionManagementScreenVisible;	// IMP=0x000000000029fd7b
- (void)denyPendingParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000029f6e2
- (void)approvePendingParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000029ef86
- (id)pendingParticipantForIdentifier:(id)arg1;	// IMP=0x000000000029edd6
- (id)participantForIdentifier:(id)arg1;	// IMP=0x000000000029ec26
- (id)memberForIdentifier:(id)arg1;	// IMP=0x000000000029ea76
@property(readonly, nonatomic) unsigned char routeType;
@property(readonly, nonatomic) NSString *localizedSessionName;
@property(readonly, nonatomic) _Bool canHandleJoinRequests;
@property(readonly, nonatomic) _Bool canManageParticipants;
@property(readonly, nonatomic) _Bool isLocalSession;
- (void)notifyDelegateOfInvalidation:(id)arg1;	// IMP=0x000000000029dd96
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029db32
- (void)initializeConnection;	// IMP=0x000000000029d714
- (void)dealloc;	// IMP=0x000000000029d663
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000029d3d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

