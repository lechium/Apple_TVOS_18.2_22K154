//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, UPFetchCandidateProfilesRequest, UPUpdateCandidateProfileRequest;

@protocol UPDCandidateProfileStoreRequestValidating
- (_Bool)validateUpdateCandidateProfileRequest:(UPUpdateCandidateProfileRequest *)arg1 error:(out id *)arg2;
- (_Bool)validateFetchedCandidateProfiles:(NSSet *)arg1 usingRequest:(UPFetchCandidateProfilesRequest *)arg2 error:(out id *)arg3;
@end

