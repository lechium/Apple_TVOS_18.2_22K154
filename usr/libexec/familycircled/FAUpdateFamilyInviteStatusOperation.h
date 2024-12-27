//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface FAUpdateFamilyInviteStatusOperation
{
    NSString *_inviteCode;	// 8 = 0x8
    long long _inviteStatus;	// 16 = 0x10
    NSDictionary *_additionalRequestParameters;	// 24 = 0x18
    long long _responseFormat;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000005db1
@property(readonly) long long responseFormat; // @synthesize responseFormat=_responseFormat;
@property(readonly, copy) NSDictionary *additionalRequestParameters; // @synthesize additionalRequestParameters=_additionalRequestParameters;
@property(readonly) long long inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(readonly, copy) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (id)updateInviteStatus;	// IMP=0x00100000000059a8
- (id)_userActionWithInviteStatus:(long long)arg1;	// IMP=0x0010000000005982
- (id)initWithNetworkService:(id)arg1 inviteCode:(id)arg2 inviteStatus:(long long)arg3 responseFormat:(long long)arg4 additionalRequestParameters:(id)arg5;	// IMP=0x00100000000058b0

@end

