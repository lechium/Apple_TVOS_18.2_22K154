//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionStateObserverAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000d9f5ec
+ (id)getSilo;	// IMP=0x0010000000d9f3d8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d9f3bf
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000d9f362
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000d9f5c4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d9f597
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d9f56f
- (void *)adaptee;	// IMP=0x0010000000d9f53c
- (void)endService;	// IMP=0x0010000000d9f521
- (void)beginService;	// IMP=0x0010000000d9f471
- (id)init;	// IMP=0x0010000000d9f434

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

