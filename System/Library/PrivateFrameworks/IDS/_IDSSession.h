//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface _IDSSession : NSObject
{
    id _delegateContext;	// 8 = 0x8
    id _boostContext;	// 16 = 0x10
    NSString *_uniqueID;	// 24 = 0x18
    NSString *_accountID;	// 32 = 0x20
    NSSet *_destinations;	// 40 = 0x28
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;	// 48 = 0x30
    CUTWeakReference *_delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    unsigned int _state;	// 72 = 0x48
    long long _transportType;	// 80 = 0x50
    unsigned long long _initialLinkType;	// 88 = 0x58
    int _socket;	// 96 = 0x60
    _Bool _isAudioEnabled;	// 100 = 0x64
    _Bool _isMuted;	// 101 = 0x65
    _Bool _isLegacy;	// 102 = 0x66
    long long _inviteTimeout;	// 104 = 0x68
    unsigned long long _connectionCountHint;	// 112 = 0x70
    _Bool _needsToWaitForPreConnectionData;	// 120 = 0x78
    _Bool _disallowCellularInterface;	// 121 = 0x79
    _Bool _disallowWifiInterface;	// 122 = 0x7a
    unsigned long long _preferredAddressFamily;	// 128 = 0x80
    _Bool _preferCellularForCallSetup;	// 136 = 0x88
    NSString *_clientUUID;	// 144 = 0x90
    _Bool _disableEncryption;	// 152 = 0x98
    _Bool _shouldUseSocketForTransport;	// 153 = 0x99
    _Bool _enableSingleChannelDirectMode;	// 154 = 0x9a
    _Bool _alwaysSkipSelf;	// 155 = 0x9b
    unsigned int _sessionEndedReason;	// 156 = 0x9c
    NSMutableDictionary *_preferences;	// 160 = 0xa0
    NSMutableDictionary *_sessionConfig;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000014616a
@property(readonly, nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x0000000000145ef8
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x0000000000145c1c
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x0000000000145760
- (void)session:(id)arg1 muted:(_Bool)arg2;	// IMP=0x0000000000145570
- (void)session:(id)arg1 audioEnabled:(_Bool)arg2;	// IMP=0x0000000000145380
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000144fe7
- (void)sessionStarted:(id)arg1;	// IMP=0x0000000000144d54
- (void)allocationDone:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x0000000000144ae5
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x0000000000144781
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000000014444f
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000000014411d
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x0000000000143d84
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x00000000001439c8
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000000014360c
- (_Bool)sendData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000143317
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;	// IMP=0x00000000001432ff
- (_Bool)shouldUseSocketForTransport;	// IMP=0x0000000000143243
@property(readonly, nonatomic) unsigned int sessionEndedReason;
@property(nonatomic) long long inviteTimeout;
- (id)getPreferences;	// IMP=0x0000000000142f5f
- (void)setPreferences:(id)arg1;	// IMP=0x0000000000142e3f
- (_Bool)getMuted;	// IMP=0x0000000000142da0
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000142cc5
- (_Bool)getAudioEnabled;	// IMP=0x0000000000142c26
- (void)setAudioEnabled:(_Bool)arg1;	// IMP=0x0000000000142b4b
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x00000000001427c3
- (void)sendSessionMessage:(id)arg1;	// IMP=0x00000000001426ca
- (void)endSessionWithData:(id)arg1;	// IMP=0x00000000001425d5
- (void)endSession;	// IMP=0x00000000001424f4
- (void)reconnectSession;	// IMP=0x0000000000142427
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x000000000014229b
- (void)declineInvitation;	// IMP=0x0000000000142160
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x0000000000141fd4
- (void)acceptInvitation;	// IMP=0x0000000000141e99
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x0000000000141d2e
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x0000000000141ba2
- (void)cancelInvitation;	// IMP=0x0000000000141a67
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00000000001418b2
- (void)sendInvitationWithOptions:(id)arg1;	// IMP=0x0000000000141736
- (void)sendAllocationRequest:(id)arg1;	// IMP=0x00000000001415ba
- (void)_cleanupSocketPairConnections;	// IMP=0x0000000000141588
- (void)_setupSocketPairToDaemon;	// IMP=0x0000000000140c31
- (void)_setupUnreliableSocketPairConnection;	// IMP=0x0000000000140a79
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) int socket;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000014064e
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001404cc
- (void)_broadcastNewSessionToDaemon;	// IMP=0x000000000013fecd
- (void)daemonDisconnected;	// IMP=0x000000000013fd67
- (void)dealloc;	// IMP=0x000000000013fbe1
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;	// IMP=0x000000000013fa18
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;	// IMP=0x000000000013f7b3
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;	// IMP=0x000000000013f543
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;	// IMP=0x000000000013eca6
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 connectionCountHint:(unsigned long long)arg4 needsToWaitForPreConnectionData:(_Bool)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7;	// IMP=0x000000000013e71e
- (id)daemonController;	// IMP=0x000000000013e705
- (id)daemonListener;	// IMP=0x000000000013e6ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

