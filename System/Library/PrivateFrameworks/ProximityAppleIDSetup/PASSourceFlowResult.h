//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, FAFamilyMember, MISSING_TYPE, NSDictionary, NSError, NSString;

@interface PASSourceFlowResult
{
    MISSING_TYPE *result;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000766d0
- (id)init;	// IMP=0x0000000000076670
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSError *error;
@property(nonatomic, readonly) NSDictionary *authResults;
@property(nonatomic, readonly) ACAccount *personalAccount;
@property(nonatomic, readonly) FAFamilyMember *familyMember;
@property(nonatomic, readonly) long long accountType;

@end

