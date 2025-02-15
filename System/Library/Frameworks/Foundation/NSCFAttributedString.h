//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableAttributedString.h"

__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000074f071
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000074f4bd
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000074f476
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000074f43e
- (void)setAttributedString:(id)arg1;	// IMP=0x000000000074f3f9
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000074f3c8
- (void)appendAttributedString:(id)arg1;	// IMP=0x000000000074f383
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000074f34f
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x000000000074f31d
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000074f2e2
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000074f159
- (Class)classForCoder;	// IMP=0x000000000074f133
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074f122
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074f113
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000074f0f8
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x000000000074f0dd
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000074f0c4
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000074f0ad
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000074f09d
- (unsigned long long)length;	// IMP=0x000000000074f093
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000074f083
- (id)string;	// IMP=0x000000000074f079
- (_Bool)_isDeallocating;	// IMP=0x000000000074f061
- (_Bool)_tryRetain;	// IMP=0x000000000074f050
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000074f035
- (unsigned long long)retainCount;	// IMP=0x000000000074f02b
- (oneway void)release;	// IMP=0x000000000074f021
- (id)retain;	// IMP=0x000000000074f017

@end

