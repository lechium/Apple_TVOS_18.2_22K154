//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVideoComposition, NSDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionRenderContextInternal : NSObject
{
    NSDictionary *_basisProperties;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    struct CGAffineTransform _renderTransform;	// 32 = 0x20
    float _renderScale;	// 80 = 0x50
    struct {
        long long horizontalSpacing;
        long long verticalSpacing;
    } _pixelAspectRatio;	// 88 = 0x58
    struct {
        double left;
        double top;
        double right;
        double bottom;
    } _edgeWidths;	// 104 = 0x68
    _Bool _highQualityRendering;	// 136 = 0x88
    NSDictionary *_clientRequiredPixelBufferAttributes;	// 144 = 0x90
    NSDictionary *_destinationDesiredPixelBufferAttributes;	// 152 = 0x98
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;	// 160 = 0xa0
    NSString *_destinationDesiredPixelBufferColorPrimaries;	// 168 = 0xa8
    NSString *_destinationDesiredPixelBufferTransferFunction;	// 176 = 0xb0
    NSString *_blendingTransferFunction;	// 184 = 0xb8
    int pixelFormatFamily;	// 192 = 0xc0
    struct __CFDictionary *_pixelAspectRatioDict;	// 200 = 0xc8
    struct __CFDictionary *_cleanApertureDict;	// 208 = 0xd0
    CDStruct_79c71658 _destinationPixelBufferDimensions;	// 216 = 0xd8
    struct OpaqueFigSimpleMutex *_bufferPoollInitMutex;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;	// 232 = 0xe8
    struct __CVPixelBufferPool *_pixelBufferPool;	// 240 = 0xf0
    AVVideoComposition *_videoComposition;	// 248 = 0xf8
}

- (void)dealloc;	// IMP=0x0000000000176b15
- (void)_willDeallocOrFinalize;	// IMP=0x0000000000176a9a

@end

