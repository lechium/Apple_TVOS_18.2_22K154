//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVCaptureDevice.h"

@class AVAudioSession, AVWeakReference, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSObject<OS_dispatch_queue> *_fcsQueue;	// 16 = 0x10
    struct OpaqueFigCaptureSource *_fcs;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    _Bool _levelMeteringEnabled;	// 40 = 0x28
    _Bool _isConnected;	// 41 = 0x29
    _Bool _isSoonToBeDisconnected;	// 42 = 0x2a
    NSObject<OS_dispatch_queue> *_localizedNameFirstQueryQueue;	// 48 = 0x30
    struct os_unfair_lock_s _localizedNameLock;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_localizedNameFirstQueryGroup;	// 64 = 0x40
    NSString *_localizedName;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_audioRoutesInfoUpdateQueue;	// 80 = 0x50
    struct os_unfair_lock_s _audioRoutesInfoLock;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_audioRoutesInfoFirstQueryGroup;	// 96 = 0x60
    _Bool _audioInputRouteIsBuiltInMic;	// 104 = 0x68
    AVWeakReference *_weakReference;	// 112 = 0x70
    NSString *_clientAudioClockDeviceUID;	// 120 = 0x78
    struct OpaqueCMClock *_sharedAVAudioSessionClock;	// 128 = 0x80
    AVAudioSession *_auxiliarySession;	// 136 = 0x88
}

+ (void)_reconnectDevices:(id)arg1;	// IMP=0x00600000000fc585
+ (id)_devicesWithPriorRegisteredDevices:(id)arg1;	// IMP=0x00600000000fc18c
+ (id)_devices;	// IMP=0x00600000000fc178
+ (id)_newFigCaptureSources;	// IMP=0x00600000000fc169
+ (void)initialize;	// IMP=0x00600000000fc0b0
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;	// IMP=0x00000000000fddca
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x00000000000fddb8
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;	// IMP=0x00000000000fdb8c
- (void)audioInputDevicesDidChangeHandler:(id)arg1;	// IMP=0x00000000000fdabc
- (_Bool)currentAudioInputRouteIsBuiltInMic:(id)arg1;	// IMP=0x00000000000fd8f4
- (id)_copyFigCaptureSourceProperty:(struct __CFString *)arg1;	// IMP=0x00000000000fd7b2
- (void)updateSoonToBeDisconnectedStateForContinuityCameraDisconnection;	// IMP=0x00000000000fd4b4
- (struct OpaqueCMClock *)deviceClock;	// IMP=0x00000000000fd455
- (_Bool)supportsAVCaptureSessionPreset:(id)arg1;	// IMP=0x00000000000fd44d
- (void)stopUsingDevice;	// IMP=0x00000000000fd447
- (_Bool)startUsingDevice:(id *)arg1;	// IMP=0x00000000000fd43f
- (_Bool)isSoonToBeDisconnected;	// IMP=0x00000000000fd42f
- (_Bool)isConnected;	// IMP=0x00000000000fd41f
- (_Bool)isAudioInputRouteBuiltInMic;	// IMP=0x00000000000fd3d3
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)arg1;	// IMP=0x00000000000fd258
- (_Bool)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)arg1;	// IMP=0x00000000000fd244
- (_Bool)isWindNoiseRemovalSupported;	// IMP=0x00000000000fd204
- (_Bool)isAudioCaptureModeSupported:(long long)arg1;	// IMP=0x00000000000fd170
- (_Bool)isBuiltInStereoAudioCaptureSupported;	// IMP=0x00000000000fd130
- (_Bool)hasMediaType:(id)arg1;	// IMP=0x00000000000fd111
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;	// IMP=0x00000000000fd0c3
- (id)deviceType;	// IMP=0x00000000000fd0b3
- (id)localizedName;	// IMP=0x00000000000fd054
- (id)modelID;	// IMP=0x00000000000fd02d
- (id)uniqueID;	// IMP=0x00000000000fd006
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x00000000000fce2e
- (struct OpaqueFigCaptureSource *)figCaptureSource;	// IMP=0x00000000000fce1d
- (void)dealloc;	// IMP=0x00000000000fcd08
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x00000000000fc925
- (id)init;	// IMP=0x00000000000fc8d3

@end

