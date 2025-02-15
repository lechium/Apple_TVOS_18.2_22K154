//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSnapshotCacheRequestHandler : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableDictionary *_snapshotCacheMap;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000b127a6
- (void).cxx_destruct;	// IMP=0x0000000000b12410
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (_Bool)isSnapshotPresentForCharacteristicEventUUID:(id)arg1;	// IMP=0x0000000000b1225d
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b1218e
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000b11e46
- (void)setSnapshotFileToCache:(id)arg1 snapshotCharacteristicEventUUID:(id)arg2;	// IMP=0x0000000000b11ae6
- (void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2;	// IMP=0x0000000000b11849
- (void)addSnapshotFileToCache:(id)arg1;	// IMP=0x0000000000b116e5
- (id)initWithWorkQueue:(id)arg1 logID:(id)arg2;	// IMP=0x0000000000b11612

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

