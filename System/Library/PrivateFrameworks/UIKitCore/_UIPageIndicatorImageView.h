//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class _UIPageIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorImageView : UIImageView
{
    struct CGSize _cachedSize;	// 8 = 0x8
    _UIPageIndicatorView *_indicatorView;	// 24 = 0x18
}

@property(nonatomic) _UIPageIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000095e872
- (void)_updateSymbolConfiguration;	// IMP=0x000000000095e78c
- (struct CGSize)sizeForImage:(id)arg1 traits:(id)arg2;	// IMP=0x000000000095e40c
- (void)prepare;	// IMP=0x000000000095e2d4
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000095e293
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000095e22d
- (void)setImage:(id)arg1;	// IMP=0x000000000095dfea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000095df9e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000095df41

@end

