//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface HBTopShelfSectionLabelLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _aboveFocusedItem;	// 8 = 0x8
    _Bool _animatingFocusUpdate;	// 9 = 0x9
    unsigned long long _focusAnimationOptions;	// 16 = 0x10
    double _focusingAnimationDuration;	// 24 = 0x18
    double _unfocusingAnimationDuration;	// 32 = 0x20
}

@property(nonatomic) double unfocusingAnimationDuration; // @synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration;
@property(nonatomic) double focusingAnimationDuration; // @synthesize focusingAnimationDuration=_focusingAnimationDuration;
@property(nonatomic) unsigned long long focusAnimationOptions; // @synthesize focusAnimationOptions=_focusAnimationOptions;
@property(nonatomic, getter=isAnimatingFocusUpdate) _Bool animatingFocusUpdate; // @synthesize animatingFocusUpdate=_animatingFocusUpdate;
@property(nonatomic, getter=isAboveFocusedItem) _Bool aboveFocusedItem; // @synthesize aboveFocusedItem=_aboveFocusedItem;
- (id)description;	// IMP=0x0000000000010258
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000100a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ffd0

@end

