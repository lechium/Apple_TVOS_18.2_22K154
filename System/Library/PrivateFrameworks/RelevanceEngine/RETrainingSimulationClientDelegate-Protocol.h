//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class RETrainingSimulationClient;

@protocol RETrainingSimulationClientDelegate <NSObject>

@optional
- (void)availableRelevanceEnginesDidChangeForTrainingSimulationClient:(RETrainingSimulationClient *)arg1;
- (void)trainingSimulationClientWasInvalidated:(RETrainingSimulationClient *)arg1;
- (void)trainingSimulationClientWasInterrupted:(RETrainingSimulationClient *)arg1;
@end

