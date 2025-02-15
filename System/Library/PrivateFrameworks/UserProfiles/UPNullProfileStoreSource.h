//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UPNullProfileStoreSource : NSObject
{
}

- (void)removeOrphanedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f904
- (void)fetchAnonymousPersonaUniqueIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f8f7
- (void)removeAllProfileTombstonesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f8ea
- (void)updateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f8dd
- (void)fetchSnapshotForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f8d0
- (void)updateProfileForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f8c3
- (void)removeProfileForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f8b6
- (void)addProfileForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f8a9
- (void)canAddProfileForPrimary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f89c
- (void)fetchProfilesForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f88f
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f828
- (_Bool)removeAllProfileTombstonesAndReturnError:(out id *)arg1;	// IMP=0x000000000002f818
- (id)updateForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000002f80b
- (id)snapshotForFetchRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000002f7fe
- (id)updateProfileForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000002f7f1
- (id)removeProfileForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000002f7e4
- (id)addProfileForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000002f7d7
- (_Bool)canAddProfileForPrimary:(_Bool)arg1 error:(out id *)arg2;	// IMP=0x000000000002f795
- (id)profilesForFetchRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000002f788
- (id)configurationWithError:(out id *)arg1;	// IMP=0x000000000002f747
- (id)addObserver:(id)arg1;	// IMP=0x000000000002f72e

@end

