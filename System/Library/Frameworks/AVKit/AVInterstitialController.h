//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVPlayerInterstitialEventController, AVPlayerInterstitialEventMonitor, AVPlayerTimeController, AVTimeRange, AVTimeRangeCollection;
@protocol AVInterstitialControllerDelegateManager, AVTimeControlling, NSObject;

__attribute__((visibility("hidden")))
@interface AVInterstitialController : NSObject
{
    id <NSObject> _playerItemTimeJumpedObserver;	// 8 = 0x8
    id <NSObject> _playerInterstitialPlayerDidChangeObserver;	// 16 = 0x10
    id <NSObject> _playerInterstitialEventsChangedObserver;	// 24 = 0x18
    id <NSObject> _playerInterstitialCurrentEventChangedObserver;	// 32 = 0x20
    _Bool _shouldAlwaysSkipInterstitials;	// 40 = 0x28
    AVPlayer *_player;	// 48 = 0x30
    AVPlayer *_interstitialPlayer;	// 56 = 0x38
    id <AVInterstitialControllerDelegateManager> _delegateManager;	// 64 = 0x40
    AVTimeRangeCollection *_interstitialTimeRangeCollection;	// 72 = 0x48
    double _continuationTimeAfterInterstitial;	// 80 = 0x50
    CDUnknownBlockType _didEnterInterstitialTimeRangeBlock;	// 88 = 0x58
    CDUnknownBlockType _didLeaveInterstitialTimeRangeBlock;	// 96 = 0x60
    CDUnknownBlockType _didLeaveRequiredInterstitialTimeRangeBlock;	// 104 = 0x68
    CDUnknownBlockType _skipInterstitialTimeRangeBlock;	// 112 = 0x70
    AVPlayerTimeController<AVTimeControlling> *_interstitialTimingController;	// 120 = 0x78
    AVPlayerInterstitialEventMonitor *_eventMonitor;	// 128 = 0x80
    AVPlayerInterstitialEventController *_eventController;	// 136 = 0x88
    AVObservationController *_kvo;	// 144 = 0x90
    AVObservationController *_kvoPlayerItem;	// 152 = 0x98
    AVTimeRange *_interstitialTimeRangeInProgress;	// 160 = 0xa0
    id _interstitialBoundaryTimeObserver;	// 168 = 0xa8
}

+ (id)interstitialQueue;	// IMP=0x006000000007308a
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1 reversePlaybackEndTime:(CDStruct_1b6d18a9)arg2 forwardPlaybackEndTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x0060000000072bc4
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1;	// IMP=0x006000000015ff0e
- (void).cxx_destruct;	// IMP=0x00000000000707d4
@property(retain, nonatomic) id interstitialBoundaryTimeObserver; // @synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver;
@property(retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // @synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress;
@property(retain, nonatomic) AVObservationController *kvoPlayerItem; // @synthesize kvoPlayerItem=_kvoPlayerItem;
@property(retain, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(retain, nonatomic) AVPlayerInterstitialEventController *eventController; // @synthesize eventController=_eventController;
@property(retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(readonly, nonatomic) AVPlayerTimeController<AVTimeControlling> *interstitialTimingController; // @synthesize interstitialTimingController=_interstitialTimingController;
@property(nonatomic) _Bool shouldAlwaysSkipInterstitials; // @synthesize shouldAlwaysSkipInterstitials=_shouldAlwaysSkipInterstitials;
@property(copy, nonatomic) CDUnknownBlockType skipInterstitialTimeRangeBlock; // @synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveRequiredInterstitialTimeRangeBlock; // @synthesize didLeaveRequiredInterstitialTimeRangeBlock=_didLeaveRequiredInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveInterstitialTimeRangeBlock; // @synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterInterstitialTimeRangeBlock; // @synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock;
@property(readonly, nonatomic) double continuationTimeAfterInterstitial; // @synthesize continuationTimeAfterInterstitial=_continuationTimeAfterInterstitial;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(nonatomic) __weak id <AVInterstitialControllerDelegateManager> delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayer *interstitialPlayer; // @synthesize interstitialPlayer=_interstitialPlayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (double)_pendingTimeBoundary;	// IMP=0x0000000000070590
- (void)_setPendingTimeBoundary:(double)arg1;	// IMP=0x00000000000704ec
- (void)didPresentInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000070244
- (void)willPresentInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000070016
- (void)skipInterstitialTimeRange:(id)arg1;	// IMP=0x000000000006fdc3
- (void)didBeginOrResumePlayback;	// IMP=0x000000000006fcd0
- (_Bool)_shouldSkipInterstitialTimeRange:(id)arg1;	// IMP=0x000000000006fc12
- (id)nextInterstitialTimeRange;	// IMP=0x000000000006fba9
@property(readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
- (void)_stopObservingInterstitialTimeRanges;	// IMP=0x000000000006f9b3
- (void)_startObservingInterstitialTimeRanges;	// IMP=0x000000000006f937
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;	// IMP=0x000000000006f844
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;	// IMP=0x000000000006f77f
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1;	// IMP=0x000000000006f6d2
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)arg1;	// IMP=0x000000000006f686
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)arg1;	// IMP=0x000000000006f50c
- (double)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x000000000006f16b
@property(readonly, nonatomic) _Bool requiresLinearPlayback;
@property(readonly, nonatomic) _Bool shouldEnforceInterstitialPolicy;
- (void)_updateInterstitialTimeRangeCollection;	// IMP=0x000000000006ed1a
- (void)cancelCurrentPlayerInterstitialEvent;	// IMP=0x000000000006ec07
@property(readonly, nonatomic) double timeRemainingInCurrentInterstitial;
- (double)elapsedTimeWithinCurrentInterstitial;	// IMP=0x000000000006e98f
- (double)elapsedTimeForInterstitialPlayer;	// IMP=0x000000000006e88c
- (_Bool)isLive;	// IMP=0x000000000006e7e2
- (id)currentOrEstimatedDate;	// IMP=0x000000000006e73a
@property(readonly, nonatomic) double currentDisplayTime;
- (double)currentTime;	// IMP=0x000000000006e5d6
- (id)currentItem;	// IMP=0x000000000006e586
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x000000000006e52f
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x000000000006e4d8
- (void)_performInterstitialPlayerDependentUpdates;	// IMP=0x000000000006e27c
- (void)invalidate;	// IMP=0x000000000006e093
- (void)dealloc;	// IMP=0x000000000006e055
- (void)setupInterstitialObservers;	// IMP=0x000000000006ddaf
- (id)init;	// IMP=0x000000000006dabd
- (_Bool)loadDurationOfCurrentOrNextInterstitialEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000007218a
- (id)timeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x0000000000071f3f
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x0000000000071d36
- (void)updateSynthesizedInterstitialTimeRanges;	// IMP=0x0000000000071bdb
- (id)_copySynthesizedInterstitialTimeRanges;	// IMP=0x00000000000717dd

@end

