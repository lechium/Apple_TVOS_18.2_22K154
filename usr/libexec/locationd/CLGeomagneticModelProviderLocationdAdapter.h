//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGeomagneticModelProviderLocationdAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000009d3930
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d3917
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009d38ba
- (void)fetchGeomagneticModelData:(CDUnknownBlockType)arg1;	// IMP=0x00200000009d3ae5
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009d3abd
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d3a90
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009d3a68
- (void *)adaptee;	// IMP=0x00100000009d3a35
- (void)endService;	// IMP=0x00100000009d3a1a
- (void)beginService;	// IMP=0x00100000009d39c9
- (id)init;	// IMP=0x00100000009d398c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

