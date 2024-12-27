//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTimer;
@protocol AVTimeControlling;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerTimeResolver : NSObject
{
    id <AVTimeControlling> _playerController;	// 8 = 0x8
    double _interval;	// 16 = 0x10
    double _resolution;	// 24 = 0x18
    double _currentTime;	// 32 = 0x20
    AVTimer *_timer;	// 40 = 0x28
    double _minTime;	// 48 = 0x30
    double _maxTime;	// 56 = 0x38
}

+ (_Bool)automaticallyNotifiesObserversOfCurrentTime;	// IMP=0x0060000000157a3d
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;	// IMP=0x0060000000158201
+ (id)keyPathsForValuesAffectingSeekableTimeRangeDuration;	// IMP=0x00600000001581d5
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;	// IMP=0x00600000001581a9
+ (id)keyPathsForValuesAffectingRemainingTime;	// IMP=0x006000000015817d
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;	// IMP=0x0060000000158151
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;	// IMP=0x0060000000158125
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;	// IMP=0x00600000001580f9
+ (id)keyPathsForValuesAffectingTargetTime;	// IMP=0x00600000001580c2
- (void).cxx_destruct;	// IMP=0x00000000001571d5
@property double maxTime; // @synthesize maxTime=_maxTime;
@property double minTime; // @synthesize minTime=_minTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001570d3
@property double currentTime;
@property double resolution;
@property double interval;
@property(retain) id <AVTimeControlling> playerController;
- (void)dealloc;	// IMP=0x0000000000156ea6
- (id)init;	// IMP=0x0000000000156d91
@property(readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) _Bool currentTimeAtEndOfSeekableTimeRanges;
@property(readonly) double seekableTimeRangeDuration;
@property(readonly) double remainingTimeWithinEndTimes;
@property(readonly) double remainingTime;
@property double currentTimeWithinEndTimes;
@property(readonly) double remainingTargetTimeWithinEndTimes;
@property double targetTimeWithinEndTimes;
@property double targetTime;

@end

