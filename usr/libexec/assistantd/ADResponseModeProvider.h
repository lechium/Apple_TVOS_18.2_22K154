//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFModesConfiguration, AFNotifyObserver, AVOutputContext, NSString;
@protocol OS_dispatch_queue;

@interface ADResponseModeProvider : NSObject
{
    AFNotifyObserver *_connectedOutputDevicesObserver;	// 8 = 0x8
    AFNotifyObserver *_ringerStateObserver;	// 16 = 0x10
    AVOutputContext *_sharedSystemAudioContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    AFModesConfiguration *_currentModesConfiguration;	// 48 = 0x30
    NSString *_currentMode;	// 56 = 0x38
    _Bool _isConnectedToAudioAccessory;	// 64 = 0x40
    _Bool _isConnectedToThirdPartyBT;	// 65 = 0x41
    _Bool _isConnectedToAppleBTHeadphones;	// 66 = 0x42
    long long _previousDeviceMotion;	// 72 = 0x48
    _Bool _previousScreenOnState;	// 80 = 0x50
    _Bool _previousScreenEngagement;	// 81 = 0x51
    _Bool _previousIsAudioAccessoryButtonActivation;	// 82 = 0x52
    _Bool _previousIsVoiceTriggerRequest;	// 83 = 0x53
    long long _voiceFeedbackSetting;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000c0d88
- (void)_connectedOutputDevicesDidChange:(id)arg1;	// IMP=0x00100000000c0cec
- (void)_fetchConnectedAudioAccessoryState;	// IMP=0x00100000000c0c69
- (id)internalModeOverride:(id)arg1;	// IMP=0x00100000000c0aba
- (id)_computeModeFortvOS;	// IMP=0x00100000000c0868
- (id)_computeModeForMacOS;	// IMP=0x00100000000c0512
- (id)_computeModeForWatchOS;	// IMP=0x00100000000c015c
- (id)_computeModeForiOS;	// IMP=0x00100000000bf96d
- (id)_computeModeForVisionOS;	// IMP=0x00100000000bf734
- (void)_computeMode;	// IMP=0x00100000000bf6e9
- (long long)_isVoiceOverEnabled;	// IMP=0x00100000000bf674
- (_Bool)_isNavigationActive;	// IMP=0x00100000000bf66c
- (_Bool)_updateStickiness;	// IMP=0x00100000000bf496
- (_Bool)_isScreenEngaged;	// IMP=0x00100000000bf10e
- (_Bool)_isDeviceUnlocked;	// IMP=0x00100000000bf051
- (long long)_voiceFeedbackSetting;	// IMP=0x00100000000beff2
- (_Bool)_deviceUnlockSignalEnabled;	// IMP=0x00100000000bef15
- (_Bool)_overrideModeWhenInAmbient;	// IMP=0x00100000000bee32
- (_Bool)_isThirdPartyBTConnected;	// IMP=0x00100000000bee29
- (_Bool)_isAudioAccessoryConnected;	// IMP=0x00100000000bed85
- (_Bool)_isSteveNoteConnected;	// IMP=0x00100000000bec8b
- (_Bool)_isDeviceSilent;	// IMP=0x00100000000bebad
- (id)fetchCurrentMode;	// IMP=0x00100000000beadd
- (void)updateModesConfiguration:(id)arg1;	// IMP=0x00100000000bea42
- (id)init;	// IMP=0x00100000000be86d

@end

