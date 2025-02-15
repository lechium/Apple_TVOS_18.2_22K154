//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HIDConnection, HIDDevice, HIDUserDevice, MISSING_TYPE, NSArray, NSNumber, NSString, NSXPCConnection;
@protocol GCBatteryServiceClientInterface, HIDEventDispatcher, OS_dispatch_queue, OS_dispatch_source;

@interface GCGamepadHIDServicePlugin : NSObject
{
    CDUnknownBlockType _cancelHandler;	// 8 = 0x8
    NSNumber *_prop;	// 16 = 0x10
    _Bool _activated;	// 24 = 0x18
    _Bool _clientAdded;	// 25 = 0x19
    NSObject<OS_dispatch_source> *_idleDispatchSource;	// 32 = 0x20
    struct BTSessionImpl *_session;	// 40 = 0x28
    _Bool _buttonHome;	// 48 = 0x30
    _Bool _buttonMenu;	// 49 = 0x31
    _Bool _buttonOptions;	// 50 = 0x32
    _Bool _buttonSearch;	// 51 = 0x33
    _Bool _buttonShare;	// 52 = 0x34
    struct {
        double directionPadUp;
        double directionPadDown;
        double directionPadLeft;
        double directionPadRight;
        double buttonA;
        double buttonB;
        double buttonX;
        double buttonY;
        double buttonL1;
        double buttonR1;
        double buttonL2;
        double buttonR2;
        _Bool leftThumbstick__rightThumbstick__buttonL3;
        _Bool buttonR3;
        unsigned int controllerType;
    } _gameControllerState;	// 56 = 0x38
    CDStruct_ba80db9a _gameControllerExtendedState;	// 176 = 0xb0
    unsigned int _motionSequenceNumber;	// 376 = 0x178
    CDStruct_06597ee6 _motionState;	// 384 = 0x180
    _Bool _hapticsActive;	// 488 = 0x1e8
    int _pendingHapticZeroReports;	// 492 = 0x1ec
    float _hapticDispatchFrequency;	// 496 = 0x1f0
    double _currentHapticClipTime;	// 504 = 0x1f8
    struct timespec _currentHapticDispatchTime;	// 512 = 0x200
    _Bool _loopHapticEvent;	// 528 = 0x210
    NSObject<OS_dispatch_source> *_hapticDispatchSource;	// 536 = 0x218
    NSXPCConnection *_daemonConnection;	// 544 = 0x220
    id <GCBatteryServiceClientInterface> _batteryClient;	// 552 = 0x228
    NSObject<OS_dispatch_queue> *_internalQueue;	// 560 = 0x230
    double _inputEventDelay;	// 568 = 0x238
    _Bool _bluetoothClassic;	// 576 = 0x240
    _Bool _usb;	// 577 = 0x241
    _Bool _bluetoothLE;	// 578 = 0x242
    _Bool _virtualDevice;	// 579 = 0x243
    unsigned int _service;	// 580 = 0x244
    float _idleTimeoutDuration;	// 584 = 0x248
    float _leftThumbstickNoiseBuffer;	// 588 = 0x24c
    float _rightThumbstickNoiseBuffer;	// 592 = 0x250
    float _leftThumbstickDeadzoneRadius;	// 596 = 0x254
    float _leftThumbstickAxisSnapRadius;	// 600 = 0x258
    float _rightThumbstickDeadzoneRadius;	// 604 = 0x25c
    float _rightThumbstickAxisSnapRadius;	// 608 = 0x260
    HIDConnection *_client;	// 616 = 0x268
    id <HIDEventDispatcher> _dispatcher;	// 624 = 0x270
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 632 = 0x278
    HIDDevice *_device;	// 640 = 0x280
    HIDUserDevice *_batteryUserDevice;	// 648 = 0x288
    unsigned long long _regID;	// 656 = 0x290
    unsigned long long _lastEventTime;	// 664 = 0x298
    NSString *_uniqueIdentifier;	// 672 = 0x2a0
    CDStruct_f4b747e6 *_batteryReport;	// 680 = 0x2a8
    NSArray *_hapticMotors;	// 688 = 0x2b0
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x0010000000002d37
- (void).cxx_destruct;	// IMP=0x0000000000007522
@property(nonatomic) float rightThumbstickAxisSnapRadius; // @synthesize rightThumbstickAxisSnapRadius=_rightThumbstickAxisSnapRadius;
@property(nonatomic) float rightThumbstickDeadzoneRadius; // @synthesize rightThumbstickDeadzoneRadius=_rightThumbstickDeadzoneRadius;
@property(nonatomic) float leftThumbstickAxisSnapRadius; // @synthesize leftThumbstickAxisSnapRadius=_leftThumbstickAxisSnapRadius;
@property(nonatomic) float leftThumbstickDeadzoneRadius; // @synthesize leftThumbstickDeadzoneRadius=_leftThumbstickDeadzoneRadius;
@property(retain, nonatomic) NSArray *hapticMotors; // @synthesize hapticMotors=_hapticMotors;
@property(nonatomic) float hapticDispatchFrequency; // @synthesize hapticDispatchFrequency=_hapticDispatchFrequency;
@property(nonatomic) float rightThumbstickNoiseBuffer; // @synthesize rightThumbstickNoiseBuffer=_rightThumbstickNoiseBuffer;
@property(nonatomic) float leftThumbstickNoiseBuffer; // @synthesize leftThumbstickNoiseBuffer=_leftThumbstickNoiseBuffer;
@property(nonatomic) float idleTimeoutDuration; // @synthesize idleTimeoutDuration=_idleTimeoutDuration;
@property(readonly, nonatomic, getter=isVirtualDevice) _Bool virtualDevice; // @synthesize virtualDevice=_virtualDevice;
@property(readonly, nonatomic, getter=isBluetoothLE) _Bool bluetoothLE; // @synthesize bluetoothLE=_bluetoothLE;
@property(readonly, nonatomic, getter=isUSB) _Bool usb; // @synthesize usb=_usb;
@property(readonly, nonatomic, getter=isBluetoothClassic) _Bool bluetoothClassic; // @synthesize bluetoothClassic=_bluetoothClassic;
@property(readonly, nonatomic) CDStruct_f4b747e6 *batteryReport; // @synthesize batteryReport=_batteryReport;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(readonly, nonatomic) HIDUserDevice *batteryUserDevice; // @synthesize batteryUserDevice=_batteryUserDevice;
@property(readonly, nonatomic) HIDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) unsigned int service; // @synthesize service=_service;
@property(nonatomic) __weak id <HIDEventDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak HIDConnection *client; // @synthesize client=_client;
- (void)readBatteryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000072a8
- (void)connectToGenericDeviceDriverConfigurationServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007296
- (void)connectToGameIntentServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007284
- (void)connectToBatteryServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000071a1
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000718f
- (void)connectToAdaptiveTriggersServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000717d
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000716b
- (void)connectToNintendoJoyConFusionGestureServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007159
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x0000000000007088
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x0000000000007014
- (void)fetchDeviceRegistryIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006f91
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000006f83
- (id)defaultHapticMotors;	// IMP=0x0000000000006f6a
- (float)defaultRightAxisSnapRadius;	// IMP=0x0000000000006f61
- (float)defaultLeftAxisSnapRadius;	// IMP=0x0000000000006f58
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x0000000000006f4a
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x0000000000006f3c
- (float)defaultIdleTimeoutDuration;	// IMP=0x0000000000006f2e
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000006f25
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x0000000000006f1c
- (void)enableHaptics;	// IMP=0x0000000000006c5e
- (_Bool)updateHapticMotor:(id)arg1;	// IMP=0x0000000000006b56
- (void)stopHaptics;	// IMP=0x000000000000696a
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x000000000000695f
- (_Bool)isHapticsActive;	// IMP=0x0000000000006953
- (void)updateHaptics:(_Bool)arg1;	// IMP=0x000000000000694d
- (void)dispatchHapticEvent;	// IMP=0x0000000000006947
- (_Bool)isAnyHapticMotorEnabled;	// IMP=0x0000000000006737
- (void)dispatchShareButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000006661
- (void)dispatchSearchButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000658b
- (void)dispatchOptionsButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000064b5
- (void)dispatchMenuButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000063df
- (void)dispatchHomeButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000006309
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_ba80db9a)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000062f5
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_ba80db9a)arg1 timestamp:(unsigned long long)arg2 children:(id)arg3;	// IMP=0x0000000000005c68
- (void)dispatchMotionEventWithState:(CDStruct_06597ee6)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000059ae
- (_Bool)isTwoAxisInputIdle:(MISSING_TYPE **)arg1 prevInput:(MISSING_TYPE **)arg2 noiseBuffer:(float)arg3;	// IMP=0x0000000000005958
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x0000000000005857
- (void)dispatchIdleEvent:(id)arg1 withInputDelay:(_Bool)arg2;	// IMP=0x00000000000056f6
- (void)dispatchEvent:(id)arg1 withInputDelay:(_Bool)arg2;	// IMP=0x000000000000554b
- (void)dispatchIdleEvent:(id)arg1;	// IMP=0x000000000000553c
- (void)dispatchEvent:(id)arg1;	// IMP=0x000000000000552a
- (id)createEvent:(unsigned int)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000005401
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x00000000000053f9
- (_Bool)isIdle;	// IMP=0x0000000000005286
- (void)updateIdleState;	// IMP=0x00000000000051cc
- (void)scheduleIdleTimer;	// IMP=0x0000000000005096
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x000000000000508e
- (void)sendBatteryReport;	// IMP=0x0000000000004f81
- (void)updateClientBattery;	// IMP=0x0000000000004eb4
- (void)createVirtualHIDDeviceForBattery;	// IMP=0x0000000000004b76
- (void)disconnect;	// IMP=0x0000000000004921
- (void)setupRawReportHandling;	// IMP=0x000000000000491b
- (id)createHIDDeviceForService:(unsigned int)arg1;	// IMP=0x00000000000048e7
- (void)clientNotification:(id)arg1 added:(_Bool)arg2;	// IMP=0x0000000000004802
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000000004715
- (void)cancel;	// IMP=0x00000000000045ba
- (void)activate;	// IMP=0x000000000000452b
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000432b
- (void)setEventDispatcher:(id)arg1;	// IMP=0x000000000000426d
- (id)eventMatching:(id)arg1 forClient:(id)arg2;	// IMP=0x00000000000040fc
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000003fc7
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x0000000000003a9f
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000000375c
- (id)initWithService:(unsigned int)arg1;	// IMP=0x00000000000030ec
- (void)initGameControllerDaemonXPC;	// IMP=0x0000000000002d3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

