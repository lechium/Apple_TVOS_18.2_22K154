//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSpringTrackingNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000e9c170
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e9c157
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000e9c0fa
+ (_Bool)isSupported;	// IMP=0x0010000000e9ca0d
- (void)querySinceRecord:(struct CLSpringTrackerEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000e9c828
- (int)syncgetStopTracking;	// IMP=0x0010000000e9c64c
- (int)syncgetStartTracking;	// IMP=0x0010000000e9c3a3
- (_Bool)syncgetIsTracking;	// IMP=0x0010000000e9c384
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9c35c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e9c32f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9c307
- (void *)adaptee;	// IMP=0x0010000000e9c2d4
- (void)endService;	// IMP=0x0010000000e9c2b9
- (void)beginService;	// IMP=0x0010000000e9c209
- (id)init;	// IMP=0x0010000000e9c1cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

