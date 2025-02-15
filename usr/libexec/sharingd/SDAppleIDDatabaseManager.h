//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, SFAppleIDAccount;
@protocol _TtP16DaemoniOSLibrary33SDAppleIDPlatformAccountInfoStore_;

@interface SDAppleIDDatabaseManager : NSObject
{
    NSDictionary *_metaInfo;	// 8 = 0x8
    id <_TtP16DaemoniOSLibrary33SDAppleIDPlatformAccountInfoStore_> _accountInfoStore;	// 16 = 0x10
    NSDate *_lastConnectionDate;	// 24 = 0x18
    NSDate *_lastSuccessfulConnectionDate;	// 32 = 0x20
    SFAppleIDAccount *_account;	// 40 = 0x28
    NSMutableDictionary *_personInfoCache;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00400000000a0cce
- (void).cxx_destruct;	// IMP=0x00200000000a3cd1
@property(retain, nonatomic) NSMutableDictionary *personInfoCache; // @synthesize personInfoCache=_personInfoCache;
@property(retain, nonatomic) SFAppleIDAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSDate *lastSuccessfulConnectionDate; // @synthesize lastSuccessfulConnectionDate=_lastSuccessfulConnectionDate;
@property(retain, nonatomic) NSDate *lastConnectionDate; // @synthesize lastConnectionDate=_lastConnectionDate;
- (void)_postNotificationWithName:(id)arg1;	// IMP=0x00100000000a3b7b
@property(copy, nonatomic) NSDictionary *metaInfo;
- (void)_setMetaInfo:(id)arg1;	// IMP=0x00100000000a3a45
- (void)setContactInfo:(id)arg1 validationRecord:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00100000000a3957
- (void)_setContactInfo:(id)arg1 validationRecord:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00100000000a3621
- (void)setCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00100000000a3574
- (void)_setCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00100000000a3155
- (void)setIdentityLinkedToCurrentUser:(_Bool)arg1 forAppleID:(id)arg2;	// IMP=0x00100000000a30d5
- (void)_setIdentityLinkedToCurrentUser:(_Bool)arg1 forAppleID:(id)arg2;	// IMP=0x00100000000a2f4c
- (void)setIdentity:(id)arg1 forAppleID:(id)arg2;	// IMP=0x00100000000a2e9b
- (void)_setIdentity:(id)arg1 forAppleID:(id)arg2;	// IMP=0x00100000000a2b63
- (void)_setLastSuccessfulConnectionDate:(id)arg1;	// IMP=0x00100000000a2ad7
- (void)_setLastConnectionDate:(id)arg1;	// IMP=0x00100000000a2a4b
- (void)clearPersonInfoCache;	// IMP=0x00100000000a29fb
- (void)_clearPersonInfoCache;	// IMP=0x00100000000a295d
- (id)cachedPersonInfoWithEmailOrPhone:(id)arg1;	// IMP=0x00100000000a2863
- (id)_cachedPersonInfoWithEmailOrPhone:(id)arg1;	// IMP=0x00100000000a27a9
- (void)addPersonInfoToCache:(id)arg1;	// IMP=0x00100000000a272e
- (void)_addPersonInfoToCache:(id)arg1;	// IMP=0x00100000000a25e0
- (void)removeAppleID:(id)arg1;	// IMP=0x00100000000a2565
- (void)_removeAppleID:(id)arg1;	// IMP=0x00100000000a246a
- (void)addAppleID:(id)arg1;	// IMP=0x00100000000a23ef
- (void)_addAppleID:(id)arg1;	// IMP=0x00100000000a22ef
- (void)_setAccount:(id)arg1;	// IMP=0x00100000000a1fd9
- (void)_updatePersonInfoCachePrefs;	// IMP=0x00100000000a1e8a
- (void)_updateMetaInfoPrefs;	// IMP=0x00100000000a1dcb
- (void)_updateAccountInfoPrefs;	// IMP=0x00100000000a1c5f
- (id)statusInfo;	// IMP=0x00100000000a1bfc
- (id)_statusInfo;	// IMP=0x00100000000a1b0c
- (id)identityForAppleID:(id)arg1;	// IMP=0x00100000000a1a5f
- (id)accountForAppleID:(id)arg1;	// IMP=0x00100000000a19b2
- (id)_accountForAppleID:(id)arg1;	// IMP=0x00100000000a18e6
- (id)_identityForAppleID:(id)arg1;	// IMP=0x00100000000a17f9
- (void)_clearLegacyPreferencesIfNeeded;	// IMP=0x00100000000a1724
- (void)_readPrefs;	// IMP=0x00100000000a0d23
- (id)init;	// IMP=0x00100000000a0c27

@end

