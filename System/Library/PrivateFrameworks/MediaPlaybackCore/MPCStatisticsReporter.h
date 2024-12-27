//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCStatisticsReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001861d1
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (id)description;	// IMP=0x0000000000186133
- (id)coreAnalyticsEventName;	// IMP=0x0000000000186126
- (void)_writeData:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x0000000000185d02
- (void)_writeSamplesFromRecorder:(id)arg1;	// IMP=0x0000000000185c0b
- (id)_reportingFileForRecorder:(id)arg1 extension:(id)arg2;	// IMP=0x0000000000185a32
- (id)_reportDirectoryURL;	// IMP=0x000000000018589f
- (void)_clearLocalReports;	// IMP=0x0000000000185396
- (void)_sendAnalyticsData;	// IMP=0x0000000000184c19
- (void)_writeAnalyticsDataFromRecorder:(id)arg1;	// IMP=0x0000000000184938
@property(readonly, copy, nonatomic) NSString *recordScenarioName;
- (void)flush;	// IMP=0x000000000018485c
- (void)reportRecordedResults:(id)arg1;	// IMP=0x00000000001847cf
- (id)init;	// IMP=0x0000000000184717

@end

