//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFilteredLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000004993c2
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004993a9
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000049934c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000004995ae
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000499581
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000499559
- (void *)adaptee;	// IMP=0x0010000000499526
- (void)endService;	// IMP=0x001000000049950b
- (void)beginService;	// IMP=0x001000000049945b
- (id)init;	// IMP=0x001000000049941e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

