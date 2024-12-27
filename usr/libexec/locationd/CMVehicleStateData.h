//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject
{
    CMMotionTimeRange *fTimeRange;	// 8 = 0x8
    NSString *fVehicleName;	// 16 = 0x10
    NSString *fVehicleModelName;	// 24 = 0x18
    NSString *fVehicleBluetoothAddress;	// 32 = 0x20
    unsigned long long fVehicularState;	// 40 = 0x28
    unsigned long long fVehicularHints;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000541c80
@property(readonly, nonatomic) unsigned long long vehicularHints;
@property(readonly, nonatomic) unsigned long long vehicularState;
@property(readonly, nonatomic) NSString *vehicleBluetoothAddress;
@property(readonly, nonatomic) NSString *vehicleModelName;
@property(readonly, nonatomic) NSString *vehicleName;
@property(readonly, nonatomic) NSString *deviceId;
@property(readonly, nonatomic) CMMotionTimeRange *timeRange;
- (id)description;	// IMP=0x0010000000541e6b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000541dc3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000541c88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000541bea
- (void)dealloc;	// IMP=0x0010000000541b92
- (id)initWithTimestamp:(id)arg1 state:(unsigned long long)arg2 hints:(unsigned long long)arg3;	// IMP=0x0010000000541abf
- (id)initWithTimeRange:(id)arg1 vehicleName:(id)arg2 vehicleModelName:(id)arg3 vehicleBluetoothAddress:(id)arg4;	// IMP=0x0010000000541a27

@end

