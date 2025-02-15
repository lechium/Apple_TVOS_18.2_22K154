//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSKeychainBackedKey, NSData, NSString;
@protocol SecCKKSKeyClass, SecCKKSProcessedState;

@interface CKKSKey
{
    _Bool _currentkey;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    NSString *_parentKeyUUID;	// 24 = 0x18
    NSString<SecCKKSKeyClass> *_keyclass;	// 32 = 0x20
    NSString<SecCKKSProcessedState> *_state;	// 40 = 0x28
    CKKSKeychainBackedKey *_keycore;	// 48 = 0x30
    NSData *_wrappedKeyDataBackingStore;	// 56 = 0x38
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x004000000011074d
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 flagHandler:(id)arg4 error:(id *)arg5;	// IMP=0x001000000010fccb
+ (id)loadFromProtobuf:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010f9b7
+ (id)countsByClassWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010f7c3
+ (id)countsWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010f555
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000010f21f
+ (id)sqlColumns;	// IMP=0x001000000010f212
+ (id)sqlTable;	// IMP=0x001000000010f205
+ (id)localKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010f07d
+ (id)remoteKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010eef5
+ (id)allKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010ed8a
+ (id)currentKeysForClass:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000010eb76
+ (id)currentKeyForClass:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010ea8e
+ (id)selfWrappedKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010e8b3
+ (id)tryFromDatabaseAnyState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010e717
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010e558
+ (id)fromDatabaseAnyState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010e3bc
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010e1fd
+ (id)isItemKeyForKeychainView:(struct SecDbItem *)arg1;	// IMP=0x001000000010dec9
+ (id)randomKeyWrappedBySelf:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010de2b
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010dd09
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010dc7d
+ (id)loadKeyWithUUID:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000010dbbd
- (void).cxx_destruct;	// IMP=0x002000000010db48
@property(retain) NSData *wrappedKeyDataBackingStore; // @synthesize wrappedKeyDataBackingStore=_wrappedKeyDataBackingStore;
@property(retain) CKKSKeychainBackedKey *keycore; // @synthesize keycore=_keycore;
@property _Bool currentkey; // @synthesize currentkey=_currentkey;
@property(copy) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
@property(retain) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x001000000010d804
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010d771
- (id)sqlValues;	// IMP=0x001000000010d335
- (id)whereClauseToFindSelf;	// IMP=0x001000000010d1d1
- (id)description;	// IMP=0x000000000010d066
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000010cbbf
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000010c8af
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000010c577
- (id)CKRecordName;	// IMP=0x001000000010c565
- (_Bool)saveToDatabaseAsOnlyCurrentKeyForClassAndState:(id *)arg1;	// IMP=0x001000000010c2c4
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x001000000010c243
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x001000000010c1c2
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000010c138
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x001000000010c0b2
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010bfdf
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010bf0c
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010be5f
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010bdb2
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010bd11
- (_Bool)tlkMaterialPresentOrRecoverableViaTLKShareForContextID:(id)arg1 forTrustStates:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010b765
- (_Bool)validTLK:(id *)arg1;	// IMP=0x001000000010b5bf
- (_Bool)unwrapViaTLKSharesTrustedBy:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010afeb
- (id)unwrapViaKeyHierarchy:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010aa2e
- (id)unwrapViaKeyHierarchy:(id *)arg1;	// IMP=0x001000000010aa17
- (id)ensureKeyLoadedForContextID:(id)arg1 cache:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010a746
- (id)topKeyInAnyState:(id *)arg1;	// IMP=0x001000000010a407
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010a256
- (_Bool)wrapsSelf;	// IMP=0x001000000010a1e2
@property(readonly) NSString *zoneName;
@property(readonly) NSData *wrappedKeyData;
- (id)getKeychainBackedKey:(id *)arg1;	// IMP=0x0010000000109cdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000109a38
- (void)dealloc;	// IMP=0x0010000000109a09
- (id)initWithKeyCore:(id)arg1 contextID:(id)arg2 state:(id)arg3 currentkey:(_Bool)arg4;	// IMP=0x0010000000109830
- (id)initWithWrappedKeyData:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 state:(id)arg6 zoneID:(id)arg7 encodedCKRecord:(id)arg8 currentkey:(long long)arg9;	// IMP=0x00100000001096e8
- (id)initSelfWrappedWithAESKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 keyclass:(id)arg4 state:(id)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8;	// IMP=0x00100000001094d1
- (id)init;	// IMP=0x00100000001094a2

@end

