//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureSession, AVSemanticStyle, AVWeakReference, CALayer, NSArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
    NSString *sinkID;	// 8 = 0x8
    AVCaptureSession *session;	// 16 = 0x10
    AVCaptureConnection *connection;	// 24 = 0x18
    struct OpaqueFigCaptureSession *figCaptureSession;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;	// 40 = 0x28
    CALayer *sublayer;	// 48 = 0x30
    struct CGSize sensorSize;	// 56 = 0x38
    NSString *sensorToPreviewVTScalingMode;	// 72 = 0x48
    unsigned int imageQueueSlot;	// 80 = 0x50
    struct CGSize previewSize;	// 88 = 0x58
    double previewRotationDegrees;	// 104 = 0x68
    NSString *gravity;	// 112 = 0x70
    _Bool disableActions;	// 120 = 0x78
    AVWeakReference *weakReference;	// 128 = 0x80
    _Bool isPreviewing;	// 136 = 0x88
    long long orientation;	// 144 = 0x90
    _Bool automaticallyAdjustsMirroring;	// 152 = 0x98
    _Bool mirrored;	// 153 = 0x99
    _Bool isPresentationLayer;	// 154 = 0x9a
    _Bool visible;	// 155 = 0x9b
    _Bool isPaused;	// 156 = 0x9c
    _Bool chromaNoiseReductionEnabled;	// 157 = 0x9d
    int changeSeed;	// 160 = 0xa0
    struct CGAffineTransform captureDeviceTransform;	// 168 = 0xa8
    double rollAdjustment;	// 216 = 0xd8
    _Bool depthDataDeliverySupported;	// 224 = 0xe0
    _Bool depthDataDeliveryEnabled;	// 225 = 0xe1
    _Bool filterRenderingEnabled;	// 226 = 0xe2
    _Bool unoptimizedFilterRenderingEnabled;	// 227 = 0xe3
    NSArray *videoPreviewFilters;	// 232 = 0xe8
    _Bool semanticStyleRenderingSupported;	// 240 = 0xf0
    _Bool semanticStyleRenderingEnabled;	// 241 = 0xf1
    AVSemanticStyle *semanticStyle;	// 248 = 0xf8
    double oddScreenWidth;	// 256 = 0x100
    double oddScreenScale;	// 264 = 0x108
    _Bool portraitAutoSuggestEnabled;	// 272 = 0x110
    _Bool portraitAutoSuggestSupported;	// 273 = 0x111
    _Bool zoomPictureInPictureOverlaySupported;	// 274 = 0x112
    _Bool zoomPictureInPictureOverlayEnabled;	// 275 = 0x113
    struct CGRect zoomPictureInPictureOverlayRect;	// 280 = 0x118
}

@end

