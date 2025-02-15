//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayActivityFeedEventConsumer : NSObject
{
    NSArray *_allowedBundleIds;	// 8 = 0x8
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 16 = 0x10
    NSMutableArray *_radioPlayActivityEvents;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x0010000000246bde
- (void).cxx_destruct;	// IMP=0x000000000024490a
@property(readonly, nonatomic) NSMutableArray *radioPlayActivityEvents; // @synthesize radioPlayActivityEvents=_radioPlayActivityEvents;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (_Bool)_finalizePAFEvents:(id)arg1;	// IMP=0x000000000024482c
- (void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2;	// IMP=0x000000000024478c
- (void)_updatePAFEvent:(id)arg1 withSharedListeningInfoFromCursor:(id)arg2;	// IMP=0x0000000000244215
- (void)_updatePAFEvent:(id)arg1 withAudioChangeEvent:(id)arg2;	// IMP=0x0000000000243e90
- (void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2;	// IMP=0x00000000002432e6
- (_Bool)_vocalControlIsOnForEvent:(id)arg1;	// IMP=0x0000000000243041
- (void)_updatePAFEvent:(id)arg1 withVocalAttenuationInfoForEndEvent:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000024241a
- (void)_updatePAFEvent:(id)arg1 withEnqueuerAccountIdentifier:(id)arg2 queueAddEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x0000000000241d1c
- (void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x0000000000241a00
- (void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 forEventType:(id)arg5;	// IMP=0x00000000002401b4
- (void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4;	// IMP=0x000000000023fc8a
- (void)_sendPlayEndNotificationWithStartTime:(double)arg1 endTime:(double)arg2 pafEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x000000000023f81f
- (double)_getPlaybackDurationForHLSStreamFromStartEvent:(id)arg1 toEndEvent:(id)arg2 withLimitedCursor:(id)arg3;	// IMP=0x000000000023f579
- (double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x000000000023e69d
- (id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000023e55b
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1;	// IMP=0x000000000023d87b
- (_Bool)_itemIsPlaceholderFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000023d743
- (_Bool)_itemWithinHLSTimedMetadataBeginFromQueueSection:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000023d4f9
- (_Bool)_itemIsPlayingFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;	// IMP=0x000000000023d1cc
- (_Bool)_handleApplicationTerminationEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x000000000023ccb0
- (id)_generatePlaybackEndEventFromEvent:(id)arg1 withQueueSectionIdentifier:(id)arg2 itemIdentifier:(id)arg3 cursor:(id)arg4;	// IMP=0x000000000023babb
- (_Bool)_handleItemEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x000000000023b7e4
- (_Bool)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x000000000023a5ac
- (_Bool)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000002391fb
- (_Bool)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000000238584
- (void)_updateAllowedBundleIdsIfNecessary:(id)arg1;	// IMP=0x00000000002383e1
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x000000000023835c
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000238342
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000002381ae
- (id)init;	// IMP=0x0000000000238098

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

