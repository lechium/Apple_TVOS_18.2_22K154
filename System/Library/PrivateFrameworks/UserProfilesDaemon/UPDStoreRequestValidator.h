//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UPDStoreRequestValidator : NSObject
{
}

- (_Bool)_validatePreferredLanguagesSetting:(id)arg1 preferredInputModesSetting:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000181ed
- (_Bool)_validateSetting:(id)arg1 isProfilesRequest:(_Bool)arg2 error:(out id *)arg3;	// IMP=0x0000000000017f67
- (_Bool)_validateSettings:(id)arg1 isProfilesRequest:(_Bool)arg2 error:(out id *)arg3;	// IMP=0x0000000000017d6d
- (_Bool)validateUpdateCandidateProfileRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000017b61
- (_Bool)validateFetchedCandidateProfiles:(id)arg1 usingRequest:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000001796d
- (_Bool)validateUpdateProfileRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000017364
- (_Bool)validateAddProfileRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000017063
- (_Bool)validateFetchProfilesRequest:(id)arg1 fetchedProfiles:(id)arg2 error:(out id *)arg3;	// IMP=0x0000000000016e1e

@end

