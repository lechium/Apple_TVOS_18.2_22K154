//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIKBSplitImageView : UIView
{
    _Bool _canStretchAsFullWidth;	// 8 = 0x8
    UIImageView *_fullView;	// 16 = 0x10
    UIImageView *_splitLeft;	// 24 = 0x18
    UIImageView *_splitRight;	// 32 = 0x20
    NSString *_currentFilterType;	// 40 = 0x28
    NSArray *_splitConstraints;	// 48 = 0x30
    NSLayoutConstraint *_leftWidthConstraint;	// 56 = 0x38
    NSLayoutConstraint *_rightWidthConstraint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000d05a6e
@property(retain, nonatomic) NSString *filterType; // @synthesize filterType=_currentFilterType;
- (void)clearImages;	// IMP=0x0000000000d059fd
- (void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3;	// IMP=0x0000000000d05503
- (void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4;	// IMP=0x0000000000d051ee
- (void)setContentsMultiplyColor:(id)arg1;	// IMP=0x0000000000d05114
- (void)insertSubviewAtBottom:(id)arg1;	// IMP=0x0000000000d050e2
- (void)prepareForDisplay:(_Bool)arg1;	// IMP=0x0000000000d04aec
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;	// IMP=0x0000000000d04ae4
- (void)addExtraFilters:(id)arg1;	// IMP=0x0000000000d0493c
- (id)initWithFrame:(struct CGRect)arg1 canStretchAsFullWidth:(_Bool)arg2;	// IMP=0x0000000000d0473a

@end

