//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCGetRemotePlanSignupInfoRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x008000000005fa6b
- (long long)userConsent;	// IMP=0x000000000005faf9
- (int)requiredEntitlement;	// IMP=0x000000000005fa60
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005f86a
- (id)initWithContext:(id)arg1 userConsent:(long long)arg2;	// IMP=0x000000000005f732

@end

