//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAssetTrack.h>

@interface AVAssetTrack (AVAdditions)
- (_Bool)_avkit_frameRateIsValid:(float)arg1;	// IMP=0x00900000000189da
- (CDStruct_1b6d18a9)_avkit_findTimeForFrameUsingFrameRateSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0090000000018892
- (CDStruct_1b6d18a9)_avkit_timeForFrameUsingSampleCursorSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0090000000018874
- (CDStruct_1b6d18a9)avkit_timeForFrameSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0090000000018667
- (id)avkit_associatedTracksOfType:(id)arg1;	// IMP=0x0090000000018655
@end

