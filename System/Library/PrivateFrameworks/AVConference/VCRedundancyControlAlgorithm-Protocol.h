//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCRedundancyControlAlgorithm <NSObject>
@property(readonly, nonatomic) double redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage;
- (void)reset;
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage)arg1;

@optional
- (CDStruct_d7e2e0ee)getFecLevelPerFrameSizeVector;
@end

