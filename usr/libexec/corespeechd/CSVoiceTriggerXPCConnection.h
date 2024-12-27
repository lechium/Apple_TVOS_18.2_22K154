//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceTriggerXPCConnection : NSObject
{
    id <CSVoiceTriggerXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ff716
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleVoiceTriggerStatsFetchEvent:(id)arg1 client:(id)arg2;	// IMP=0x00100000000ff5bc
- (void)_handleServiceConnectionLostIfNeeded;	// IMP=0x00100000000ff5b6
- (void)_handleEnableVoiceTriggerWithSiriAssertionRequest:(id)arg1;	// IMP=0x00100000000ff4e2
- (void)_handleVoiceTriggeredSiriSessionCancelled;	// IMP=0x00100000000ff426
- (void)_handleRaiseToSpeakBypassRequest:(id)arg1;	// IMP=0x00100000000ff38b
- (void)_handlePhraseSpotterBypassRequest:(id)arg1;	// IMP=0x00100000000ff268
- (void)_handleVoiceTriggerXPCServiceMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000ff078
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000ff017
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x00100000000fee1c
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000fecb4
- (void)_handleClientEvent:(id)arg1;	// IMP=0x00100000000feb4e
- (void)activateConnection;	// IMP=0x00100000000fea9f
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000fe9d3

@end

