//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC15GroupActivities14PlaybackSyncer27AVCoordinatorDelegateBridge : NSObject
{
    MISSING_TYPE *localParticipantID;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 1953718111 = 0x74735f5f
}

- (void).cxx_destruct;	// IMP=0x00000000000463d0
- (id)init;	// IMP=0x0000000000046370
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046210
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;	// IMP=0x0000000000046030
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;	// IMP=0x0000000000045e30
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;	// IMP=0x0000000000045cd0
- (void)playbackCoordinator:(id)arg1 promptForLeaveOrEndSessionAllowingCancellation:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046820

@end

