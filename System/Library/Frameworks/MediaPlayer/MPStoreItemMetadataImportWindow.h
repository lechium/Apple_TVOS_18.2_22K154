//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPServerObjectDatabase, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPStoreItemMetadataImportWindow : NSObject
{
    NSMutableArray *_accumulatedObjects;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    double _eventCadence;	// 24 = 0x18
    double _maximumLatency;	// 32 = 0x20
    MPServerObjectDatabase *_serverObjectDatabase;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000231028
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak MPServerObjectDatabase *serverObjectDatabase; // @synthesize serverObjectDatabase=_serverObjectDatabase;
@property(readonly, nonatomic) double maximumLatency; // @synthesize maximumLatency=_maximumLatency;
@property(readonly, nonatomic) double eventCadence; // @synthesize eventCadence=_eventCadence;
- (void)_purge;	// IMP=0x0000000000230a43
- (void)_checkCadence;	// IMP=0x0000000000230a31
- (void)addPayload:(id)arg1 userIdentity:(id)arg2;	// IMP=0x0000000000230912
- (id)initWithEventCadence:(double)arg1 maximumLatency:(double)arg2 serverObjectDatabase:(id)arg3 queue:(id)arg4;	// IMP=0x0000000000230838

@end

