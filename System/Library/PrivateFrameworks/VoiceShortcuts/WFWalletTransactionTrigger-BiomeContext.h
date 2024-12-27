//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFWalletTransactionTrigger.h>

@interface WFWalletTransactionTrigger (BiomeContext)
+ (_Bool)unregisterContextSyncClient;	// IMP=0x005000000008ff48
+ (_Bool)registerContextSyncClient;	// IMP=0x005000000008ff40
- (_Bool)isPassIdentifierValid:(id)arg1;	// IMP=0x001000000008d31a
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008cc9e
- (id)transactionIdentifierWithEvent:(id)arg1;	// IMP=0x001000000008caf7
- (id)remotePublisherWithScheduler:(id)arg1;	// IMP=0x001000000008caef
- (_Bool)hasRemotePublisher;	// IMP=0x001000000008cae7
- (id)publisherWithScheduler:(id)arg1;	// IMP=0x001000000008ca11
- (id)contentCollectionWithEventInfo:(id)arg1;	// IMP=0x00100000000f6177
- (id)dictionaryWithTransaction:(id)arg1 transactionEvent:(id)arg2;	// IMP=0x00100000000f5cdd
- (void)eventInfoForEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f5757
- (_Bool)requiresEventInfoAsInput;	// IMP=0x00100000000f574f
@end

