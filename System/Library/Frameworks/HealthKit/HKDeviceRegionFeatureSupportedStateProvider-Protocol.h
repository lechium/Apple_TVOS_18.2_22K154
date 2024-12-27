//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class NRDevice, NSString;

@protocol HKDeviceRegionFeatureSupportedStateProvider <NSObject>
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(NRDevice *)arg1;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)electrocardiogramSupportedOnPhone:(NRDevice *)arg1 iOSVersionString:(NSString *)arg2;
+ (unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+ (unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(NRDevice *)arg1;
@end

