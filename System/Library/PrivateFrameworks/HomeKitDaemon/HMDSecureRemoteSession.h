//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMDDevice, NSArray, NSMutableArray, NSObject, NSString;
@protocol HMDSecureRemoteSessionDataSource, HMFMessageTransportDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteSession : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_pendingMessages;	// 16 = 0x10
    NSMutableArray *_clientStreams;	// 24 = 0x18
    NSMutableArray *_serverStreams;	// 32 = 0x20
    HMDDevice *_device;	// 40 = 0x28
    id <HMDSecureRemoteSessionDataSource> _dataSource;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_clientQueue;	// 56 = 0x38
    HMDAccountRegistry *_accountRegistry;	// 64 = 0x40
    unsigned long long _maximumRemoteStreams;	// 72 = 0x48
    long long _state;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x001000000058f7f5
+ (_Bool)isSecureRemoteSessionMessage:(id)arg1;	// IMP=0x001000000058f76a
- (void).cxx_destruct;	// IMP=0x000000000058d7e9
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) id <HMDSecureRemoteSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000058d43a
- (id)logIdentifier;	// IMP=0x000000000058d3c0
- (id)dumpState;	// IMP=0x000000000058d2e4
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000058d0dd
- (void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;	// IMP=0x000000000058cec5
- (void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000058cde7
- (void)secureRemoteStreamIsIdle:(id)arg1;	// IMP=0x000000000058cd2f
- (void)_closeServerStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000058c6dd
- (void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000058c414
- (void)_closeClientStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000058bf7b
- (void)_openClientStreamWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000058b8ff
- (id)_serverStreamWithIdentifier:(id)arg1;	// IMP=0x000000000058b72c
- (id)_clientStreamForMessage:(id)arg1;	// IMP=0x000000000058b540
- (id)_clientStreamWithIdentiifer:(id)arg1;	// IMP=0x000000000058b36d
- (void)_handleStreamInvalidationMessage:(id)arg1;	// IMP=0x000000000058ae05
- (void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x000000000058aafb
- (void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x000000000058a79d
- (void)receivedSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;	// IMP=0x000000000058a64b
- (id)_dequeMessage;	// IMP=0x000000000058a460
- (void)_queueMessage:(id)arg1;	// IMP=0x0000000000589f21
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000589e02
- (void)_closeWithError:(id)arg1;	// IMP=0x00000000005896d9
- (void)close;	// IMP=0x0000000000589668
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005895b0
@property(readonly, copy, nonatomic) NSArray *serverStreams;
@property(readonly, copy, nonatomic) NSArray *clientStreams;
@property(readonly, copy, nonatomic) NSArray *pendingMessages;
- (void)dealloc;	// IMP=0x0000000000589356
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000589002
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x0000000000588f7c
- (id)init;	// IMP=0x0000000000588ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property __weak id <HMFMessageTransportDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

