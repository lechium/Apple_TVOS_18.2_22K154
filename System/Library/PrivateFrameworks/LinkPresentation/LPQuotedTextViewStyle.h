//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPTextViewStyle, UIFont;

__attribute__((visibility("hidden")))
@interface LPQuotedTextViewStyle
{
    _Bool _showQuoteIndicator;	// 128 = 0x80
    _Bool _showCharacterLimitIndicator;	// 129 = 0x81
    unsigned int _maximumLinesToConsiderShort;	// 132 = 0x84
    UIFont *_longPullQuoteFont;	// 136 = 0x88
    LPTextViewStyle *_characterLimitIndicatorStyle;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000006c37f
@property(readonly, retain, nonatomic) LPTextViewStyle *characterLimitIndicatorStyle; // @synthesize characterLimitIndicatorStyle=_characterLimitIndicatorStyle;
@property(nonatomic) _Bool showCharacterLimitIndicator; // @synthesize showCharacterLimitIndicator=_showCharacterLimitIndicator;
@property(nonatomic) _Bool showQuoteIndicator; // @synthesize showQuoteIndicator=_showQuoteIndicator;
@property(nonatomic) unsigned int maximumLinesToConsiderShort; // @synthesize maximumLinesToConsiderShort=_maximumLinesToConsiderShort;
@property(retain, nonatomic) UIFont *longPullQuoteFont; // @synthesize longPullQuoteFont=_longPullQuoteFont;
- (id)adjustedForString:(id)arg1;	// IMP=0x000000000006c26b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c1c6
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;	// IMP=0x000000000006b8e0

@end

