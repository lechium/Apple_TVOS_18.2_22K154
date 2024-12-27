//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDFeaturesDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeMediaSystemControllerMessageHandler : NSObject
{
    id <HMDFeaturesDataSource> _featuresDataSource;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    id <HMDHomeMediaSystemControllerMessageHandlerDelegate> _delegate;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000362041
- (void).cxx_destruct;	// IMP=0x0000000000361659
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak id <HMDHomeMediaSystemControllerMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
- (id)logIdentifier;	// IMP=0x0000000000361590
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x0000000000361515
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_legacyHandleUpdateMediaSystem:(id)arg1;	// IMP=0x0000000000360ea7
- (void)locallyUpdateMediaSystemUsingRequestMessage:(id)arg1;	// IMP=0x0000000000360542
- (void)routeUpdateMediaSystem:(id)arg1;	// IMP=0x0000000000360308
- (void)_legacyHandleRemoveMediaSystem:(id)arg1;	// IMP=0x0000000000360217
- (void)locallyRemoveMediaSystemUsingRemoveRequestMessage:(id)arg1;	// IMP=0x000000000035fb72
- (void)routeRemoveMediaSystem:(id)arg1;	// IMP=0x000000000035fa3c
- (void)_legacyHandleAddMediaSystemWithPreProcessedMessage:(id)arg1;	// IMP=0x000000000035f462
- (void)_legacyHandleAddMediaSystem:(id)arg1;	// IMP=0x000000000035f41b
- (id)homeUUID;	// IMP=0x000000000035f2c8
- (id)mediaGroupsAggregator;	// IMP=0x000000000035f175
- (id)messageRouter;	// IMP=0x000000000035f022
- (id)unconfiguredParticipantOnboardingManager;	// IMP=0x000000000035efd2
- (void)queueOnboardingForUnconfiguredParticipantWithAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x000000000035edbe
- (id)updateParticipantWithDestinationManager:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x000000000035eceb
- (id)updateParticipantWithAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x000000000035ebe5
- (void)updateParticipantWithDestinationIdentifier:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x000000000035ea1f
- (void)updateParticipantWithDestinationIdentifiers:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x000000000035e988
- (id)mediaSystemNameFromRoomWithAccessoryUUIDs:(id)arg1;	// IMP=0x000000000035e727
- (id)stagingMediaSystemDataFromData:(id)arg1 accessoryUUIDs:(id)arg2;	// IMP=0x000000000035e61f
- (CDUnknownBlockType)updateMediaSystemCompletionBlockWithMessage:(id)arg1 data:(id)arg2 accessoryUUIDs:(id)arg3;	// IMP=0x000000000035e538
- (id)validateConfiguredName:(id)arg1;	// IMP=0x000000000035e11b
- (id)validatePayload:(id)arg1;	// IMP=0x000000000035e0b9
- (id)preferredAssociatedGroupIdentifierForMediaSystemBuilderPayload:(id)arg1;	// IMP=0x000000000035dc25
- (void)locallyAddMediaSystemUsingRequestMessage:(id)arg1;	// IMP=0x000000000035d3ca
- (void)_logRemoveMediaSystemMetricsUsingMessage:(id)arg1;	// IMP=0x000000000035cfe9
- (void)_logAddMediaSystemMetricsUsingMessage:(id)arg1;	// IMP=0x000000000035cbd0
- (void)routeAddMediaSystem:(id)arg1;	// IMP=0x000000000035c982
- (id)preProcessMediaSystemMessage:(id)arg1;	// IMP=0x000000000035c577
- (void)_registerForMessages;	// IMP=0x000000000035c3e6
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4 featuresDataSource:(id)arg5;	// IMP=0x000000000035c2d3
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000035c210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

