//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureSessionConfiguration, AVRunLoopCondition, AVWeakReference, FigCaptureSessionConfiguration, NSError, NSHashTable, NSMutableArray, NSString, NSThread;
@protocol OS_dispatch_queue, OS_tcc_identity;

__attribute__((visibility("hidden")))
@interface AVCaptureSessionInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    NSString *sessionPreset;	// 16 = 0x10
    NSObject<OS_tcc_identity> *tccIdentity;	// 24 = 0x18
    int beginConfigRefCount;	// 32 = 0x20
    int graphRebuildFromCommitConfigRefCount;	// 36 = 0x24
    FigCaptureSessionConfiguration *sessionConfig;	// 40 = 0x28
    struct OpaqueFigCaptureSession *figCaptureSession;	// 48 = 0x30
    _Bool figCaptureSessionRunning;	// 56 = 0x38
    _Bool figCaptureSessionStarted;	// 57 = 0x39
    NSMutableArray *inputs;	// 64 = 0x40
    NSMutableArray *outputs;	// 72 = 0x48
    NSMutableArray *controls;	// 80 = 0x50
    AVWeakReference *weakReferenceControlsDelegate;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *clientControlsQueue;	// 96 = 0x60
    NSHashTable *videoPreviewLayers;	// 104 = 0x68
    NSMutableArray *connections;	// 112 = 0x70
    NSMutableArray *committedAVCaptureSessionConfigurations;	// 120 = 0x78
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;	// 128 = 0x80
    NSError *stopError;	// 136 = 0x88
    _Bool running;	// 144 = 0x90
    _Bool interrupted;	// 145 = 0x91
    _Bool usesApplicationAudioSession;	// 146 = 0x92
    _Bool automaticallyConfiguresApplicationAudioSession;	// 147 = 0x93
    _Bool configuresApplicationAudioSessionToMixWithOthers;	// 148 = 0x94
    _Bool automaticallyConfiguresCaptureDeviceForWideColor;	// 149 = 0x95
    AVRunLoopCondition *runLoopCondition;	// 152 = 0x98
    _Bool waitingForFigCaptureSessionToStart;	// 160 = 0xa0
    _Bool waitingForFigCaptureSessionToStop;	// 161 = 0xa1
    _Bool waitingForFigCaptureSessionConfigurationToBecomeLive;	// 162 = 0xa2
    long long graphRebuildSignalCount;	// 168 = 0xa8
    float hardwareCost;	// 176 = 0xb0
    struct OpaqueCMClock *synchronizationClock;	// 184 = 0xb8
    _Bool notifiesOnMainThread;	// 192 = 0xc0
    NSMutableArray *devicesToResetVideoZoomFactorAndMinMaxFrameDurations;	// 200 = 0xc8
    _Bool authorizedToUseCameraInMultipleForegroundAppLayout;	// 208 = 0xd0
    _Bool xctestAuthorizedToStealDevice;	// 209 = 0xd1
    _Bool continuityCameraIsWired;	// 210 = 0xd2
    int continuityCameraClientDeviceClass;	// 212 = 0xd4
    _Bool clientIsVOIP;	// 216 = 0xd8
    _Bool suppressVideoEffects;	// 217 = 0xd9
    struct OpaqueFigReentrantMutex *figCaptureSourceConfigChangeCacheMutex;	// 224 = 0xe0
    NSThread *threadWhichBeganConfiguration;	// 232 = 0xe8
    NSMutableArray *_devicesObservingVideoZoomFactor;	// 240 = 0xf0
    _Bool checkIfFileAlreadyExistForMFO;	// 248 = 0xf8
    NSMutableArray *recordingMovieFileOutputs;	// 256 = 0x100
    struct os_unfair_lock_s recordingMovieFileOutputsLock;	// 264 = 0x108
}

@end

