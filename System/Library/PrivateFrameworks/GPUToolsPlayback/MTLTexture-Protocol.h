//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsPlayback/MTLResource-Protocol.h>

@protocol MTLBuffer, MTLResource, MTLTexture;

@protocol MTLTexture <MTLResource>
@property(readonly, nonatomic) CDStruct_a06f635e swizzle;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) long long compressionType;
@property(readonly) _Bool allowGPUOptimizedContents;
@property(readonly) _Bool isSparse;
@property(readonly) unsigned long long tailSizeInBytes;
@property(readonly) unsigned long long firstMipmapInTail;
@property(readonly, getter=isFramebufferOnly) _Bool framebufferOnly;
@property(readonly) unsigned long long usage;
@property(readonly) unsigned long long arrayLength;
@property(readonly) unsigned long long sampleCount;
@property(readonly) unsigned long long mipmapLevelCount;
@property(readonly) unsigned long long depth;
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;
@property(readonly) unsigned long long pixelFormat;
@property(readonly) unsigned long long textureType;
@property(readonly) unsigned long long iosurfacePlane;
@property(readonly) struct __IOSurface *iosurface;
@property(readonly) unsigned long long bufferBytesPerRow;
@property(readonly) unsigned long long bufferOffset;
@property(readonly) id <MTLBuffer> buffer;
@property(readonly) unsigned long long parentRelativeSlice;
@property(readonly) unsigned long long parentRelativeLevel;
@property(readonly) id <MTLTexture> parentTexture;
@property(readonly) id <MTLResource> rootResource;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_4c83c94d)arg3 mipmapLevel:(unsigned long long)arg4;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_4c83c94d)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
@end

