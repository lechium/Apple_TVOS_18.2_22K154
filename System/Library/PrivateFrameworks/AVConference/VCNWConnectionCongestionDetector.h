//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface VCNWConnectionCongestionDetector : NSObject
{
    AVCStatisticsCollector *_statisticsCollector;	// 8 = 0x8
    struct tagVCStatisticsMessage _previousStatistics;	// 16 = 0x10
    void *_logNWDump;	// 216 = 0xd8
    unsigned int _averageThroughputBps;	// 224 = 0xe0
    unsigned int _averagePacketDelayMs;	// 228 = 0xe4
    unsigned int _maxAveragePacketDelayMs;	// 232 = 0xe8
    unsigned int _lastTimestampWithPacketDrop;	// 236 = 0xec
    unsigned int _packetDropCount;	// 240 = 0xf0
    unsigned int _packetDropCountPerFrame;	// 244 = 0xf4
    _Bool _didSendCongestionEvent;	// 248 = 0xf8
}

@property(readonly) unsigned int packetDropCount; // @synthesize packetDropCount=_packetDropCount;
@property(readonly) unsigned int averageThroughputBps; // @synthesize averageThroughputBps=_averageThroughputBps;
@property unsigned int maxAveragePacketDelayMs; // @synthesize maxAveragePacketDelayMs=_maxAveragePacketDelayMs;
@property(readonly) unsigned int averagePacketDelayMs; // @synthesize averagePacketDelayMs=_averagePacketDelayMs;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)enableNWLogDump:(void *)arg1;	// IMP=0x000000000002e0bf
- (void)sendCongestionEventWithTimestamp:(unsigned int)arg1;	// IMP=0x000000000002dfe0
- (_Bool)processNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x000000000002de75
- (_Bool)processNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x000000000002dc3f
- (void)dealloc;	// IMP=0x000000000002dbe1

@end

