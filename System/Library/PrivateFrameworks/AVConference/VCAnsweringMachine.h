//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCAnsweringMachineConfiguration, NSObject, NSString, NSURL, VCAudioIO;
@protocol OS_dispatch_queue, VCAnsweringMachineDelegate;

__attribute__((visibility("hidden")))
@interface VCAnsweringMachine
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    id <VCAnsweringMachineDelegate> _delegate;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 104 = 0x68
    struct tagVCAnsweringMachineRealtimeContext _realtimeContext;	// 112 = 0x70
    _Bool _registeredForThermalNotifications;	// 200 = 0xc8
    AVCAnsweringMachineConfiguration *_configuration;	// 208 = 0xd0
    NSString *_uuid;	// 216 = 0xd8
    int _deviceRole;	// 224 = 0xe0
    VCAudioIO *_audioIO;	// 232 = 0xe8
    int _reportingModuleID;	// 240 = 0xf0
    struct tagVCAudioFrameFormat _internalFormat;	// 248 = 0xf8
    NSURL *_recordingURL;	// 296 = 0x128
    _Bool _stopIsAsync;	// 304 = 0x130
    _Bool _didInvalidate;	// 305 = 0x131
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x001000000012375e
@property(readonly, nonatomic) NSURL *recordingURL; // @synthesize recordingURL=_recordingURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) AVCAnsweringMachineConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x0000000000123789
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x0000000000123783
- (void)serverDidDie;	// IMP=0x000000000012377d
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000123777
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;	// IMP=0x0000000000123758
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;	// IMP=0x0000000000123752
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;	// IMP=0x000000000012374c
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 urlContext:(const struct tagVCMediaRecorderDelegateURLContext *)arg3 error:(id)arg4;	// IMP=0x00000000001235e7
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;	// IMP=0x00000000001235e1
- (void)stopMediaRecording;	// IMP=0x000000000012348d
- (void)cleanupMediaRecorder;	// IMP=0x000000000012343e
- (_Bool)setupMediaRecorder;	// IMP=0x0000000000122dd2
- (void)cleanupCaptionsCoordinator;	// IMP=0x0000000000122da8
- (_Bool)setupCaptionsCoordinator;	// IMP=0x0000000000122a34
- (void)cleanupAnnouncementAssetInjection;	// IMP=0x0000000000122a0c
- (_Bool)setUpAnnouncementAssetInjection;	// IMP=0x00000000001227d8
- (id)newInjectorConfigurationForAnnouncementAsset:(id)arg1;	// IMP=0x000000000012255c
@property(readonly, nonatomic) long long messageAudioToken;
- (_Bool)configureAudioIO;	// IMP=0x000000000012225b
- (struct tagVCAudioIOConfiguration)defaultAudioIOConfiguration;	// IMP=0x0000000000121ea9
- (struct AudioStreamBasicDescription)defaultAudioFormat;	// IMP=0x0000000000121e75
- (int)deviceRoleForCallSource:(unsigned char)arg1;	// IMP=0x0000000000121e57
- (void)cleanupRealtimeContext;	// IMP=0x0000000000121e1c
- (_Bool)setupRealtimeContextWithToken:(long long)arg1;	// IMP=0x0000000000121985
- (void)setupInternalFormat;	// IMP=0x00000000001218f2
- (void)unregisterForThermalNotifications;	// IMP=0x00000000001218dd
- (void)registerForThermalNotifications;	// IMP=0x00000000001218c8
- (void)handleThermalPressureNotification:(id)arg1;	// IMP=0x00000000001218c2
- (struct __CFDictionary *)clientSpecificUserInfo;	// IMP=0x0000000000121857
- (_Bool)setupReportingAgentWithCallID:(unsigned int)arg1;	// IMP=0x00000000001212e0
- (struct __CFDictionary *)reportingInitialConfiguration;	// IMP=0x00000000001210fa
- (void)cleanupPeriodicReporting;	// IMP=0x00000000001210c2
- (void)setupPeriodicReporting;	// IMP=0x0000000000120f5d
- (_Bool)autoRunOnStart;	// IMP=0x0000000000120f55
- (id)onStop;	// IMP=0x0000000000120d52
- (id)onStart;	// IMP=0x0000000000120b0e
- (void)setUpRealtimeDefaults;	// IMP=0x0000000000120acd
- (id)stop;	// IMP=0x00000000001207cd
- (id)start;	// IMP=0x000000000012051f
- (void)invalidate;	// IMP=0x000000000012035c
- (void)dealloc;	// IMP=0x00000000001201bd
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x000000000011f8e3
- (_Bool)setUpInternalStateWithConfiguration:(id)arg1;	// IMP=0x000000000011f584
- (_Bool)setUpConfigurationIndependentInternalState;	// IMP=0x000000000011f393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

