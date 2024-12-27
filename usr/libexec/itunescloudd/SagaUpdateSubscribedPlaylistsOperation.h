//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaUpdateSubscribedPlaylistsOperation
{
    NSArray *_playlistSagaIDs;	// 8 = 0x8
    _Bool _ignoreMinRefreshInterval;	// 16 = 0x10
    long long _requestReason;	// 24 = 0x18
    _Bool _pinnedOnly;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000964e2
- (void)main;	// IMP=0x0010000000096160
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 subscribedPlaylistSagaIDs:(id)arg3 ignoreMinRefreshInterval:(_Bool)arg4 requestReason:(long long)arg5 pinnedOnly:(_Bool)arg6;	// IMP=0x00100000000960a2
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 subscribedPlaylistSagaIDs:(id)arg3 ignoreMinRefreshInterval:(_Bool)arg4 requestReason:(long long)arg5;	// IMP=0x0010000000096086
- (id)initWithClientIdentity:(id)arg1 SubscribedPlaylistSagaIDs:(id)arg2 ignoreMinRefreshInterval:(_Bool)arg3 requestReason:(long long)arg4;	// IMP=0x0010000000095fe8

@end

