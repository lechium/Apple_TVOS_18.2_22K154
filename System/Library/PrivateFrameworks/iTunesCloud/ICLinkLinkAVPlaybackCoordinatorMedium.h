//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerPlaybackCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface ICLinkLinkAVPlaybackCoordinatorMedium
{
    AVPlayerPlaybackCoordinator *_playbackCoordinator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000099e67
@property(readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000099e3e
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;	// IMP=0x0000000000099e26
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;	// IMP=0x0000000000099e11
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;	// IMP=0x0000000000099d4f
- (void)clearCoordinationMediumDelegate;	// IMP=0x0000000000099d30
- (void)removeParticipant:(id)arg1;	// IMP=0x0000000000099d13
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x0000000000099cf6
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x0000000000099cd9
- (void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:(id)arg1;	// IMP=0x0000000000099976
- (_Bool)isCoordinatorSuspended;	// IMP=0x0000000000099923
- (id)initWithPlaybackCoordinator:(id)arg1 liveLink:(id)arg2;	// IMP=0x000000000009982f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

