//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBEBluetoothRemoteInitialButtonPressProcessor, PBEFilterConfigurationMonitor, PBESILInvertedProcessor, PBESILStandardProcessor;

__attribute__((visibility("hidden")))
@interface PBEFilterPlugIn : NSObject
{
    PBEFilterConfigurationMonitor *_configurationMonitor;	// 8 = 0x8
    PBESILStandardProcessor *_standardSILProcessor;	// 16 = 0x10
    PBESILInvertedProcessor *_invertedSILProcessor;	// 24 = 0x18
    PBEBluetoothRemoteInitialButtonPressProcessor *_bluetoothRemoteInitialButtonProcessor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002fc7
@property(readonly, nonatomic) PBEBluetoothRemoteInitialButtonPressProcessor *bluetoothRemoteInitialButtonProcessor; // @synthesize bluetoothRemoteInitialButtonProcessor=_bluetoothRemoteInitialButtonProcessor;
@property(readonly, nonatomic) PBESILInvertedProcessor *invertedSILProcessor; // @synthesize invertedSILProcessor=_invertedSILProcessor;
@property(readonly, nonatomic) PBESILStandardProcessor *standardSILProcessor; // @synthesize standardSILProcessor=_standardSILProcessor;
@property(readonly, nonatomic) PBEFilterConfigurationMonitor *configurationMonitor; // @synthesize configurationMonitor=_configurationMonitor;
- (void)invalidate;	// IMP=0x0000000000002f89
- (void)unregisterService:(struct __IOHIDService *)arg1;	// IMP=0x0000000000002f78
- (void)registerService:(struct __IOHIDService *)arg1;	// IMP=0x0000000000002f29
- (struct __IOHIDEvent *)filterEvent:(struct __IOHIDEvent *)arg1 forSender:(struct __IOHIDService *)arg2;	// IMP=0x0000000000002d66
- (void)dealloc;	// IMP=0x0000000000002d28
- (id)init;	// IMP=0x0000000000002b1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

