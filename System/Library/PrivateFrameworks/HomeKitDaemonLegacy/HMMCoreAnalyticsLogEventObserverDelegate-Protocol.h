//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID;

@protocol HMMCoreAnalyticsLogEventObserverDelegate <NSObject>
- (void)addDimensionsForAccessoryIdentifier:(NSString *)arg1 toEventDictionary:(NSMutableDictionary *)arg2;
- (void)addDimensionsForHome:(NSUUID *)arg1 toEventDictionary:(NSMutableDictionary *)arg2;
- (void)addAggregatedHomeDimensionsToEventDictionary:(NSMutableDictionary *)arg1;
- (void)addCommonDimensionsToEventDictionary:(NSMutableDictionary *)arg1;
@end

