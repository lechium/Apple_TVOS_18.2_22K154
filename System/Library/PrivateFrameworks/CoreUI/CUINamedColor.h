//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CUINamedColor
{
    struct CGColor *_cgColor;	// 56 = 0x38
    NSString *_colorName;	// 64 = 0x40
    _Bool _substituteWithSystemColor;	// 72 = 0x48
}

@property(readonly, nonatomic) NSString *systemColorName; // @synthesize systemColorName=_colorName;
@property(readonly, nonatomic) _Bool substituteWithSystemColor; // @synthesize substituteWithSystemColor=_substituteWithSystemColor;
- (void)dealloc;	// IMP=0x00000000000ac4cf
@property(readonly, nonatomic) struct CGColor *cgColor;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;	// IMP=0x00000000000ac395

@end

