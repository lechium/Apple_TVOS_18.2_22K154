//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHaptics/CHHapticPatternPlayer-Protocol.h>

@protocol CHHapticAdvancedPatternPlayer <CHHapticPatternPlayer>
@property(copy) CDUnknownBlockType completionHandler;
@property _Bool isMuted;
@property float playbackRate;
@property double loopEnd;
@property _Bool loopEnabled;
- (_Bool)seekToOffset:(double)arg1 error:(id *)arg2;
- (_Bool)resumeAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)pauseAtTime:(double)arg1 error:(id *)arg2;
@end

