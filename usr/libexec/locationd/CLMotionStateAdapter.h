//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionStateAdapter
{
}

+ (id)getSilo;	// IMP=0x0000000000307320
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000307307
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003072aa
- (void)queryMotionStatesWithStartTime:(double)arg1 endTime:(double)arg2 isFromInternalClient:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0020000000307534
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000030750c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003074df
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003074b7
- (void *)adaptee;	// IMP=0x0010000000307484
- (void)endService;	// IMP=0x0010000000307469
- (void)beginService;	// IMP=0x00100000003073b9
- (id)init;	// IMP=0x001000000030737c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

