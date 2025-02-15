//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUserDefaults, PCSAccountsModel, UserRegistryDB;

@interface PCSKeySyncing : NSObject
{
    NSUserDefaults *_settings;	// 8 = 0x8
    PCSAccountsModel *_accounts;	// 16 = 0x10
    UserRegistryDB *_database;	// 24 = 0x18
    NSMutableArray *_notifyHooks;	// 32 = 0x20
}

+ (id)defaultSyncingManager;	// IMP=0x004000000000f962
- (void).cxx_destruct;	// IMP=0x0020000000011629
@property(retain) NSMutableArray *notifyHooks; // @synthesize notifyHooks=_notifyHooks;
@property(retain) UserRegistryDB *database; // @synthesize database=_database;
@property(retain) PCSAccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
- (id)allClients;	// IMP=0x00100000000113b2
- (void)updateProtocolVersionIfNeeded:(id)arg1;	// IMP=0x00100000000112de
- (_Bool)saveClient:(id)arg1;	// IMP=0x00100000000110fa
- (void)updateClient:(id)arg1;	// IMP=0x0010000000010f4d
- (id)getClientWithIdentifier:(id)arg1;	// IMP=0x0010000000010e2e
- (id)copySHA256Hash:(id)arg1;	// IMP=0x0010000000010d6d
- (id)outStandingPCSKeys:(id)arg1;	// IMP=0x0010000000010cee
- (id)syncDevices;	// IMP=0x0010000000010c9e
- (_Bool)updateSyncedKeysToDevice:(id)arg1 type:(int)arg2 keys:(id)arg3;	// IMP=0x0010000000010ab9
- (_Bool)updateSyncDevice:(id)arg1 version:(id)arg2;	// IMP=0x00100000000109b0
- (void)syncKeysWithDatabase;	// IMP=0x00100000000103d7
- (id)copyAllPCSKeys:(id *)arg1;	// IMP=0x001000000001032f
- (_Bool)setCompanionCircleMember:(_Bool)arg1;	// IMP=0x0010000000010327
- (_Bool)companionCircleMember;	// IMP=0x001000000001031f
- (_Bool)setiCDPStatus:(_Bool)arg1;	// IMP=0x001000000001024e
- (_Bool)iCDPStatus;	// IMP=0x0010000000010183
- (_Bool)storePCSKeyData:(id)arg1 current:(_Bool)arg2;	// IMP=0x001000000000ff6f
- (id)pcsKeyData:(id)arg1;	// IMP=0x001000000000fdc3
- (struct _PCSIdentitySetData *)copyIdentitySet;	// IMP=0x001000000000fc4a
- (void)signalComplete:(id)arg1;	// IMP=0x001000000000fba1
- (void)addUpdateNotify:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fb14
- (id)dsid;	// IMP=0x001000000000fac4
- (id)userRegistry;	// IMP=0x001000000000fa64
- (id)init;	// IMP=0x001000000000f9b7

@end

