//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class NSArray, NSNumber, UIMovieScrubber;

@protocol UIMovieScrubberDataSource <NSObject>
- (void)movieScrubber:(UIMovieScrubber *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2;
- (double)movieScrubberThumbnailAspectRatio:(UIMovieScrubber *)arg1;
- (NSArray *)movieScrubber:(UIMovieScrubber *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (double)movieScrubberDuration:(UIMovieScrubber *)arg1;

@optional
- (void)movieScrubber:(UIMovieScrubber *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(_Bool)arg3;
@end

