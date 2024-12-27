//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVValueTiming, NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerTimeController : NSObject
{
    NSObject<OS_dispatch_queue> *_seekQueue;	// 8 = 0x8
    _Bool _pendingSeek;	// 16 = 0x10
    CDStruct_1b6d18a9 _toleranceBefore;	// 20 = 0x14
    CDStruct_1b6d18a9 _toleranceAfter;	// 44 = 0x2c
    _Bool _seekingInternal;	// 68 = 0x44
    AVPlayer *_player;	// 72 = 0x48
    AVValueTiming *_timing;	// 80 = 0x50
    AVValueTiming *_minTiming;	// 88 = 0x58
    AVValueTiming *_maxTiming;	// 96 = 0x60
    AVObservationController *_observationController;	// 104 = 0x68
    CDStruct_1b6d18a9 _seekToTimeInternal;	// 112 = 0x70
}

+ (id)keyPathsForValuesAffectingReadyToPlay;	// IMP=0x00100000001611af
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;	// IMP=0x001000000016118f
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;	// IMP=0x0010000000161163
+ (id)keyPathsForValuesAffectingContentDuration;	// IMP=0x0010000000161143
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;	// IMP=0x0010000000161123
+ (id)keyPathsForValuesAffectingMaxTime;	// IMP=0x0010000000161103
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;	// IMP=0x00100000001610e3
- (void).cxx_destruct;	// IMP=0x0000000000160b68
@property(nonatomic) CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(nonatomic, getter=isSeekingInternal) _Bool seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property(retain, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)_updateMinAndMaxTiming;	// IMP=0x00000000001609e8
- (void)_updateTiming;	// IMP=0x00000000001607ee
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x000000000016073b
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) double seekToTime;
@property(readonly, nonatomic, getter=isSeeking) _Bool seeking;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool hasSeekableLiveStreamingContent;
@property(readonly, getter=isCompletelySeekable) _Bool completelySeekable;
@property(readonly, nonatomic) NSArray *seekableTimeRanges;
@property(readonly, nonatomic) double contentDurationWithinEndTimes;
@property(readonly, nonatomic) double contentDuration;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;	// IMP=0x0000000000160548
@property(readonly, nonatomic) double maxTime;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;	// IMP=0x000000000016043c
@property(readonly, nonatomic) double minTime;
- (void)stopTimingObservation;	// IMP=0x000000000016037e
- (void)startTimingObservation;	// IMP=0x00000000001601e8
- (void)dealloc;	// IMP=0x00000000001601a6
- (void)_commonInit;	// IMP=0x0000000000160157
- (id)initForIFramesWithPlayerItem:(id)arg1;	// IMP=0x00000000001600a7
- (id)initWithPlayer:(id)arg1;	// IMP=0x000000000015fffa

@end

