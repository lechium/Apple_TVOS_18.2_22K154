//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UPDProfileStoreClientRecord;
@protocol UPDProfileStore;

__attribute__((visibility("hidden")))
@interface UPDProfileStoreClient : NSObject
{
    UPDProfileStoreClientRecord *_record;	// 8 = 0x8
    id <UPDProfileStore> _store;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005433e
- (_Bool)_isAllowed:(CDUnknownBlockType)arg1 error:(out id *)arg2;	// IMP=0x00000000000542d6
- (oneway void)removeOrphanedAccountsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000541c3
- (oneway void)fetchAnonymousPersonaUniqueIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005404c
- (oneway void)removeAllProfileTombstonesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000053fa6
- (oneway void)canAddProfileForPrimary:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053ef1
- (oneway void)updateForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053e73
- (oneway void)fetchSnapshotForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053df5
- (oneway void)updateProfileForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053d77
- (oneway void)removeProfileForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053bef
- (oneway void)addProfileForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053b71
- (oneway void)fetchProfilesForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053af3
- (oneway void)fetchConfigurationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000053a7b
- (_Bool)removeAllProfileTombstonesAndReturnError:(out id *)arg1;	// IMP=0x00000000000539b6
- (_Bool)canAddProfileForPrimary:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000538b5
- (id)updateForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000537b2
- (id)snapshotForFetchRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000536af
- (id)updateProfileForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000535ac
- (id)removeProfileForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000534a9
- (id)addProfileForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000533a6
- (id)profilesForFetchRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000053263
- (id)configurationWithError:(out id *)arg1;	// IMP=0x00000000000531ec
- (void)invalidate;	// IMP=0x00000000000531e6
- (id)initWithRecord:(id)arg1 store:(id)arg2;	// IMP=0x0000000000052f07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

