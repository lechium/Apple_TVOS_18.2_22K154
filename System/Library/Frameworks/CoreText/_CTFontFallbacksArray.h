//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CTFontFallbacksArray : NSArray
{
    struct TUnfairLock _lock;	// 8 = 0x8
    const void *_baseFont;	// 16 = 0x10
    const struct TTraitsValues *_refTraits;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
    NSMutableArray *_cascade;	// 40 = 0x28
    NSMutableArray *_fallbacks;	// 48 = 0x30
    unsigned long long _hash;	// 56 = 0x38
    int _uiUse;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x00000000001100c8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000110093
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000110026
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011000f
- (unsigned long long)count;	// IMP=0x000000000010f474
- (void)dealloc;	// IMP=0x000000000010f41c

@end

