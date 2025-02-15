//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageBufferCache : NSObject
{
    struct __CFDictionary *_pixelBufferReps;	// 8 = 0x8
    struct os_unfair_lock_s _pixelBufferRepsLock;	// 16 = 0x10
}

+ (id)cacheKeyWithBufferFormat:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;	// IMP=0x00600000001e9e5d
+ (id)cacheKeyWithBufferFormat:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 cropRect:(struct CGRect)arg4;	// IMP=0x00600000001e9db4
- (void)purgeCacheRepresentationsForOriginalBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000001e9c9d
- (void)removeCachedBufferWithKey:(id)arg1;	// IMP=0x00000000001e9c19
- (struct __CVBuffer *)cachedBufferWithKey:(id)arg1;	// IMP=0x00000000001e9b86
- (void)cacheBuffer:(struct __CVBuffer *)arg1 forCacheKey:(id)arg2;	// IMP=0x00000000001e9afb
- (void)dealloc;	// IMP=0x00000000001e9a4f
- (id)init;	// IMP=0x00000000001e99b9

@end

