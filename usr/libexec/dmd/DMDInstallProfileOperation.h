//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDInstallProfileOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000005493e
+ (id)requiredEntitlements;	// IMP=0x0010000000054931
+ (id)whitelistedClassesForRequest;	// IMP=0x00100000000548ff
- (void)_installInteractiveProfile:(id)arg1;	// IMP=0x0020000000054f89
- (void)_installSilentProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 personaID:(id)arg3;	// IMP=0x0010000000054c2b
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000054add

@end

