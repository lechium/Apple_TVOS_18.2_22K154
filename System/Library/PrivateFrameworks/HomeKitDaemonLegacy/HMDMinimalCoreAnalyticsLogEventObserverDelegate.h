//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMinimalCoreAnalyticsLogEventObserverDelegate : NSObject
{
}

- (void)addAggregatedHomeDimensionsToEventDictionary:(id)arg1;	// IMP=0x00000000005b2cb0
- (void)addDimensionsForHome:(id)arg1 toEventDictionary:(id)arg2;	// IMP=0x00000000005b2caa
- (void)addDimensionsForAccessoryIdentifier:(id)arg1 toEventDictionary:(id)arg2;	// IMP=0x00000000005b2ca4
- (void)addCommonDimensionsToEventDictionary:(id)arg1;	// IMP=0x00000000005b2bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

