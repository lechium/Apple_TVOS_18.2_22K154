//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface TVSettingsUserProfilesValidator : NSObject
{
    long long _userActionType;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001150f4
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) long long userActionType; // @synthesize userActionType=_userActionType;
- (id)preferredLanguagesFromLanguages:(id)arg1 forUserType:(long long)arg2;	// IMP=0x0010000000114458
- (_Bool)canSignInUserWithGameCenterAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000011444c
- (_Bool)canSignInUserWithiCloudAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000011443d
- (_Bool)canAddUserWithiCloudAltDSID:(id)arg1 gameCenterAltDSID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000011442a
- (_Bool)canAddUserWithAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000113c19
- (id)init;	// IMP=0x0010000000113bb3

@end

