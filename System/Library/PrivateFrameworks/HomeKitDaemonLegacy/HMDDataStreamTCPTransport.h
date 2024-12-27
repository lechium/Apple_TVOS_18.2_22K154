//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDDataStreamFrameReader, HMFNetAddress, NSString;
@protocol HMDDataStreamTransportDelegate, HMDNetworkConnection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStreamTCPTransport : NSObject
{
    _Bool _connected;	// 8 = 0x8
    long long _remotePort;	// 16 = 0x10
    int _schedulingMode;	// 24 = 0x18
    id <HMDDataStreamTransportDelegate> delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMFNetAddress *_remoteAddress;	// 48 = 0x30
    id <HMDNetworkConnection> _tcpConnection;	// 56 = 0x38
    HMDDataStreamFrameReader *_byteReader;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
    CDUnknownBlockType _connectionFactory;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x001000000070a898
- (void).cxx_destruct;	// IMP=0x000000000070a120
@property(copy, nonatomic) CDUnknownBlockType connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) HMDDataStreamFrameReader *byteReader; // @synthesize byteReader=_byteReader;
@property(retain, nonatomic) id <HMDNetworkConnection> tcpConnection; // @synthesize tcpConnection=_tcpConnection;
@property(readonly, nonatomic) HMFNetAddress *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDDataStreamTransportDelegate> delegate; // @synthesize delegate;
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x0000000000709f45
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000709e16
- (void)close;	// IMP=0x0000000000709e02
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000709bc8
- (void)_doReceive;	// IMP=0x0000000000709971
- (void)_consumeReceivedData:(id)arg1;	// IMP=0x00000000007097e0
- (void)_stopWithError:(id)arg1;	// IMP=0x00000000007097ca
- (void)_start;	// IMP=0x0000000000709752
- (void)_registerForConnectionEvents;	// IMP=0x0000000000709654
- (void)_handleReadClose;	// IMP=0x0000000000709573
- (void)connect;	// IMP=0x00000000007090ef
- (id)_createTcpConnection;	// IMP=0x0000000000708e41
- (void)dealloc;	// IMP=0x0000000000708df9
- (id)initWithAddress:(id)arg1 port:(long long)arg2 targetQueue:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000708cf6
- (id)initWithAddress:(id)arg1 port:(long long)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000708bfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

