//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMClientConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ADHomeKitService
{
    HMClientConnection *_hmConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000305b8c
- (id)_hmConnection;	// IMP=0x0010000000305b3b
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000305a7d
- (void)resetExternalResources;	// IMP=0x0010000000305a2b
- (void)preheatDomain:(id)arg1;	// IMP=0x00100000003059d9
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000003059d1
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000305945
- (id)domains;	// IMP=0x00100000003058db
- (id)handle;	// IMP=0x00100000003058d2
- (id)init;	// IMP=0x001000000030580e

@end

