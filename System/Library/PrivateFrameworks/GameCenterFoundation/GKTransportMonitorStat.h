//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString;

@interface GKTransportMonitorStat : NSObject
{
    MISSING_TYPE *playerStats;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016a126
- (id)init;	// IMP=0x000000000016a0e6
- (id)initWithPlayerStats:(id)arg1;	// IMP=0x000000000016a07e
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) double overallPacketLoss;
@property(nonatomic, readonly) double overallAverageLatency;
@property(nonatomic, readonly) NSDictionary *overallAverageLatencies;
@property(nonatomic, readonly) double overallLatency;
@property(nonatomic, readonly) NSDictionary *overallLatencies;
@property(nonatomic, readonly) NSArray *playerStats;

@end

