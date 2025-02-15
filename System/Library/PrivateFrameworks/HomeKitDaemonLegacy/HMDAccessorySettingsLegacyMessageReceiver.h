//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingsMessenger, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsLegacyMessageReceiver : HMFObject
{
    NSUUID *_messageTargetUUID;	// 8 = 0x8
    HMDAccessorySettingsMessenger *_messenger;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000027ccfc
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak HMDAccessorySettingsMessenger *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)arg1;	// IMP=0x000000000027ca7e
- (void)routeAccessorySettingsFetchRequestMessage:(id)arg1;	// IMP=0x000000000027c854
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x000000000027c616
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000027c552

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

