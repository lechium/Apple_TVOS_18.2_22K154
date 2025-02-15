//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSVariableWidthString : NSString
{
    NSDictionary *_variants;	// 8 = 0x8
    NSString *_defaultString;	// 16 = 0x10
}

- (id)_widthVariants;	// IMP=0x00000000007486c8
@property(readonly) unsigned long long length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000074868e
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000748671
- (id)formatConfiguration;	// IMP=0x0000000000748616
- (id)variantFittingPresentationWidth:(long long)arg1;	// IMP=0x00000000007483c1
- (void)dealloc;	// IMP=0x0000000000748346
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074833b
- (id)initWithWidthContexts:(id)arg1;	// IMP=0x0000000000748329
- (id)initWithWidthVariants:(id)arg1;	// IMP=0x0000000000748156
- (id)initWithString:(id)arg1 widthVariants:(id)arg2;	// IMP=0x00000000007480ab

@end

