//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLElevationThresholdManager : NSObject
{
    multimap_22d98a7a _elevationThresholdMap;	// 8 = 0x8
    float _hysteresisBand;	// 32 = 0x20
    struct map<id, CLBarometerCalibration_Types::ThresholdAnalytics, std::less<id>, std::allocator<std::pair<const id, CLBarometerCalibration_Types::ThresholdAnalytics>>> _elevationThresholdClientAnalyticsMap;	// 40 = 0x28
    struct ElevationAlertCurrentBounds _currentElevationThreshold;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x002000000060b9bb
- (void).cxx_destruct;	// IMP=0x001000000060b98f
- (void)sendAnalyticsEventForId:(id)arg1;	// IMP=0x001000000060ad87
- (void)updateAnalyticsWithAltitude:(float)arg1;	// IMP=0x001000000060ad18
- (void)clearShouldAlert;	// IMP=0x001000000060acd7
- (void)updateInitializedThresholdsWithAltitude:(float)arg1;	// IMP=0x001000000060abf5
- (_Bool)updateWithAltitude:(float)arg1 andAccuracy:(float)arg2 upperBound:(float *)arg3 lowerBound:(float *)arg4;	// IMP=0x001000000060ab2c
- (void)thresholdUpdated:(struct ThresholdClient *)arg1 initialized:(_Bool)arg2 above:(_Bool)arg3;	// IMP=0x001000000060ab12
- (void)initializeThresholdsGivenAltitude:(float)arg1 andAccuracy:(float)arg2;	// IMP=0x001000000060a7d4
- (multimap_22d98a7a)getElevationThresholdProxyMap;	// IMP=0x001000000060a7b8
- (_Bool)removeClient:(byref id)arg1;	// IMP=0x001000000060a545
- (void)insertClient:(byref id)arg1 withThreshold:(float)arg2;	// IMP=0x001000000060a2ce
- (void)thresholdBoundsForElevation:(float)arg1 andAccuracy:(float)arg2 upperBound:(float *)arg3 lowerBound:(float *)arg4;	// IMP=0x0010000000609f7a
- (id)init;	// IMP=0x0010000000609f13

@end

