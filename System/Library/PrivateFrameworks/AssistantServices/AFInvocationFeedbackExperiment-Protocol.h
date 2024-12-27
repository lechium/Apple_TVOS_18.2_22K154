//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@protocol AFInvocationFeedbackExperiment <NSObject>
@property(readonly, nonatomic) unsigned long long featureGroups;
- (_Bool)isFeatureGroupFourEnabled;
- (_Bool)isFeatureGroupThreeEnabled;
- (_Bool)isFeatureGroupTwoEnabled;
- (_Bool)isFeatureGroupOneEnabled;
- (void)logExperimentExposureForInvocationFeedbacks;
@end

