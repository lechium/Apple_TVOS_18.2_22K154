//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSFirewall, IDSService, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDGroupSessionPushMessenger : NSObject
{
    IDSService *_service;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _messageHandler;	// 32 = 0x20
    CDUnknownBlockType _errorHandler;	// 40 = 0x28
    IDSFirewall *_firewall;	// 48 = 0x30
    NSArray *_allowedDestinations;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000165db2
@property(retain, nonatomic) NSArray *allowedDestinations; // @synthesize allowedDestinations=_allowedDestinations;
@property(retain, nonatomic) IDSFirewall *firewall; // @synthesize firewall=_firewall;
@property(readonly, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(readonly, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)_updateAllowedDestinations:(id)arg1;	// IMP=0x0010000000165a72
- (void)updateAllowedDestinations:(id)arg1;	// IMP=0x001000000016599d
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000165859
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000016572d
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x00100000001654e3
- (id)initWithService:(id)arg1 handle:(id)arg2 queue:(id)arg3 messageHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001651f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

