//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlFontCacheKey : NSObject
{
    NSString *_styleProviderName;	// 8 = 0x8
    int _size;	// 16 = 0x10
    _Bool _selected;	// 20 = 0x14
    _Bool _bold;	// 21 = 0x15
}

- (void).cxx_destruct;	// IMP=0x000000000084d544
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x000000000084d45c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000084d3f5
- (unsigned long long)hash;	// IMP=0x000000000084d3c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000084d3b5
- (id)initWithStyleProvider:(id)arg1 size:(int)arg2 selected:(_Bool)arg3 bold:(_Bool)arg4;	// IMP=0x000000000084d319

@end

