//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _PFResultUniString
{
    unsigned int _length;	// 16 = 0x10
}

+ (struct __CFAllocator *)cfDeallocator;	// IMP=0x006000000007f313
+ (unsigned long long)bufferOffset;	// IMP=0x006000000007f306
+ (void)initialize;	// IMP=0x006000000007f261
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000007f4a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f467
- (unsigned long long)hash;	// IMP=0x000000000007f439
- (unsigned long long)cStringLength;	// IMP=0x000000000007f429
- (void)getCString:(char *)arg1;	// IMP=0x000000000007f3f3
- (_Bool)_isCString;	// IMP=0x000000000007f3eb
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000007f3a2
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x000000000007f364
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007f340
- (unsigned long long)length;	// IMP=0x000000000007f330
- (const char *)UTF8String;	// IMP=0x000000000007f320

@end

