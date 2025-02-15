//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TXRImageInfo, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRParserImageIO : NSObject
{
    TXRTextureInfo *_textureInfo;	// 8 = 0x8
    TXRImageInfo *_imageInfo;	// 16 = 0x10
}

+ (struct CGImage *)newCGImageFromImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 error:(id *)arg3;	// IMP=0x00100000000b9873
+ (_Bool)exportImage:(id)arg1 url:(id)arg2 uttype:(struct __CFString *)arg3 colorSpace:(struct CGColorSpace *)arg4 orientation:(unsigned char)arg5 error:(id *)arg6;	// IMP=0x00100000000b94be
+ (_Bool)exportTexture:(id)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000b94b6
+ (id)decodeCGImageNonIndexed:(struct CGImage *)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000b7ee6
+ (id)decodeCGImage:(struct CGImage *)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000b7e3b
+ (int)determineColorSpaceClass:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;	// IMP=0x00100000000b7cd5
+ (_Bool)handlesData:(id)arg1;	// IMP=0x00100000000b7930
- (void).cxx_destruct;	// IMP=0x00000000000b9cba
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;	// IMP=0x00000000000b94a8
- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b7938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

