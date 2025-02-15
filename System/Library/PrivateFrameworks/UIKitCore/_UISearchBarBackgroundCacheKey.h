//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarBackgroundCacheKey : NSObject
{
    long long _barPosition;	// 8 = 0x8
    _Bool _usesContiguousBarBackground;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
    double _height;	// 40 = 0x28
    double _statusBarHeight;	// 48 = 0x30
    struct CGColor *_backgroundColor;	// 56 = 0x38
    struct CGColor *_strokeColor;	// 64 = 0x40
}

- (void)dealloc;	// IMP=0x0000000000402e4b
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000402daa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000402d43
- (unsigned long long)hash;	// IMP=0x0000000000402c24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000402c19
- (id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(_Bool)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(struct CGColor *)arg7 strokeColor:(struct CGColor *)arg8;	// IMP=0x0000000000402b61

@end

