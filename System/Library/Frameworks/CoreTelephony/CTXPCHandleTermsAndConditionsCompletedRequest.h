//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCHandleTermsAndConditionsCompletedRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0080000000055069
- (_Bool)consented;	// IMP=0x0000000000055214
- (id)sourceIccid;	// IMP=0x0000000000055176
- (int)requiredEntitlement;	// IMP=0x000000000005505e
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054f25
- (id)initWithSourceIccid:(id)arg1 consented:(_Bool)arg2;	// IMP=0x0000000000054de0

@end

