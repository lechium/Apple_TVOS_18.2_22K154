//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CTXPCSubscriberGetPseudoIdentityRequest
{
}

- (int)requiredEntitlement;	// IMP=0x0000000000176554
@property(readonly, nonatomic) NSString *service;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001762c6
- (id)initWithContext:(id)arg1 service:(id)arg2;	// IMP=0x00000000001761b2

@end

