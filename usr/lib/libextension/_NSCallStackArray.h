//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray
{
    void **_frames;	// 8 = 0x8
    unsigned long long _cnt;	// 16 = 0x10
    unsigned long long _ignore;	// 24 = 0x18
    char **_pcstrs;	// 32 = 0x20
    _Bool _wantSyms;	// 40 = 0x28
}

+ (id)arrayWithFrames:(void **)arg1 count:(unsigned long long)arg2 symbols:(_Bool)arg3;	// IMP=0x0060000000876496
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000876a65
- (unsigned long long)_descriptionWithBuffer:(char *)arg1 size:(long long)arg2;	// IMP=0x0000000000876878
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x00000000008766d1
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008765a0
- (unsigned long long)count;	// IMP=0x000000000087658f
- (void)dealloc;	// IMP=0x0000000000876516

@end

