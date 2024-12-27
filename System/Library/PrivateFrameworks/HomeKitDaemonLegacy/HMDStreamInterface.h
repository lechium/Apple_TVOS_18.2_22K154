//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, NSObject, NSString;
@protocol HMDCameraRemoteStreamProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDStreamInterface : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _localRTPSocket;	// 12 = 0xc
    unsigned long long _state;	// 16 = 0x10
    HMDCameraStreamSessionID *_sessionID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    id <HMDCameraRemoteStreamProtocol> _sessionHandler;	// 40 = 0x28
    CDUnknownBlockType _socketCloseHandler;	// 48 = 0x30
}

+ (id)extractNetworkConfig:(int)arg1 peerNameExtractor:(CDUnknownFunctionPointerType)arg2;	// IMP=0x0010000000497000
+ (int)openSocketWithNetworkConfig:(id)arg1;	// IMP=0x0010000000496ac4
+ (id)logCategory;	// IMP=0x0010000000496a94
- (void).cxx_destruct;	// IMP=0x0000000000496a35
@property(copy) CDUnknownBlockType socketCloseHandler; // @synthesize socketCloseHandler=_socketCloseHandler;
@property(readonly, nonatomic) int localRTPSocket; // @synthesize localRTPSocket=_localRTPSocket;
@property(readonly) id <HMDCameraRemoteStreamProtocol> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (_Bool)loadMiscFields:(id)arg1;	// IMP=0x000000000049659d
- (void)setStreamInterfaceState:(unsigned long long)arg1;	// IMP=0x000000000049655c
- (void)dealloc;	// IMP=0x00000000004964d5
- (id)logIdentifier;	// IMP=0x0000000000496485
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionHandler:(id)arg3 localRTPSocket:(int)arg4;	// IMP=0x0000000000496372

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

