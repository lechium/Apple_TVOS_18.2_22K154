//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x0060000000926f80
+ (void)initialize;	// IMP=0x0060000000926f00
- (void).cxx_destruct;	// IMP=0x0000000000926ee0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000926ed0
- (unsigned long long)hash;	// IMP=0x0000000000926eb0
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000926e90
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x0000000000926e70
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000926e50
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000926e30
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000926e10
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000926df0
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000926dd0
- (unsigned long long)length;	// IMP=0x0000000000926db0
- (void)dealloc;	// IMP=0x0000000000926d00
- (id)initWithString:(id)arg1;	// IMP=0x0000000000926cd0

@end

