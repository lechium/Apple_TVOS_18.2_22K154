//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject
{
    double _packetLossPercentage;	// 8 = 0x8
    double _plrEnvelope;	// 16 = 0x10
    double _currentTime;	// 24 = 0x18
    double _lastPercentageChange;	// 32 = 0x20
    unsigned int _redundancyPercentage;	// 40 = 0x28
    double _redundancyInterval;	// 48 = 0x30
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (void)updateRedundancyPercentage;	// IMP=0x000000000026c3a5
- (void)reset;	// IMP=0x000000000026c39f
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000026c31e
- (id)init;	// IMP=0x000000000026c2b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

