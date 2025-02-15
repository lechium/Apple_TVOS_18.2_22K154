//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, SDAutoUnlockAKSSession, SDUnlockTransport;
@protocol OS_dispatch_queue, OS_dispatch_source, SDAutoUnlockSessionDelegate;

@interface SDAutoUnlockPairingSession : NSObject
{
    _Bool _useAttestedProtocol;	// 8 = 0x8
    id <SDAutoUnlockSessionDelegate> _delegate;	// 16 = 0x10
    NSUUID *_sessionID;	// 24 = 0x18
    NSString *_deviceID;	// 32 = 0x20
    long long _pairingAKSSession;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 48 = 0x30
    SDAutoUnlockAKSSession *_aksSession;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_responseTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000e3d2
@property(retain) NSObject<OS_dispatch_source> *responseTimer; // @synthesize responseTimer=_responseTimer;
@property(retain, nonatomic) SDAutoUnlockAKSSession *aksSession; // @synthesize aksSession=_aksSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(readonly, nonatomic) _Bool useAttestedProtocol; // @synthesize useAttestedProtocol=_useAttestedProtocol;
@property long long pairingAKSSession; // @synthesize pairingAKSSession=_pairingAKSSession;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <SDAutoUnlockSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x001000000000defa
- (void)handleTimerFired;	// IMP=0x001000000000ddca
- (void)invalidateResponseTimer;	// IMP=0x001000000000dcf4
- (void)restartResponseTimer:(unsigned long long)arg1;	// IMP=0x001000000000daf6
- (id)dataFromUUID:(id)arg1;	// IMP=0x001000000000da6d
- (id)wrapPayload:(id)arg1 withType:(unsigned short)arg2 useProxy:(_Bool)arg3 senderID:(id)arg4;	// IMP=0x001000000000d88f
- (id)wrapPayload:(id)arg1 withType:(unsigned short)arg2;	// IMP=0x001000000000d877
- (void)handleMessage:(id)arg1 fromDeviceID:(id)arg2 type:(unsigned short)arg3;	// IMP=0x001000000000d871
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x001000000000d86b
- (void)start;	// IMP=0x001000000000d865
@property(readonly, nonatomic) SDUnlockTransport *transport;
- (void)invalidate;	// IMP=0x001000000000d669
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000000d53f
- (id)init;	// IMP=0x001000000000d4e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

