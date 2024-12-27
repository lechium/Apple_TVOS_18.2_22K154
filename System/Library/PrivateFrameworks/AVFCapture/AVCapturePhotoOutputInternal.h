//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCapturePhotoSettings, AVMomentCaptureSettings, AVWeakReference, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol AVCapturePhotoCaptureDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoOutputInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    long long lastSettingsUniqueID;	// 16 = 0x10
    NSArray *availablePhotoPixelFormatTypes;	// 24 = 0x18
    NSArray *availablePhotoCodecTypes;	// 32 = 0x20
    NSDictionary *availableRawPhotoPixelFormatTypes;	// 40 = 0x28
    NSArray *availablePhotoFileTypes;	// 48 = 0x30
    NSArray *availableRawPhotoFileTypes;	// 56 = 0x38
    NSArray *availableRawPhotoCodecTypes;	// 64 = 0x40
    _Bool appleProRAWSupported;	// 72 = 0x48
    _Bool appleProRAWEnabled;	// 73 = 0x49
    long long maxPhotoQualityPrioritization;	// 80 = 0x50
    _Bool maxPhotoQualityPrioritizationHasBeenSetByClient;	// 88 = 0x58
    _Bool stillImageStabilizationSupported;	// 89 = 0x59
    _Bool virtualDeviceFusionSupported;	// 90 = 0x5a
    _Bool virtualDeviceConstituentPhotoDeliverySupported;	// 91 = 0x5b
    _Bool virtualDeviceConstituentPhotoDeliveryEnabled;	// 92 = 0x5c
    _Bool cameraCalibrationDataDeliverySupported;	// 93 = 0x5d
    NSArray *supportedHDRModes;	// 96 = 0x60
    _Bool EV0PhotoDeliverySupported;	// 104 = 0x68
    NSArray *supportedFlashModes;	// 112 = 0x70
    NSArray *supportedDigitalFlashModes;	// 120 = 0x78
    _Bool digitalFlashCaptureEnabled;	// 128 = 0x80
    _Bool autoRedEyeReductionSupported;	// 129 = 0x81
    _Bool highResolutionCaptureEnabled;	// 130 = 0x82
    unsigned long long maxBracketedCapturePhotoCount;	// 136 = 0x88
    _Bool lensStabilizationDuringBracketedCaptureSupported;	// 144 = 0x90
    _Bool livePhotoCaptureSupported;	// 145 = 0x91
    _Bool livePhotoCaptureEnabled;	// 146 = 0x92
    _Bool livePhotoAutoTrimmingEnabled;	// 147 = 0x93
    NSArray *availableLivePhotoVideoCodecTypes;	// 152 = 0x98
    CDStruct_1b6d18a9 livePhotoMovieDuration;	// 160 = 0xa0
    CDStruct_1b6d18a9 livePhotoMovieVideoFrameDuration;	// 184 = 0xb8
    CDStruct_79c71658 livePhotoMovieDimensions;	// 208 = 0xd0
    _Bool livePhotoCaptureSuspended;	// 216 = 0xd8
    _Bool preservesLivePhotoCaptureSuspendedOnSessionStop;	// 217 = 0xd9
    _Bool depthDataDeliverySupported;	// 218 = 0xda
    _Bool depthDataDeliveryEnabled;	// 219 = 0xdb
    _Bool portraitEffectsMatteDeliverySupported;	// 220 = 0xdc
    _Bool portraitEffectsMatteDeliveryEnabled;	// 221 = 0xdd
    NSArray *availableSemanticSegmentationTypes;	// 224 = 0xe0
    NSArray *enabledSemanticSegmentationTypes;	// 232 = 0xe8
    _Bool filterRenderingEnabled;	// 240 = 0xf0
    _Bool imageOptimizationForOfflineVideoStabilizationSupported;	// 241 = 0xf1
    _Bool optimizesImagesForOfflineVideoStabilization;	// 242 = 0xf2
    CDStruct_79c71658 optimizedImageDimensionsForOfflineStabilization;	// 244 = 0xf4
    float timeLapseCaptureRate;	// 252 = 0xfc
    _Bool timeLapseCaptureRateNeedsUpdate;	// 256 = 0x100
    _Bool livePhotoMovieProcessingSuspended;	// 257 = 0x101
    _Bool videoCaptureSupported;	// 258 = 0x102
    _Bool videoCaptureEnabled;	// 259 = 0x103
    _Bool resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;	// 260 = 0x104
    NSObject<OS_dispatch_queue> *sceneDetectionObserversDispatchQueue;	// 264 = 0x108
    int flashSceneObserverCount;	// 272 = 0x110
    int HDRSceneObserverCount;	// 276 = 0x114
    int stillImageStabilizationSceneObserverCount;	// 280 = 0x118
    _Bool isFlashScene;	// 284 = 0x11c
    _Bool isHDRScene;	// 285 = 0x11d
    _Bool isStillImageStabilizationScene;	// 286 = 0x11e
    int digitalFlashStatusObserverCount;	// 288 = 0x120
    long long digitalFlashStatus;	// 296 = 0x128
    int digitalFlashExposureTimesObserverCount;	// 304 = 0x130
    NSDictionary *digitalFlashExposureTimes;	// 312 = 0x138
    AVCapturePhotoSettings *photoSettingsForSceneMonitoring;	// 320 = 0x140
    struct OpaqueFigSimpleMutex *requestsLock;	// 328 = 0x148
    NSMutableArray *photoRequests;	// 336 = 0x150
    NSMutableArray *prepareRequests;	// 344 = 0x158
    NSMutableArray *movieRequests;	// 352 = 0x160
    NSObject<OS_dispatch_queue> *beginEndIrisMovieCaptureHostTimeQueue;	// 360 = 0x168
    NSObject<OS_dispatch_group> *beginEndIrisMovieCaptureHostTimeDispatchGroup;	// 368 = 0x170
    NSString *sourceDeviceType;	// 376 = 0x178
    _Bool movieRecordingSupported;	// 384 = 0x180
    _Bool movieRecordingEnabled;	// 385 = 0x181
    _Bool spatialOverCaptureSupported;	// 386 = 0x182
    _Bool spatialOverCaptureEnabled;	// 387 = 0x183
    AVMomentCaptureSettings *momentCaptureInFlight;	// 392 = 0x188
    id <AVCapturePhotoCaptureDelegate> momentPhotoCaptureDelegateInFlight;	// 400 = 0x190
    NSString *momentCaptureRequestIdentifierInFlight;	// 408 = 0x198
    long long lastMomentSettingsUniqueID;	// 416 = 0x1a0
    _Bool autoDeferredPhotoDeliverySupported;	// 424 = 0x1a8
    _Bool autoDeferredPhotoDeliveryEnabled;	// 425 = 0x1a9
    _Bool processedPhotoZoomWithoutUpscalingSupported;	// 426 = 0x1aa
    _Bool focusPixelFocusBlurScoreSupported;	// 427 = 0x1ab
    _Bool focusPixelFocusBlurScoreEnabled;	// 428 = 0x1ac
    _Bool contentAwareDistortionCorrectionSupported;	// 429 = 0x1ad
    _Bool contentAwareDistortionCorrectionEnabled;	// 430 = 0x1ae
    _Bool responsiveCaptureSupported;	// 431 = 0x1af
    _Bool responsiveCaptureEnabled;	// 432 = 0x1b0
    _Bool zeroShutterLagSupported;	// 433 = 0x1b1
    _Bool zeroShutterLagEnabled;	// 434 = 0x1b2
    _Bool zeroShutterLagAutomaticallyEnabled;	// 435 = 0x1b3
    _Bool ultraHighResolutionZeroShutterLagSupported;	// 436 = 0x1b4
    _Bool ultraHighResolutionZeroShutterLagSupportEnabled;	// 437 = 0x1b5
    _Bool ultraHighResolutionZeroShutterLagEnabled;	// 438 = 0x1b6
    long long captureReadiness;	// 440 = 0x1b8
    struct AVCapturePhotoOutputCaptureReadinessState readinessState;	// 448 = 0x1c0
    NSMutableArray *readinessCoordinators;	// 488 = 0x1e8
    _Bool previewQualityAdjustedPhotoFilterRenderingSupported;	// 496 = 0x1f0
    _Bool previewQualityAdjustedPhotoFilterRenderingEnabled;	// 497 = 0x1f1
    _Bool fastCapturePrioritizationSupported;	// 498 = 0x1f2
    _Bool fastCapturePrioritizationEnabled;	// 499 = 0x1f3
    _Bool highPhotoQualitySupported;	// 500 = 0x1f4
    _Bool semanticStyleRenderingSupported;	// 501 = 0x1f5
    _Bool semanticStyleRenderingEnabled;	// 502 = 0x1f6
    CDStruct_79c71658 maxPhotoDimensions;	// 504 = 0x1f8
    _Bool privatePhotoDimensionsEnabled;	// 512 = 0x200
    NSDictionary *exifFocalLengthsByZoomFactor;	// 520 = 0x208
    _Bool constantColorSupported;	// 528 = 0x210
    _Bool constantColorEnabled;	// 529 = 0x211
    _Bool constantColorClippingRecoveryEnabled;	// 530 = 0x212
    _Bool constantColorSaturationBoostEnabled;	// 531 = 0x213
    _Bool spatialPhotoCaptureSupported;	// 532 = 0x214
    _Bool spatialPhotoCaptureEnabled;	// 533 = 0x215
}

@end

