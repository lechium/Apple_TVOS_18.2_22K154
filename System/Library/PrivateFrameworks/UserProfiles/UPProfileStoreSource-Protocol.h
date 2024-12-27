//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, UPAddProfileRequest, UPFetchProfileStoreSnapshotRequest, UPFetchProfilesRequest, UPProfile, UPProfileStoreConfiguration, UPProfileStoreSnapshot, UPRemoveProfileRequest, UPUpdateProfileRequest, UPUpdateProfileStoreRequest, UPUpdateProfileStoreResponse;
@protocol BSInvalidatable, UPProfileStoreSourceObserver;

@protocol UPProfileStoreSource
- (void)removeOrphanedAccountsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)fetchAnonymousPersonaUniqueIdentifierWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)removeAllProfileTombstonesWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)updateForRequest:(UPUpdateProfileStoreRequest *)arg1 completion:(void (^)(UPUpdateProfileStoreResponse *, NSError *))arg2;
- (void)fetchSnapshotForRequest:(UPFetchProfileStoreSnapshotRequest *)arg1 completion:(void (^)(UPProfileStoreSnapshot *, NSError *))arg2;
- (void)updateProfileForRequest:(UPUpdateProfileRequest *)arg1 completion:(void (^)(UPProfile *, NSError *))arg2;
- (void)removeProfileForRequest:(UPRemoveProfileRequest *)arg1 completion:(void (^)(UPProfile *, NSError *))arg2;
- (void)addProfileForRequest:(UPAddProfileRequest *)arg1 completion:(void (^)(UPProfile *, NSError *))arg2;
- (void)canAddProfileForPrimary:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchProfilesForRequest:(UPFetchProfilesRequest *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchConfigurationWithCompletion:(void (^)(UPProfileStoreConfiguration *, NSError *))arg1;
- (_Bool)removeAllProfileTombstonesAndReturnError:(out id *)arg1;
- (UPUpdateProfileStoreResponse *)updateForRequest:(UPUpdateProfileStoreRequest *)arg1 error:(out id *)arg2;
- (UPProfileStoreSnapshot *)snapshotForFetchRequest:(UPFetchProfileStoreSnapshotRequest *)arg1 error:(out id *)arg2;
- (UPProfile *)updateProfileForRequest:(UPUpdateProfileRequest *)arg1 error:(out id *)arg2;
- (UPProfile *)removeProfileForRequest:(UPRemoveProfileRequest *)arg1 error:(out id *)arg2;
- (UPProfile *)addProfileForRequest:(UPAddProfileRequest *)arg1 error:(out id *)arg2;
- (_Bool)canAddProfileForPrimary:(_Bool)arg1 error:(out id *)arg2;
- (NSSet *)profilesForFetchRequest:(UPFetchProfilesRequest *)arg1 error:(out id *)arg2;
- (UPProfileStoreConfiguration *)configurationWithError:(out id *)arg1;
- (id <BSInvalidatable>)addObserver:(id <UPProfileStoreSourceObserver>)arg1;
@end

