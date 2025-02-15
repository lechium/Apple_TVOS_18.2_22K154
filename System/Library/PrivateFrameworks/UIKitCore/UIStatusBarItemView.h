//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView
{
    double _currentOverlap;	// 160 = 0xa0
    struct CGContext *_imageContext;	// 168 = 0xa8
    double _imageContextScale;	// 176 = 0xb0
    _UILegibilityView *_legibilityView;	// 184 = 0xb8
    _UILegibilityImageSet *_lastGeneratedTextImage;	// 192 = 0xc0
    double _lastGeneratedTextImageLetterSpacing;	// 200 = 0xc8
    NSString *_lastGeneratedTextImageText;	// 208 = 0xd0
    _Bool _visible;	// 216 = 0xd8
    _Bool _allowsUpdates;	// 217 = 0xd9
    _Bool _shouldTintContentImage;	// 218 = 0xda
    UIStatusBarItem *_item;	// 224 = 0xe0
    UIStatusBarLayoutManager *_layoutManager;	// 232 = 0xe8
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 240 = 0xf0
}

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;	// IMP=0x006000000117c1d5
- (void).cxx_destruct;	// IMP=0x000000000117dece
@property(readonly, nonatomic) _Bool shouldTintContentImage; // @synthesize shouldTintContentImage=_shouldTintContentImage;
@property(nonatomic) _Bool allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) __weak UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
- (id)accessibilityHUDRepresentation;	// IMP=0x000000000117de37
- (_Bool)_shouldReverseLayoutDirection;	// IMP=0x000000000117de16
- (id)description;	// IMP=0x000000000117dd50
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000117dcee
- (void)endDisablingRasterization;	// IMP=0x000000000117dc94
- (void)beginDisablingRasterization;	// IMP=0x000000000117dc3a
- (id)imageWithShadowNamed:(id)arg1;	// IMP=0x000000000117db97
- (void)clearCachedTextImage;	// IMP=0x000000000117db46
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;	// IMP=0x000000000117d924
- (id)imageWithText:(id)arg1 shouldCache:(_Bool)arg2;	// IMP=0x000000000117d7dc
- (id)imageWithText:(id)arg1;	// IMP=0x000000000117d7c5
- (void)endImageContext;	// IMP=0x000000000117d77b
- (id)imageFromImageContextClippedToWidth:(double)arg1;	// IMP=0x000000000117d5f1
- (void)beginImageContextWithMinimumWidth:(double)arg1;	// IMP=0x000000000117d3b7
- (void)updateForNewStyle:(id)arg1;	// IMP=0x000000000117d3b1
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x000000000117d3ab
- (void)performPendedActions;	// IMP=0x000000000117d3a5
- (id)contentsIOSurface;	// IMP=0x000000000117d39d
- (id)contentsImage;	// IMP=0x000000000117d395
- (_Bool)animatesDataChange;	// IMP=0x000000000117d38d
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x000000000117d385
- (double)maximumOverlap;	// IMP=0x000000000117d37c
- (double)addContentOverlap:(double)arg1;	// IMP=0x000000000117d373
- (double)resetContentOverlap;	// IMP=0x000000000117d36a
- (double)extraRightPadding;	// IMP=0x000000000117d361
- (double)extraLeftPadding;	// IMP=0x000000000117d358
- (double)shadowPadding;	// IMP=0x000000000117d308
- (double)standardPadding;	// IMP=0x000000000117d2b8
- (long long)textAlignment;	// IMP=0x000000000117d273
- (id)textFont;	// IMP=0x000000000117d207
- (long long)textStyle;	// IMP=0x000000000117d1fc
- (void)setContentMode:(long long)arg1;	// IMP=0x000000000117d1a6
- (double)updateContentsAndWidth;	// IMP=0x000000000117cfcd
- (void)_tintContentLayerIfNeeded;	// IMP=0x000000000117ced6
- (double)neededSizeForImageSet:(id)arg1;	// IMP=0x000000000117cde4
- (double)adjustFrameToNewSize:(double)arg1;	// IMP=0x000000000117cd25
- (void)setLayerContentsImage:(id)arg1;	// IMP=0x000000000117c85d
- (double)legibilityStrength;	// IMP=0x000000000117c84f
- (long long)legibilityStyle;	// IMP=0x000000000117c80b
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;	// IMP=0x000000000117c78b
- (double)currentRightOverlap;	// IMP=0x000000000117c76d
- (double)currentLeftOverlap;	// IMP=0x000000000117c74f
- (double)currentOverlap;	// IMP=0x000000000117c73d
- (void)setCurrentOverlap:(double)arg1;	// IMP=0x000000000117c72b
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x000000000117c5c4
- (void)setVisible:(_Bool)arg1 settingAlpha:(_Bool)arg2;	// IMP=0x000000000117c591
- (id)foregroundView;	// IMP=0x000000000117c500
- (void)dealloc;	// IMP=0x000000000117c4ba
- (_Bool)allowsUserInteraction;	// IMP=0x000000000117c4b2
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;	// IMP=0x000000000117c2ee
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000117c27d

@end

