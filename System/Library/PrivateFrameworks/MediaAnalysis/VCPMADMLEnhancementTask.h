//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNNMLEnhancerEspresso, MADMLEnhancementRequest, NSString, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface VCPMADMLEnhancementTask : NSObject
{
    MADMLEnhancementRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    CNNMLEnhancerEspresso *_enhancer;	// 24 = 0x18
    NSString *_modelName;	// 32 = 0x20
    NSString *_modelVersion;	// 40 = 0x28
    struct atomic<bool> _canceled;	// 48 = 0x30
    NSString *_signpostPayload;	// 56 = 0x38
    struct CF<__CVPixelBufferPool *> _pixelBufferPool;	// 64 = 0x40
    struct CF<__CVPixelBufferPool *> _outputPixelBufferPool;	// 72 = 0x48
    struct CF<OpaqueVTPixelTransferSession *> _transferSession;	// 80 = 0x50
}

+ (id)dependencies;	// IMP=0x001000000026e398
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x001000000026e180
- (id).cxx_construct;	// IMP=0x000000000027037c
- (void).cxx_destruct;	// IMP=0x000000000027030d
- (int)run;	// IMP=0x000000000026f12c
- (int)createModel;	// IMP=0x000000000026e6c8
- (int)convertPixelFormat:(struct __CVBuffer **)arg1;	// IMP=0x000000000026e3c6
- (void)cancel;	// IMP=0x000000000026e3bb
- (_Bool)autoCancellable;	// IMP=0x000000000026e3b3
- (float)resourceRequirement;	// IMP=0x000000000026e3a5
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x000000000026e0a2

@end

