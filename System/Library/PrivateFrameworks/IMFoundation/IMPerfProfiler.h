//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject
{
    NSMutableArray *_sinks;	// 8 = 0x8
}

+ (id)instance;	// IMP=0x0060000000022ea7
- (void).cxx_destruct;	// IMP=0x000000000002326d
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;	// IMP=0x0000000000023059
- (void)addSink:(id)arg1 withBehavior:(id)arg2;	// IMP=0x0000000000022fc3
- (id)init;	// IMP=0x0000000000022efc

@end

