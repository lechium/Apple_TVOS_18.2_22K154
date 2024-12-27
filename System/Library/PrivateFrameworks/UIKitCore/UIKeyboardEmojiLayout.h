//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewFlowLayout.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary *_attributes;	// 280 = 0x118
    NSMutableArray *_headerWidths;	// 288 = 0x120
}

+ (Class)invalidationContextClass;	// IMP=0x0060000000dce613
- (void).cxx_destruct;	// IMP=0x0000000000dcff08
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;	// IMP=0x0000000000dcfc84
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;	// IMP=0x0000000000dcfba6
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000dcfa42
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000000dcfa3a
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000dcfa32
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000dcf01a
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000dcec09
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000000dce8b0
- (void)prepareLayout;	// IMP=0x0000000000dce791
- (void)_setAttributes:(id)arg1 forSection:(long long)arg2;	// IMP=0x0000000000dce68b
- (void)dealloc;	// IMP=0x0000000000dce624

@end

