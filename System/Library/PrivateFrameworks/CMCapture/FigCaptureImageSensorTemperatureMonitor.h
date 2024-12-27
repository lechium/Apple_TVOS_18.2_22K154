//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface FigCaptureImageSensorTemperatureMonitor : NSObject
{
    NSString *_portType;	// 8 = 0x8
    struct {
        float min;
        float max;
    } _systemPressureLevelByImageSensorTemperature[5];	// 16 = 0x10
    int _currentSystemPressureFromImageSensorTemperature;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_nominalImageSensorTemperatureMonitorTimer;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x0060000000026cfc
- (void)startMonitoringImageSensorTemperatureUntilNominalWithQueue:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000270fb
- (void)updateWithImageSensorTemperature:(float)arg1;	// IMP=0x000000000002707d
@property(readonly) int systemPressureLevelFromImageSensorTemperature;
- (void)dealloc;	// IMP=0x0000000000027026
- (id)initWithPortType:(id)arg1 sensorThermalLevelsByTemperature:(id)arg2;	// IMP=0x0000000000026d0d

@end

