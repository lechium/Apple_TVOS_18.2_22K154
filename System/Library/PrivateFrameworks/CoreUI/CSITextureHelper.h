//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CSITextureHelper : NSObject
{
    struct _csibitmap *bmp;	// 8 = 0x8
    struct CGColorSpace *colorspaceHint;	// 16 = 0x10
    unsigned long long sourceRowbytes;	// 24 = 0x18
    unsigned int width;	// 32 = 0x20
    unsigned int height;	// 36 = 0x24
    unsigned int imageBytes;	// 40 = 0x28
    int pixelFormat;	// 44 = 0x2c
}

- (void)dealloc;	// IMP=0x0000000000076bb0

@end

