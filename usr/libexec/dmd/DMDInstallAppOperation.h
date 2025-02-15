//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDAppMetadata;

@interface DMDInstallAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)appIdentityForBundleIdentifier:(id)arg1 persona:(id)arg2;	// IMP=0x0040000000051880
+ (id)requiredEntitlements;	// IMP=0x001000000005145a
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000051428
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000512de
- (void).cxx_destruct;	// IMP=0x0020000000051e4f
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_resumeInstallationForRequest:(id)arg1;	// IMP=0x0010000000051d2f
- (void)_runWithRequest:(id)arg1;	// IMP=0x0010000000051b04
- (void)installAppForRequest:(id)arg1;	// IMP=0x001000000005190c
- (_Bool)appCoordinatorExistsForBundleIdentifier:(id)arg1 persona:(id)arg2;	// IMP=0x001000000005171b
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000051467

@end

