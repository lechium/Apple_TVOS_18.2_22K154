//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AAGrandSlamSigner, NSDictionary, NSNumber;

@interface FAUpdateFamilyMemberFlagsOperation
{
    AAGrandSlamSigner *_grandSlamSigner;	// 8 = 0x8
    AAGrandSlamSigner *_familyGrandSlamSigner;	// 16 = 0x10
    NSNumber *_dsid;	// 24 = 0x18
    NSDictionary *_flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000011e53
@property(readonly, copy) NSDictionary *flags; // @synthesize flags=_flags;
@property(readonly, copy) NSNumber *dsid; // @synthesize dsid=_dsid;
- (void)_addBodyToRequest:(id)arg1;	// IMP=0x0010000000011bd3
- (void)_addHeadersToRequest:(id)arg1;	// IMP=0x00100000000119aa
- (id)updateMemberFlags;	// IMP=0x00100000000114f2
- (id)initWithNetworkService:(id)arg1 grandSlamSigner:(id)arg2 familyGrandSlamSigner:(id)arg3 memberDSID:(id)arg4 flags:(id)arg5;	// IMP=0x00100000000113f6

@end

