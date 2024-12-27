//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWaterSubmersionMeasurement : NSObject
{
    double _startAt;	// 8 = 0x8
    double _pressure;	// 16 = 0x10
    double _depth;	// 24 = 0x18
    double _temperature;	// 32 = 0x20
    double _temperatureUncertainty;	// 40 = 0x28
    double _surfacePressure;	// 48 = 0x30
    long long _state;	// 56 = 0x38
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double surfacePressure; // @synthesize surfacePressure=_surfacePressure;
@property(nonatomic) double temperatureUncertainty; // @synthesize temperatureUncertainty=_temperatureUncertainty;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) double depth; // @synthesize depth=_depth;
@property(nonatomic) double pressure; // @synthesize pressure=_pressure;
@property(nonatomic) double startAt; // @synthesize startAt=_startAt;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b620c5

@end

