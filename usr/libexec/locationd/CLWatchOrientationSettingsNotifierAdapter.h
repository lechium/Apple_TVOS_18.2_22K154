//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLDispatchSilo, NSString;

@interface CLWatchOrientationSettingsNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000577dd2
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000577db9
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000577d5c
+ (_Bool)isSupported;	// IMP=0x0010000000577fe6
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000577fbe
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000577f91
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000577f69
- (void *)adaptee;	// IMP=0x0010000000577f36
- (void)endService;	// IMP=0x0010000000577f1b
- (void)beginService;	// IMP=0x0010000000577e6b
- (id)init;	// IMP=0x0010000000577e2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

