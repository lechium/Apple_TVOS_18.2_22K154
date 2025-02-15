//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMeasurement, NSTimer;
@protocol MNEVChargingStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface MNEVChargingStateMonitor : NSObject
{
    id <MNEVChargingStateMonitorDelegate> _delegate;	// 8 = 0x8
    _Bool _isCharging;	// 16 = 0x10
    _Bool _shouldShowChargingInfo;	// 17 = 0x11
    NSDate *_arrivalDate;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    NSMeasurement *_targetBatteryCharge;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000016d3f
@property(nonatomic) __weak id <MNEVChargingStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMeasurement *targetBatteryCharge; // @synthesize targetBatteryCharge=_targetBatteryCharge;
- (void)_notifyShouldShowChargingInfo;	// IMP=0x0000000000016c9c
- (void)_startTimer;	// IMP=0x0000000000016a87
- (void)updateForArrival;	// IMP=0x0000000000016a75
- (void)updateForLocation:(id)arg1;	// IMP=0x0000000000016932
- (void)dealloc;	// IMP=0x00000000000168f0
- (id)initWithTargetBatteryCharge:(id)arg1;	// IMP=0x0000000000016880

@end

