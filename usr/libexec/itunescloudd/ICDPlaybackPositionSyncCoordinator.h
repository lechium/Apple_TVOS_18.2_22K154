//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDPlaybackPositionSyncCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_syncTimerSource;	// 16 = 0x10
    NSMutableDictionary *_pendingSyncBlocks;	// 24 = 0x18
    NSMutableSet *_inFlightSyncIDs;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000002d0b
- (void)_onQueue_scheduleBlockWithIdentifier:(id)arg1 isCheckpoint:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002a7d
- (void)_onQueue_flushSyncBlocks;	// IMP=0x00100000000028d2
- (void)_onQueue_addSyncBlockWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002758
- (void)scheduleSyncForContext:(id)arg1 isCheckpoint:(_Bool)arg2;	// IMP=0x00100000000026b9
- (id)initWithOperationQueue:(id)arg1;	// IMP=0x001000000000258a

@end

