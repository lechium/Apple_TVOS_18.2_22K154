//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTimeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000003b016a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003b0151
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003b00f4
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x00200000003b03f1
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x00100000003b03b5
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x00100000003b037e
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b0356
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003b0329
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b0301
- (void *)adaptee;	// IMP=0x00100000003b02ce
- (void)endService;	// IMP=0x00100000003b02b3
- (void)beginService;	// IMP=0x00100000003b0203
- (id)init;	// IMP=0x00100000003b01c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

