//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCHandleUserEnteredOtpRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0080000000055559
- (id)otp;	// IMP=0x0000000000055685
- (id)sourceIccid;	// IMP=0x00000000000555e7
- (int)requiredEntitlement;	// IMP=0x000000000005554e
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000553fe
- (id)initWithSourceIccid:(id)arg1 otp:(id)arg2;	// IMP=0x00000000000552de

@end

