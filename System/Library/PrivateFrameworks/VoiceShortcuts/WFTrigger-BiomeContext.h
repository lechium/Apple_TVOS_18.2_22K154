//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFTrigger.h>

@interface WFTrigger (BiomeContext)
+ (_Bool)unregisterContextSyncClient;	// IMP=0x005000000008ff50
+ (id)powerLogEventKindForTrigger:(id)arg1;	// IMP=0x00500000000b8a38
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008dbfa
- (id)remotePublisherWithScheduler:(id)arg1;	// IMP=0x001000000008dbf2
- (_Bool)hasRemotePublisher;	// IMP=0x001000000008dbea
- (id)publisherWithScheduler:(id)arg1;	// IMP=0x001000000008dbe2
- (_Bool)needsRegistrationAfterFiring;	// IMP=0x00100000000b6120
- (_Bool)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id *)arg2;	// IMP=0x00100000000b6118
- (_Bool)contextStoreRegistrationIsForWatch;	// IMP=0x00100000000b6110
- (unsigned int)contextStoreQualityOfService;	// IMP=0x00100000000b6105
- (id)contextStorePredicate;	// IMP=0x00100000000b6065
- (id)contextStoreKeyPathForCurrentState;	// IMP=0x00100000000b5fc5
- (void)eventInfoForEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f62d9
- (id)eventInfoForEvent:(id)arg1;	// IMP=0x00100000000f62d1
- (_Bool)requiresEventInfoAsInput;	// IMP=0x00100000000f62c9
- (id)contentCollectionWithEventInfo:(id)arg1;	// IMP=0x00100000000f62c1
@end

