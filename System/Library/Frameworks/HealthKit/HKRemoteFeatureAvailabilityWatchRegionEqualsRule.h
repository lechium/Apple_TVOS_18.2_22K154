//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityWatchRegionEqualsRule
{
    NSString *_regionCode;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x00100000000cf80d
- (void).cxx_destruct;	// IMP=0x00000000000cf95f
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
- (_Bool)evaluate;	// IMP=0x00000000000cf873
- (void)processUserInfo:(id)arg1;	// IMP=0x00000000000cf81a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

