//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CTXPCCreateEncryptedIdentityRequest
{
}

- (int)requiredEntitlement;	// IMP=0x0000000000175f11
@property(readonly, nonatomic) NSString *identity;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000175c83
- (id)initWithContext:(id)arg1 identity:(id)arg2;	// IMP=0x0000000000175b6f

@end

