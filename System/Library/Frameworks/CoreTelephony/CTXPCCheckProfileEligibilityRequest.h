//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCCheckProfileEligibilityRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x008000000005bb8b
- (id)metadata;	// IMP=0x000000000005bce9
- (id)smdpUrl;	// IMP=0x000000000005bc19
- (int)requiredEntitlement;	// IMP=0x000000000005bb80
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b9b3
- (id)initWithSmdpURL:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000005b8bd

@end

