//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPPoolBasedPixelBufferCreator, VCPSceneProcessingImageManager;

@interface VCPPreAnalysisImageLoader : NSObject
{
    VCPSceneProcessingImageManager *_imageManager;	// 8 = 0x8
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;	// 16 = 0x10
    struct CF<OpaqueVTPixelTransferSession *> _transferSession;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000342510
- (void).cxx_destruct;	// IMP=0x00000000003424df
- (int)loadImageURL:(id)arg1 abnormalDimension:(unsigned long long)arg2 withNonPanoPreWarmSizes:(id)arg3 toColorPixelBuffer:(struct __CVBuffer **)arg4 lumaPixelBuffer:(struct __CVBuffer **)arg5 andImage:(id *)arg6;	// IMP=0x0000000000342074
- (int)_convertFromBuffer:(struct __CVBuffer *)arg1 toLumaPixelBuffer:(struct __CVBuffer **)arg2 abnormalDimension:(unsigned long long)arg3;	// IMP=0x0000000000341f21
- (int)_createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x0000000000341e4b
- (id)initWithMonochromeBufferCreator:(id)arg1;	// IMP=0x0000000000341d8e

@end

