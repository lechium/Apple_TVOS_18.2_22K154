//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCActivateProximityTransferRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x00800000000601d5
- (unsigned long long)endpoint;	// IMP=0x0000000000060263
- (int)requiredEntitlement;	// IMP=0x00000000000601ca
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000600c9
- (id)initWithEndpoint:(unsigned long long)arg1;	// IMP=0x000000000005ffbc

@end

