//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSignificantTimeEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_significantEvent;	// 16 = 0x10
    NSDateComponents *_offset;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006eff00
+ (id)nextTimerDateFromHomeLocation:(id)arg1 signifiantEvent:(id)arg2 offset:(id)arg3 loggingObject:(id)arg4;	// IMP=0x00100000006ef3a4
+ (id)logCategory;	// IMP=0x00100000006ef374
- (void).cxx_destruct;	// IMP=0x00000000006eee55
- (id)analyticsTriggerEventData;	// IMP=0x00000000006eed6c
- (id)_nextTimerDate;	// IMP=0x00000000006eec4d
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000006eec47
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000006ee8ce
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000006ee748
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006ee674
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006ee585
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000006ee556
@property(retain) NSDateComponents *offset; // @synthesize offset=_offset;
@property(retain) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000006ee11b
- (id)emptyModelObject;	// IMP=0x00000000006ee063
- (id)createPayload;	// IMP=0x00000000006edf41
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000006edd52

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

