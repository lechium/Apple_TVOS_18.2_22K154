//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString, TIAnalyticsMetricsContext, TIUserModelValues;

@protocol TIUserModeling <NSObject>
@property(readonly, nonatomic) NSArray *contexts;
- (void)addDoubleToTransientCounter:(double)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TIAnalyticsMetricsContext *)arg4;
- (void)addIntegerToTransientCounter:(int)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TIAnalyticsMetricsContext *)arg4;
- (void)resetDurableCounterForKey:(NSString *)arg1;
- (void)addToDurableCounter:(int)arg1 forKey:(NSString *)arg2;
- (TIUserModelValues *)valuesFromContext:(TIAnalyticsMetricsContext *)arg1;
@end

