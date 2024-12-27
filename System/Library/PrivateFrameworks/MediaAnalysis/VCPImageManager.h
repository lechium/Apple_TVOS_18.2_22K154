//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject
{
    struct CMPhotoCompressionSession *_encodeSession;	// 8 = 0x8
    struct CMPhotoDecompressionSession *_decodeSession;	// 16 = 0x10
    struct OpaqueVTPixelTransferSession *_transferSession;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_transcodeQueue;	// 32 = 0x20
}

+ (_Bool)_exportReencodedJPEG;	// IMP=0x00600000003109cb
+ (_Bool)loggingEnabled;	// IMP=0x006000000030e04d
+ (_Bool)allowFastPathDecodeWithUniformType:(id)arg1 pixelWidth:(unsigned long long)arg2 andPixelHeight:(unsigned long long)arg3;	// IMP=0x006000000030e012
+ (_Bool)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1;	// IMP=0x006000000030df7a
+ (id)sharedImageManager;	// IMP=0x006000000030dee8
- (void).cxx_destruct;	// IMP=0x00000000003116b7
- (int)compressCVPixelBuffer:(struct __CVBuffer *)arg1 toJPEGData:(id *)arg2 targetBitStreamLength:(unsigned long long)arg3 padding:(_Bool)arg4;	// IMP=0x00000000003109d3
- (void)flushCache;	// IMP=0x00000000003109b6
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 orientation:(unsigned int *)arg4;	// IMP=0x000000000031071e
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3;	// IMP=0x0000000000310709
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(_Bool)arg3 orientation:(unsigned int *)arg4;	// IMP=0x00000000003106df
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 flushCache:(_Bool)arg4 orientation:(unsigned int *)arg5;	// IMP=0x0000000000310443
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(_Bool)arg3;	// IMP=0x000000000031042e
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 orientation:(unsigned int *)arg4;	// IMP=0x0000000000310319
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;	// IMP=0x0000000000310207
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2;	// IMP=0x000000000031010d
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(_Bool)arg5 orientation:(unsigned int *)arg6;	// IMP=0x000000000030fcd4
- (int)decodeImageSource:(struct CGImageSource *)arg1 withUniformTypeIdentifier:(id)arg2 pixelFormat:(int)arg3 maxDimension:(unsigned long long)arg4 orientation:(unsigned int *)arg5 pixelBuffer:(struct __CVBuffer **)arg6;	// IMP=0x000000000030f438
- (int)drawImage:(struct CGImage *)arg1 pixelFormat:(int)arg2 withOrientation:(unsigned int)arg3 maxDimension:(unsigned long long)arg4 pixelBuffer:(struct __CVBuffer **)arg5;	// IMP=0x000000000030e9b3
- (int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4 orientation:(unsigned int *)arg5 flushCache:(_Bool)arg6;	// IMP=0x000000000030e569
- (int)convertPixelBuffer:(struct __CVBuffer **)arg1 toPixelFormat:(int)arg2 flushCache:(_Bool)arg3;	// IMP=0x000000000030e477
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x000000000030e38e
- (id)dataForResource:(id)arg1;	// IMP=0x000000000030e055
- (void)dealloc;	// IMP=0x000000000030de33
- (id)init;	// IMP=0x000000000030dd90

@end

