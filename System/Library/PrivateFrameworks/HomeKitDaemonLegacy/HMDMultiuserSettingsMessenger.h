//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMultiuserSettingsMessenger : HMFObject
{
    HMFMessageDispatcher *_messageDispatcher;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000834078
- (void).cxx_destruct;	// IMP=0x0000000000834049
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (id)logIdentifier;	// IMP=0x0000000000833fca
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleFetchMultiuserSettingsRequest:(id)arg1;	// IMP=0x0000000000833da0
- (void)registerForMessages;	// IMP=0x0000000000833bab
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000833aee

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

