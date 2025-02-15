//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMap, IDSRegistrationKeychainManager, NSDictionary, NSMapTable;
@protocol OS_dispatch_queue;

@interface IDSUserStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSPersistentMap *_persistentMap;	// 16 = 0x10
    IDSRegistrationKeychainManager *_registrationKeychainManager;	// 24 = 0x18
    NSMapTable *_realmByListener;	// 32 = 0x20
    NSDictionary *_dataProviderByRealm;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000026a658
@property(retain, nonatomic) NSDictionary *dataProviderByRealm; // @synthesize dataProviderByRealm=_dataProviderByRealm;
@property(retain, nonatomic) NSMapTable *realmByListener; // @synthesize realmByListener=_realmByListener;
@property(retain, nonatomic) IDSRegistrationKeychainManager *registrationKeychainManager; // @synthesize registrationKeychainManager=_registrationKeychainManager;
@property(retain, nonatomic) IDSPersistentMap *persistentMap; // @synthesize persistentMap=_persistentMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeActionListener:(id)arg1;	// IMP=0x001000000026a5bb
- (void)addActionListener:(id)arg1 forRealm:(long long)arg2;	// IMP=0x001000000026a53b
- (void)addActionListener:(id)arg1;	// IMP=0x001000000026a51b
- (void)_iterateByRealm:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000026a343
- (void)setProperties:(id)arg1 forUser:(id)arg2;	// IMP=0x001000000026a023
- (id)propertiesForUser:(id)arg1;	// IMP=0x0010000000269f96
- (void)silentlySetAuthenticationCertificate:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000269eb7
- (void)setAuthenticationCertificate:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000269d1c
- (id)authenticationCertificateForUser:(id)arg1;	// IMP=0x0010000000269c37
- (void)setCredential:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000269994
- (id)credentialForUser:(id)arg1;	// IMP=0x00100000002697d9
- (id)_stringRepresentationOfUserRealm:(long long)arg1;	// IMP=0x00100000002697b5
- (void)_removeUser:(id)arg1;	// IMP=0x001000000026956b
- (void)_addUser:(id)arg1;	// IMP=0x0010000000269289
- (void)_updateUsersForCurrentUsers:(id)arg1 updatedUsers:(id)arg2;	// IMP=0x0010000000268c9a
- (void)updateUser:(id)arg1;	// IMP=0x0010000000268981
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x00100000002688be
- (void)reloadUsersForRealm:(long long)arg1;	// IMP=0x0010000000268682
- (void)reloadUsers;	// IMP=0x0010000000268637
- (void)persistUsersImmediately;	// IMP=0x0010000000268621
- (id)userWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000002685c6
- (id)usersWithRealms:(id)arg1;	// IMP=0x0010000000268429
- (id)usersWithRealm:(long long)arg1;	// IMP=0x00100000002682fd
- (id)debugDescription;	// IMP=0x0010000000268269
- (id)description;	// IMP=0x001000000026821b
- (void)setDataProvider:(id)arg1 forRealm:(long long)arg2;	// IMP=0x00100000002680fa
- (id)initWithQueue:(id)arg1 persister:(id)arg2 registrationKeychainManager:(id)arg3;	// IMP=0x0010000000267861
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000002677af

@end

