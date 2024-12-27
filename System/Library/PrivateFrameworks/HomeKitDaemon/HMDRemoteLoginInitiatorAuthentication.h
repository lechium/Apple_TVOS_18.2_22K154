//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiatorAuthentication
{
    id <HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0060000000e04332
- (void).cxx_destruct;	// IMP=0x0000000000e04321
@property(readonly, nonatomic) __weak id <HMDRemoteLoginInitiatorAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000000e04165
- (void)authenticate;	// IMP=0x0000000000e040bd
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;	// IMP=0x0000000000e0402f

@end

