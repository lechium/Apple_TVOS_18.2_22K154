//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSimulatedLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000006987ec
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006987d3
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000698776
+ (_Bool)isSupported;	// IMP=0x0010000000698a00
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000006989d8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006989ab
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000698983
- (void *)adaptee;	// IMP=0x0010000000698950
- (void)endService;	// IMP=0x0010000000698935
- (void)beginService;	// IMP=0x0010000000698885
- (id)init;	// IMP=0x0010000000698848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

