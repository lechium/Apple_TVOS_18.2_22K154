//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteLoginMessageSender, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000719d7e
+ (id)logCategory;	// IMP=0x0010000000719d4e
- (void).cxx_destruct;	// IMP=0x0000000000719cfb
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000719c0b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000719b89
- (void)_handleMessage:(id)arg1;	// IMP=0x0000000000719ab3
- (void)_registerXPCRelayForMessageName:(id)arg1;	// IMP=0x00000000007199b4
- (void)registerForMessages;	// IMP=0x0000000000719898
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 remoteMessageSender:(id)arg3;	// IMP=0x00000000007197ea
- (id)logIdentifier;	// IMP=0x000000000071979a
- (id)initWithUUID:(id)arg1;	// IMP=0x000000000071972c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

