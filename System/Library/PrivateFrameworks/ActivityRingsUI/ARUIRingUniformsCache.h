//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface ARUIRingUniformsCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)cacheWithLimit:(unsigned long long)arg1;	// IMP=0x0060000000015478
+ (id)defaultCache;	// IMP=0x006000000001544a
- (void).cxx_destruct;	// IMP=0x000000000001561b
- (void)clearCache;	// IMP=0x0000000000015605
- (id)uniformsForRing:(id)arg1 renderedInContext:(id)arg2;	// IMP=0x000000000001551f
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x00000000000154ae

@end

