//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityWatchBuildTypeEqualsRule
{
    NSString *_buildType;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x00100000001ffabb
- (void).cxx_destruct;	// IMP=0x00000000001ffc0d
@property(retain, nonatomic) NSString *buildType; // @synthesize buildType=_buildType;
- (_Bool)evaluate;	// IMP=0x00000000001ffb21
- (void)processUserInfo:(id)arg1;	// IMP=0x00000000001ffac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

