//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, _UIGrabber, _UIRoundedRectShadowView;
@protocol UIDropShadowViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView
{
    _Bool __hasGrabber;	// 160 = 0xa0
    _Bool __insetsContentViewForGrabber;	// 161 = 0xa1
    _Bool __grabberLumaTrackingEnabled;	// 162 = 0xa2
    _Bool __grabberBlurEnabled;	// 163 = 0xa3
    _Bool _masksTopCornersOnly;	// 164 = 0xa4
    _Bool _supportsShadow;	// 165 = 0xa5
    UIView *_contentView;	// 168 = 0xa8
    UIView *_overlayView;	// 176 = 0xb0
    double __grabberAlpha;	// 184 = 0xb8
    double __grabberSpacing;	// 192 = 0xc0
    long long __grabberEdge;	// 200 = 0xc8
    id <UIDropShadowViewDelegate> __delegate;	// 208 = 0xd0
    long long _independentCorners;	// 216 = 0xd8
    UIView *_firstCornerClippingDescendant;	// 224 = 0xe0
    NSArray *_cornerClippingDescendants;	// 232 = 0xe8
    _UIGrabber *__topGrabber;	// 240 = 0xf0
    _UIGrabber *__bottomGrabber;	// 248 = 0xf8
    _UIRoundedRectShadowView *_magicShadowView;	// 256 = 0x100
    struct UIRectCornerRadii _environmentMatchingCornerRadii;	// 264 = 0x108
    struct UIEdgeInsets _contentTouchInsets;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000000167a3b2
@property(readonly, nonatomic) _UIRoundedRectShadowView *magicShadowView; // @synthesize magicShadowView=_magicShadowView;
@property(readonly, nonatomic) _UIGrabber *_bottomGrabber; // @synthesize _bottomGrabber=__bottomGrabber;
@property(readonly, nonatomic) _UIGrabber *_topGrabber; // @synthesize _topGrabber=__topGrabber;
@property(readonly, nonatomic) NSArray *cornerClippingDescendants; // @synthesize cornerClippingDescendants=_cornerClippingDescendants;
@property(readonly, nonatomic) __weak UIView *firstCornerClippingDescendant; // @synthesize firstCornerClippingDescendant=_firstCornerClippingDescendant;
@property(readonly, nonatomic) long long independentCorners; // @synthesize independentCorners=_independentCorners;
@property(readonly, nonatomic) _Bool supportsShadow; // @synthesize supportsShadow=_supportsShadow;
@property(nonatomic) _Bool masksTopCornersOnly; // @synthesize masksTopCornersOnly=_masksTopCornersOnly;
@property(nonatomic) __weak id <UIDropShadowViewDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic) struct UIEdgeInsets contentTouchInsets; // @synthesize contentTouchInsets=_contentTouchInsets;
@property(nonatomic, getter=_isGrabberBlurEnabled, setter=_setGrabberBlurEnabled:) _Bool _grabberBlurEnabled; // @synthesize _grabberBlurEnabled=__grabberBlurEnabled;
@property(nonatomic, getter=_isGrabberLumaTrackingEnabled, setter=_setGrabberLumaTrackingEnabled:) _Bool _grabberLumaTrackingEnabled; // @synthesize _grabberLumaTrackingEnabled=__grabberLumaTrackingEnabled;
@property(nonatomic, setter=_setInsetsContentViewForGrabber:) _Bool _insetsContentViewForGrabber; // @synthesize _insetsContentViewForGrabber=__insetsContentViewForGrabber;
@property(nonatomic, setter=_setGrabberEdge:) long long _grabberEdge; // @synthesize _grabberEdge=__grabberEdge;
@property(nonatomic, setter=_setGrabberSpacing:) double _grabberSpacing; // @synthesize _grabberSpacing=__grabberSpacing;
@property(nonatomic, setter=_setGrabberAlpha:) double _grabberAlpha; // @synthesize _grabberAlpha=__grabberAlpha;
@property(nonatomic, setter=_setHasGrabber:) _Bool _hasGrabber; // @synthesize _hasGrabber=__hasGrabber;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIRectCornerRadii environmentMatchingCornerRadii; // @synthesize environmentMatchingCornerRadii=_environmentMatchingCornerRadii;
- (void)didFinishRotation;	// IMP=0x000000000167a1a9
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;	// IMP=0x000000000167a090
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001679d9e
- (void)setMagicShadowAlpha:(double)arg1;	// IMP=0x0000000001679d4f
- (void)_grabberPrimaryAction;	// IMP=0x0000000001679cf2
- (_Bool)_isGrabber:(id)arg1;	// IMP=0x0000000001679c6c
@property(readonly, nonatomic) _Bool _hasCreatedGrabbers;
- (void)didMoveToWindow;	// IMP=0x00000000016791ba
- (void)updateCornerClippingViews;	// IMP=0x0000000001678bd0
@property(readonly, nonatomic) UIView *deepestClippingView;
- (void)_layoutGrabbers;	// IMP=0x000000000167884e
- (void)layoutSubviews;	// IMP=0x000000000167871c
@property(readonly, nonatomic) struct CGRect _contentViewFrame;
@property(readonly, nonatomic) _Bool _effectiveInsetsContentViewForGrabber;
- (id)initWithFrame:(struct CGRect)arg1 independentCorners:(long long)arg2 supportsShadow:(_Bool)arg3 stylesSheetsAsCards:(_Bool)arg4;	// IMP=0x0000000001677ab8

@end

