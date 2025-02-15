//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBTLEBeaconProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000ee70ba
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ee70a1
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000ee7044
- (_Bool)syncgetRemoveProximityZone:(const void *)arg1;	// IMP=0x0020000000ee7338
- (_Bool)syncgetAddProximityZone:(const void *)arg1;	// IMP=0x0010000000ee730a
- (void)stopScan;	// IMP=0x0010000000ee72ec
- (void)startScan;	// IMP=0x0010000000ee72ce
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ee72a6
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ee7279
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ee7251
- (void *)adaptee;	// IMP=0x0010000000ee721e
- (void)endService;	// IMP=0x0010000000ee7203
- (void)beginService;	// IMP=0x0010000000ee7153
- (id)init;	// IMP=0x0010000000ee7116

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

