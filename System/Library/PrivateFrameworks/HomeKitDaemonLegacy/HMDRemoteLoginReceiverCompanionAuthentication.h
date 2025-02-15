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

+ (id)logCategory;	// IMP=0x006000000046bc14
- (void).cxx_destruct;	// IMP=0x000000000046ba35
@property(readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticateAccount:(id)arg1 alreadyExists:(_Bool)arg2 withCompanionDevice:(id)arg3;	// IMP=0x000000000046b687
- (void)_authenticate;	// IMP=0x000000000046b57c
- (void)authenticate;	// IMP=0x000000000046b50b
- (id)description;	// IMP=0x000000000046b451
- (void)dealloc;	// IMP=0x000000000046b347
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x000000000046b2b0

@end

