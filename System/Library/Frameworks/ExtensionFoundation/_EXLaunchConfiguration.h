//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString, _EXExtensionIdentity, _EXExtensionInstanceIdentifier, _EXPersona;

__attribute__((visibility("hidden")))
@interface _EXLaunchConfiguration : NSObject
{
    MISSING_TYPE *_extensionIdentity;	// 8 = 0x8
    MISSING_TYPE *instanceIdentifier;	// 16 = 0x10
    MISSING_TYPE *preferredLanguages;	// 24 = 0x18
    MISSING_TYPE *sandboxProfileName;	// 32 = 0x20
    MISSING_TYPE *additionalEnvironmentVariables;	// 48 = 0x30
    MISSING_TYPE *launchPersona;	// 56 = 0x38
    MISSING_TYPE *assertionAttributes;	// 64 = 0x40
    MISSING_TYPE *networkApplicationID;	// 705200 = 0xac2b0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000005d590
+ (_Bool)configureLaunchContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005f8e0
+ (_Bool)configureRBInfoOnLaunchContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005f8c0
- (void).cxx_destruct;	// IMP=0x000000000005dac0
- (id)init;	// IMP=0x000000000005da40
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isLaunchConfigurationEqual:(id)arg1;	// IMP=0x000000000005d830
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d6a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005d540
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005cdf0
- (id)initWithExtensionIdentity:(id)arg1;	// IMP=0x000000000005cdb0
@property(nonatomic, copy) NSArray *assertionAttributes;
@property(nonatomic, copy) _EXPersona *launchPersona; // @synthesize launchPersona;
@property(nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property(nonatomic, copy) NSString *sandboxProfileName;
@property(nonatomic, copy) NSArray *preferredLanguages;
@property(nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier; // @synthesize instanceIdentifier;
@property(nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
- (id)rbsProcessIdentityWithHost:(id)arg1;	// IMP=0x000000000005e6c0

@end

