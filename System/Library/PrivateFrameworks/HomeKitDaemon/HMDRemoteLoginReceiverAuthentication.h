//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDRemoteLoginReceiverAuthenticationDelegate;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginReceiverAuthentication
{
    id <HMDRemoteLoginReceiverAuthenticationDelegate> _delegate;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0060000000a454e5
- (void).cxx_destruct;	// IMP=0x0000000000a45092
@property(readonly, nonatomic) __weak id <HMDRemoteLoginReceiverAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_completedAuthenticationRequest:(id)arg1 loggedInAccount:(id)arg2;	// IMP=0x0000000000a44f26
- (void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 targetedAccountType:(unsigned long long)arg3;	// IMP=0x0000000000a44d53
- (void)_authenticateAccount:(id)arg1 targetedAccountType:(unsigned long long)arg2;	// IMP=0x0000000000a44b95
- (void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a44b83
- (void)_authenticateForAccountType:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a4490e
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a446be
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;	// IMP=0x0000000000a44630

@end

