//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPDataCollection : NSObject
{
}

+ (void)reportMetric:(const struct __CFString *)arg1 withValue:(unsigned long long)arg2;	// IMP=0x004000000005aab1
+ (unsigned long long)truncate:(unsigned long long)arg1;	// IMP=0x001000000005aa27
+ (id)sharedDataCollection;	// IMP=0x001000000005a9d2
- (void)reportBackgroundAnalysisProgressMetrics:(id)arg1;	// IMP=0x004000000005c217
- (void)reportDailyBackgroundAnalysisMetrics:(id)arg1 withNormalizeRatio:(double)arg2;	// IMP=0x001000000005b39a
- (void)reportDatabaseCorruption;	// IMP=0x001000000005b375
- (void)reportDatabaseSizeBytes:(unsigned long long)arg1;	// IMP=0x001000000005b352
- (void)reportBlacklistedAssetCount:(unsigned long long)arg1;	// IMP=0x001000000005b32f
- (void)reportLivePhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000005ae80
- (void)reportMovieStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000005ae66
- (void)reportPhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000005ae4c
- (void)reportStatistics:(id)arg1 forMediaType:(long long)arg2 forPhotoLibrary:(id)arg3;	// IMP=0x001000000005aab7

@end

