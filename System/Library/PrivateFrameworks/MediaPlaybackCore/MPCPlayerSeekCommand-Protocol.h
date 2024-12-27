//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerSeekCommand <MPCPlayerCommand>
@property(readonly, copy, nonatomic) NSArray *preferredForwardJumpIntervals;
@property(readonly, copy, nonatomic) NSArray *preferredBackwardJumpIntervals;
- (MPCPlayerCommandRequest *)changePositionToElapsedInterval:(double)arg1 referenceInterval:(double)arg2;
- (MPCPlayerCommandRequest *)changePositionToElapsedInterval:(double)arg1;
- (MPCPlayerCommandRequest *)jumpByInterval:(double)arg1;
- (MPCPlayerCommandRequest *)endSeek;
- (MPCPlayerCommandRequest *)beginSeekWithDirection:(long long)arg1;
@end

