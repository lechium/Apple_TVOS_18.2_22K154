//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLOdometerNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000002450f6
+ (id)getSilo;	// IMP=0x0010000000244ee1
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000244ec8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000244e6b
- (void)unregisterForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x0020000000245352
- (void)registerForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x0010000000245324
- (void)updatePhoneWorkoutElevationSubscription:(_Bool)arg1;	// IMP=0x00100000002452f8
- (void)querySignificantElevationDeltaFromDate:(id)arg1 toDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000024513c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002450ce
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002450a1
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000245079
- (void *)adaptee;	// IMP=0x0010000000245046
- (void)endService;	// IMP=0x001000000024502b
- (void)beginService;	// IMP=0x0010000000244f7a
- (id)init;	// IMP=0x0010000000244f3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

