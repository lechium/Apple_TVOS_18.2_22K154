//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMPingStatistics, NSMutableArray, NSMutableString, _IMPingPacketData;

@interface _IMPingStatisticsCollector : NSObject
{
    _IMPingPacketData *_timestampArray[160];	// 8 = 0x8
    NSMutableArray *_roundTriptimes;	// 1288 = 0x508
    NSMutableString *_stringToWriteToFile;	// 1296 = 0x510
    IMPingStatistics *_stats;	// 1304 = 0x518
}

- (void).cxx_destruct;	// IMP=0x0000000000046dbd
- (double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3;	// IMP=0x0000000000046baf
- (double)_computeMedianTime:(id)arg1;	// IMP=0x0000000000046a8c
- (id)pingStatsForLastNSeconds:(double)arg1;	// IMP=0x00000000000466f4
- (id)pingStats;	// IMP=0x0000000000046607
- (_Bool)logStatsToFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000463ca
- (void)timeoutOldSequenceNumbers:(double)arg1;	// IMP=0x00000000000461a9
- (void)addEchoReplyPacket:(int)arg1;	// IMP=0x0000000000045f58
- (struct timeval)timeSentForPacket:(int)arg1;	// IMP=0x0000000000045e8e
- (void)dealloc;	// IMP=0x0000000000045e2d
- (void)addEchoPacket:(int)arg1 packetTimestamp:(struct timeval)arg2 error:(int)arg3;	// IMP=0x0000000000045b9c
- (id)init;	// IMP=0x0000000000045adf

@end

