//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchOrganizationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004fdaf
+ (id)requiredEntitlements;	// IMP=0x001000000004fc77
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004fc45
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000004fc8f
- (unsigned long long)queueGroup;	// IMP=0x001000000004fc84

@end

