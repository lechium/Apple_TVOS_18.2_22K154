//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, UPCandidateProfile, UPCandidateProfileStoreSnapshot, UPFetchCandidateProfileStoreSnapshotRequest, UPFetchCandidateProfilesRequest, UPUpdateCandidateProfileRequest, UPUpdateCandidateProfileStoreRequest, UPUpdateCandidateProfileStoreResponse;
@protocol BSInvalidatable, UPCandidateProfileStoreSourceObserver;

@protocol UPCandidateProfileStoreSource
- (void)updateForRequest:(UPUpdateCandidateProfileStoreRequest *)arg1 completion:(void (^)(UPUpdateCandidateProfileStoreResponse *, NSError *))arg2;
- (void)fetchSnapshotForRequest:(UPFetchCandidateProfileStoreSnapshotRequest *)arg1 completion:(void (^)(UPCandidateProfileStoreSnapshot *, NSError *))arg2;
- (void)updateCandidateProfileForRequest:(UPUpdateCandidateProfileRequest *)arg1 completion:(void (^)(UPCandidateProfile *, NSError *))arg2;
- (void)fetchCandidateProfilesForRequest:(UPFetchCandidateProfilesRequest *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (UPUpdateCandidateProfileStoreResponse *)updateForRequest:(UPUpdateCandidateProfileStoreRequest *)arg1 error:(out id *)arg2;
- (UPCandidateProfileStoreSnapshot *)snapshotForFetchRequest:(UPFetchCandidateProfileStoreSnapshotRequest *)arg1 error:(out id *)arg2;
- (UPCandidateProfile *)updateCandidateProfileForRequest:(UPUpdateCandidateProfileRequest *)arg1 error:(out id *)arg2;
- (NSSet *)candidateProfilesForFetchRequest:(UPFetchCandidateProfilesRequest *)arg1 error:(out id *)arg2;
- (id <BSInvalidatable>)addObserver:(id <UPCandidateProfileStoreSourceObserver>)arg1;
@end

