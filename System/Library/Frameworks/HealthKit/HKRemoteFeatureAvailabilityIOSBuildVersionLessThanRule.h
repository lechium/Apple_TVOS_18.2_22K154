//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityIOSBuildVersionLessThanRule
{
    NSString *_buildVersion;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x001000000016e71a
- (void).cxx_destruct;	// IMP=0x000000000016e8bc
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (_Bool)evaluate;	// IMP=0x000000000016e780
- (void)processUserInfo:(id)arg1;	// IMP=0x000000000016e727

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

