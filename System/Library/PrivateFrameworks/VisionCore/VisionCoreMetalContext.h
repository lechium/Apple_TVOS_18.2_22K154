//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface VisionCoreMetalContext : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLLibrary> _library;	// 24 = 0x18
}

+ (id)metalContextAndReturnError:(id *)arg1;	// IMP=0x0060000000025c9c
+ (void)makeBufferCoherent:(id)arg1 buffer:(id)arg2;	// IMP=0x0060000000025c96
+ (void)makeTextureCoherent:(id)arg1 texture:(id)arg2;	// IMP=0x0060000000025c90
+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1;	// IMP=0x0060000000025adf
- (void).cxx_destruct;	// IMP=0x0000000000025aa6
@property(readonly, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (unsigned long long)textureBytesPerRow:(int)arg1 format:(unsigned long long)arg2;	// IMP=0x0000000000025a21
- (void)copyMTLBufferToMTLTexture:(id)arg1 bytesPerRow:(unsigned long long)arg2 texture:(id)arg3;	// IMP=0x000000000002588d
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5;	// IMP=0x00000000000257e6
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize)arg3 plane:(unsigned long long)arg4;	// IMP=0x00000000000256d1
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3;	// IMP=0x000000000002564f
- (id)readBufferFromFile:(const char *)arg1 width:(int)arg2 pixelFormat:(unsigned long long)arg3;	// IMP=0x000000000002556c
- (id)readTextureFromFile:(const char *)arg1 width:(int)arg2 height:(int)arg3 pixelFormat:(unsigned long long)arg4;	// IMP=0x00000000000253f4
- (id)newBufferWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 data:(const void *)arg3;	// IMP=0x0000000000025384
- (id)newTextureWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3;	// IMP=0x00000000000252e2
- (int)writeMetalBufferToFile:(const char *)arg1 buffer:(id)arg2;	// IMP=0x0000000000025211
- (_Bool)writeMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;	// IMP=0x0000000000025033
- (_Bool)writeMetalTextureToFile:(const char *)arg1 texture:(id)arg2;	// IMP=0x000000000002501e
- (_Bool)writeMetalTextureToData:(void *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;	// IMP=0x0000000000024eeb
- (id)initWithLibrary:(id)arg1 device:(id)arg2 commandQueue:(id)arg3;	// IMP=0x0000000000024e33

@end

