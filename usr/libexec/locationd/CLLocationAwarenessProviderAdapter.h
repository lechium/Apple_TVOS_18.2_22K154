//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationAwarenessProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0040000000d1afd7
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d1afbe
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000d1af61
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000d1b1c4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d1b197
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d1b16f
- (void *)adaptee;	// IMP=0x0010000000d1b13c
- (void)endService;	// IMP=0x0010000000d1b121
- (void)beginService;	// IMP=0x0010000000d1b070
- (id)init;	// IMP=0x0010000000d1b033
- (void)onScenarioTrigger:(id)arg1;	// IMP=0x0010000000d1b3a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

