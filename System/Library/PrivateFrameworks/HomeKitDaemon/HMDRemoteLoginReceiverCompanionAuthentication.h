//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginCompanionAuthenticationRequest;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginReceiverCompanionAuthentication
{
    HMDRemoteLoginCompanionAuthenticationRequest *_request;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0060000000612d32
- (void).cxx_destruct;	// IMP=0x0000000000612b53
@property(readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticateAccount:(id)arg1 alreadyExists:(_Bool)arg2 withCompanionDevice:(id)arg3;	// IMP=0x00000000006127a5
- (void)_authenticate;	// IMP=0x000000000061269a
- (void)authenticate;	// IMP=0x0000000000612629
- (id)description;	// IMP=0x000000000061256f
- (void)dealloc;	// IMP=0x0000000000612465
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x00000000006123ce

@end

