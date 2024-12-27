//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDProcessInfo, NSMutableSet, NSObject, NSString;
@protocol MTRDeviceControllerClientProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCHIPXPCClientConnection : HMFObject
{
    _Bool _backgroundModeEntitled;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDProcessInfo *_processInfo;	// 24 = 0x18
    id <MTRDeviceControllerClientProtocol> _remoteObjectProxy;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
    NSMutableSet *_subscribedHomeUUIDs;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000004a4012
- (void).cxx_destruct;	// IMP=0x00000000004a3814
@property(readonly, nonatomic) NSMutableSet *subscribedHomeUUIDs; // @synthesize subscribedHomeUUIDs=_subscribedHomeUUIDs;
@property(readonly, nonatomic) _Bool backgroundModeEntitled; // @synthesize backgroundModeEntitled=_backgroundModeEntitled;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) id <MTRDeviceControllerClientProtocol> remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
@property(readonly, nonatomic) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000004a3754
- (void)downloadLogWithController:(id)arg1 nodeId:(id)arg2 type:(long long)arg3 timeout:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000004a31ff
- (void)readAttributeCacheWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000004a302e
- (void)subscribeWithController:(id)arg1 nodeId:(unsigned long long)arg2 minInterval:(id)arg3 maxInterval:(id)arg4 params:(id)arg5 shouldCache:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000004a2e5f
- (void)stopReportsWithController:(id)arg1 nodeId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a2d05
- (void)subscribeAttributeWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 minInterval:(id)arg6 maxInterval:(id)arg7 params:(id)arg8 establishedHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000004a2989
- (void)invokeCommandWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 commandId:(id)arg5 fields:(id)arg6 timedInvokeTimeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000004a207b
- (void)writeAttributeWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 value:(id)arg6 timedWriteTimeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000004a17ed
- (void)readAttributeWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 params:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000004a10a0
- (void)getAnyDeviceControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a09bb
- (_Bool)allowsOperation;	// IMP=0x00000000004a07c8
- (void)_getDeviceControllerWithFabricId:(unsigned long long)arg1 accessories:(id)arg2 home:(id)arg3 remainingHomes:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000004a0357
- (void)_registerReportHandlerWithHomeWithUUID:(id)arg1;	// IMP=0x000000000049fff1
- (void)deregisterReportHandlers;	// IMP=0x000000000049fc5f
- (id)initWithRemoteObjectProxy:(id)arg1 homeManager:(id)arg2 pid:(int)arg3 processInfo:(id)arg4 backgroundModeEntitled:(_Bool)arg5 workQueue:(id)arg6;	// IMP=0x000000000049fb27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

