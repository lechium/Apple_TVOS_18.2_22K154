//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSignificantChangeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000909761
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000909748
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009096eb
+ (_Bool)isSupported;	// IMP=0x0010000000909b4a
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x002000000090998b
- (void)fetchLastSignificantLocationDistanceAndLatencyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000909954
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000090992c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009098ff
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009098d7
- (void *)adaptee;	// IMP=0x00100000009098a4
- (void)endService;	// IMP=0x0010000000909889
- (void)beginService;	// IMP=0x00100000009097fa
- (id)init;	// IMP=0x00100000009097bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

