//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPPoolBasedPixelBufferCreator : NSObject
{
    struct CF<__CVPixelBufferPool *> _pool;	// 8 = 0x8
    long long _bufferWidth;	// 16 = 0x10
    long long _bufferHeight;	// 24 = 0x18
    unsigned int _pixelFormat;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000333d35
- (void).cxx_destruct;	// IMP=0x0000000000333d27
- (int)createPixelBuffer:(struct __CVBuffer **)arg1;	// IMP=0x0000000000333c83
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withBufferWidth:(long long)arg2 bufferHeight:(long long)arg3 andPixelFormat:(unsigned int)arg4;	// IMP=0x0000000000333ae2
- (id)initWithBufferWidth:(long long)arg1 bufferHeight:(long long)arg2 andPixelFormat:(unsigned int)arg3;	// IMP=0x000000000033398a

@end

