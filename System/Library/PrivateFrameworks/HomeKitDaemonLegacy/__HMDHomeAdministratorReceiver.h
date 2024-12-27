//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeAdministratorHandler, NSObject, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMDHomeAdministratorReceiver : HMFObject
{
    id <HMFMessageReceiver> _receiver;	// 8 = 0x8
    HMDHomeAdministratorHandler *_handler;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000a2515a
- (void).cxx_destruct;	// IMP=0x0000000000a250e9
@property(readonly) __weak HMDHomeAdministratorHandler *handler; // @synthesize handler=_handler;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
- (id)logIdentifier;	// IMP=0x0000000000a2503d
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleAdministratorMessage:(id)arg1;	// IMP=0x0000000000a24fe5
- (void)__handleXPCMessage:(id)arg1;	// IMP=0x0000000000a24e48
- (void)registerForMessage:(id)arg1 policies:(id)arg2;	// IMP=0x0000000000a24d62
- (id)shortDescription;	// IMP=0x0000000000a24ce7
- (void)dealloc;	// IMP=0x0000000000a24c2a
- (id)initWithReceiver:(id)arg1 handler:(id)arg2;	// IMP=0x0000000000a24b8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly) Class superclass;

@end

