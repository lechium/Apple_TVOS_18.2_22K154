//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDMPCSessionController, HMDResidentDevice, NSObject, NSString, NSUUID;
@protocol HMDMediaActionRouterDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaActionRouter : HMFObject
{
    _Bool _shouldExecuteOnCurrentDevice;	// 8 = 0x8
    id <HMDMediaActionRouterDataSource> _dataSource;	// 16 = 0x10
    HMDResidentDevice *_targetResidentDeviceOverride;	// 24 = 0x18
    HMDMPCSessionController *_mpcSessionController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000082505b
@property(readonly, nonatomic) HMDMPCSessionController *mpcSessionController; // @synthesize mpcSessionController=_mpcSessionController;
@property(nonatomic) __weak HMDResidentDevice *targetResidentDeviceOverride; // @synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride;
@property(readonly, nonatomic) _Bool shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property(readonly, nonatomic) __weak id <HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)mediaProfileWithUUID:(id)arg1;	// IMP=0x0000000000824f7a
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000824d45
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(_Bool)arg2;	// IMP=0x00000000008239ab
- (void)gatherTargetDevicesForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(_Bool)arg2 outResidentDevicesInMediaAction:(id *)arg3 outHomePodsInMediaAction:(id *)arg4 outResidentDevicesSupportingMediaActions:(id *)arg5 outHomePodsSupportingMediaActions:(id *)arg6 outNonOdeonHomePodsSupportingMediaActions:(id *)arg7 outNonOdeonResidentDevicesSupportingMediaActions:(id *)arg8 outNonOdeonResidentDevicesInMediaAction:(id *)arg9 outNonOdeonHomePodsInMediaAction:(id *)arg10 dataSource:(id)arg11;	// IMP=0x000000000082321a
- (void)routeMessage:(id)arg1;	// IMP=0x0000000000822e51
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(_Bool)arg3 canForwardMessage:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000822a5e
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000082289f
- (void)sendMediaActionMessageToResident:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000082276b
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000822607
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008223e4
- (void)routeMediaActionForExecution:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008220be
- (void)_registerForMessages;	// IMP=0x0000000000821f42
- (void)dealloc;	// IMP=0x0000000000821e9b
- (id)init;	// IMP=0x0000000000821df3
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000821693

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

