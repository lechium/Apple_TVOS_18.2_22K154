//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPlaybackUtilities : NSObject
{
}

+ (void)updateReportingForStartOfPreloadedPlayer:(id)arg1;	// IMP=0x00800000000d9272
+ (id)updatedHLSURL:(id)arg1 forPlaybackContext:(unsigned long long)arg2;	// IMP=0x00800000000d8e47
+ (_Bool)isDownloadLimitError:(id)arg1;	// IMP=0x00800000000d8d7d
+ (_Bool)isMPMediaLibraryAssociationError:(id)arg1;	// IMP=0x00800000000d8cd7
+ (_Bool)isOutOfSpaceError:(id)arg1;	// IMP=0x00800000000d8c4d
+ (_Bool)playerIsLive:(id)arg1;	// IMP=0x00800000000d8c23
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(_Bool)arg5;	// IMP=0x00800000000d8bbe
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4;	// IMP=0x00800000000d8ba3
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x00800000000d8b39
+ (double)playedThresholdTimeForDuration:(double)arg1;	// IMP=0x00800000000d8a8b

@end

