//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVConferenceXPCClient.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCClientShared : AVConferenceXPCClient
{
    NSMutableDictionary *_registeredUUIDServiceBlocks;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_registeredBlocksQueue;	// 56 = 0x38
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registeredBlocksQueue; // @synthesize registeredBlocksQueue=_registeredBlocksQueue;
@property(readonly, nonatomic) NSMutableDictionary *registeredUUIDServiceBlocks; // @synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks;
- (void)deregisterWithUUID:(id)arg1 service:(char *)arg2;	// IMP=0x000000000036813d
- (void)registerBlockWithUUID:(id)arg1 service:(char *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000036781e
- (void)deregisterFromNotifications;	// IMP=0x00000000003676cf
- (void)dealloc;	// IMP=0x0000000000367647
- (id)init;	// IMP=0x000000000036751b

@end

