//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityIOSVersionGreaterThanRule
{
    CDStruct_f6aba300 _targetVersion;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x0010000000040e0d
@property(nonatomic) CDStruct_f6aba300 targetVersion; // @synthesize targetVersion=_targetVersion;
- (_Bool)evaluate;	// IMP=0x0000000000040eca
- (void)processUserInfo:(id)arg1;	// IMP=0x0000000000040e1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

