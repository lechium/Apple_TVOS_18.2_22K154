//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CountryAsset
{
    NSSet *countryCodes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000040f0
@property(retain, nonatomic) NSSet *countryCodes; // @synthesize countryCodes;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003e87
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003dac
- (id)initForMobileAssetRootKey:(id)arg1 withDictionary:(id)arg2;	// IMP=0x0010000000003d7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

