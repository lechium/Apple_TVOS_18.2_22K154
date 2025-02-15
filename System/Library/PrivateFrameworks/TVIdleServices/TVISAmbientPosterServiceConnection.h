//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol TVISEvolutionService;

__attribute__((visibility("hidden")))
@interface TVISAmbientPosterServiceConnection
{
    id <TVISEvolutionService> _service;	// 8 = 0x8
}

+ (id)remoteInterface;	// IMP=0x00100000000bd300
+ (id)exportedInterface;	// IMP=0x00100000000bd2e0
- (void).cxx_destruct;	// IMP=0x00000000000bd8f0
@property(readonly, retain, nonatomic) id <TVISEvolutionService> service; // @synthesize service=_service;
- (void)service:(id)arg1 didUpdateSnapshotWithTraits:(unsigned long long)arg2;	// IMP=0x00000000000bd670
- (void)queryCurrentSnapshotWithIntent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bd320
- (void)dealloc;	// IMP=0x00000000000bd280
- (id)initWithConnection:(id)arg1 service:(id)arg2;	// IMP=0x00000000000bd150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

