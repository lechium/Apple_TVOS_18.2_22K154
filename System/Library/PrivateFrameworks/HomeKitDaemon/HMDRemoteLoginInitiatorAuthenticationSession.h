//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginInitiatorAuthentication;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiatorAuthenticationSession
{
    HMDRemoteLoginInitiatorAuthentication *_remoteAuthentication;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000065556b
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) HMDRemoteLoginInitiatorAuthentication *remoteAuthentication; // @synthesize remoteAuthentication=_remoteAuthentication;
- (id)description;	// IMP=0x00000000006554dd
- (void)dealloc;	// IMP=0x00000000006553d3
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000655322

@end

