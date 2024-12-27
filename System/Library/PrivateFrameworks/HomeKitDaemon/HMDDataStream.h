//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPSecuritySessionEncryption, HMDDataStreamControlProtocol, HMFTimer, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol HMDDataStreamDelegate, HMDDataStreamTransport, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStream : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _firstMessageReceived;	// 9 = 0x9
    id <HMDDataStreamDelegate> _delegate;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    id <HMDDataStreamTransport> _transport;	// 32 = 0x20
    HAPSecuritySessionEncryption *_sessionEncryption;	// 40 = 0x28
    NSMapTable *_protocols;	// 48 = 0x30
    HMDDataStreamControlProtocol *_controlProtocol;	// 56 = 0x38
    HMFTimer *_connectionTimer;	// 64 = 0x40
    HMFTimer *_helloMessageResponseTimer;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    unsigned long long _nextRequestIdentifier;	// 88 = 0x58
    NSMutableSet *_pendingRequests;	// 96 = 0x60
    NSMutableArray *_pendingEvents;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00100000004d0f6d
- (void).cxx_destruct;	// IMP=0x00000000004cff6f
@property(readonly, nonatomic) NSMutableArray *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property(readonly, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long nextRequestIdentifier; // @synthesize nextRequestIdentifier=_nextRequestIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *helloMessageResponseTimer; // @synthesize helloMessageResponseTimer=_helloMessageResponseTimer;
@property(retain, nonatomic) HMFTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(nonatomic) _Bool firstMessageReceived; // @synthesize firstMessageReceived=_firstMessageReceived;
@property(retain, nonatomic) HMDDataStreamControlProtocol *controlProtocol; // @synthesize controlProtocol=_controlProtocol;
@property(retain, nonatomic) NSMapTable *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(retain, nonatomic) id <HMDDataStreamTransport> transport; // @synthesize transport=_transport;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) __weak id <HMDDataStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004cfc4c
- (void)transport:(id)arg1 didReceiveRawFrame:(id)arg2;	// IMP=0x00000000004ce30d
- (void)transportDidOpen:(id)arg1;	// IMP=0x00000000004cdf28
- (void)transportDidClose:(id)arg1;	// IMP=0x00000000004cdc24
- (void)transport:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000004cd8d1
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000004cd7a9
- (void)protocolDidUpdateActiveStatus:(id)arg1;	// IMP=0x00000000004cd79f
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004cd488
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 identifier:(unsigned long long)arg3 payload:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000004cd38c
- (void)sendResponseForRequestHeader:(id)arg1 payload:(id)arg2 status:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004cd2f3
- (void)sendEventForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004cd127
- (id)protocolDelegateHandle;	// IMP=0x00000000004cd11e
- (id)protocolWithName:(id)arg1;	// IMP=0x00000000004cd075
- (void)addProtocol:(id)arg1 name:(id)arg2;	// IMP=0x00000000004ccfe4
- (void)close;	// IMP=0x00000000004ccdb2
- (void)connect;	// IMP=0x00000000004ccbde
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 connectionTimer:(id)arg5 helloMessageResponseTimer:(id)arg6;	// IMP=0x00000000004cc8a1
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x00000000004cc781

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

