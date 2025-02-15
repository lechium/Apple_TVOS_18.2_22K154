//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBTLEFenceManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000e98464
+ (id)getSilo;	// IMP=0x0010000000e98250
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e98237
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000e981da
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x0020000000e9873a
- (_Bool)syncgetMonitoredRegions:(void *)arg1 forClient:(id)arg2;	// IMP=0x0010000000e986ab
- (_Bool)syncgetHasMonitoredRegions:(id)arg1;	// IMP=0x0010000000e98624
- (void)requestRegionState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e985b7
- (void)removeMonitoredRegion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9854a
- (void)addMonitoredRegion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e984dd
- (void)queryBundleIdentifiersWithEnteredRegionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e984af
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9843c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e9840f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e983e7
- (void *)adaptee;	// IMP=0x0010000000e983b4
- (void)endService;	// IMP=0x0010000000e98399
- (void)beginService;	// IMP=0x0010000000e982e9
- (id)init;	// IMP=0x0010000000e982ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

