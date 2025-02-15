//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDurationEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSNumber *_duration;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000e05550
+ (id)logCategory;	// IMP=0x0010000000e05520
- (void).cxx_destruct;	// IMP=0x0000000000e05171
- (id)analyticsTriggerEventData;	// IMP=0x0000000000e050f7
- (id)_nextTimerDate;	// IMP=0x0000000000e04ee9
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000e04ee3
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000e04c04
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000e04abc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e04a21
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e04986
- (_Bool)isCompatbileWithEvent:(id)arg1;	// IMP=0x0000000000e04957
@property(copy) NSNumber *duration; // @synthesize duration=_duration;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000e04672
- (id)emptyModelObject;	// IMP=0x0000000000e045ba
- (id)createPayload;	// IMP=0x0000000000e044e6
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000e04399

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

