//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFloatingContentView.h>

@class NSString, UIImage, UIView, VUIBaseView, VUIImageProxy, VUIImageView, VUIMonogramDescription, VUIMonogramViewConfiguration;

__attribute__((visibility("hidden")))
@interface VUIMonogramView : _UIFloatingContentView
{
    VUIBaseView *_placeholderView;	// 8 = 0x8
    _Bool _isSelected;	// 16 = 0x10
    VUIMonogramViewConfiguration *_configuration;	// 24 = 0x18
    VUIMonogramDescription *_monogramDescription;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    UIImage *_placeholderImage;	// 48 = 0x30
    double _unfocusedImageAlpha;	// 56 = 0x38
    UIView *_overlayView;	// 64 = 0x40
    CDUnknownBlockType _pressCompletionBlock;	// 72 = 0x48
    VUIBaseView *_focusedShadowView;	// 80 = 0x50
    VUIBaseView *_unfocusedShadowView;	// 88 = 0x58
    double _defaultFocusedSizeIncrease;	// 96 = 0x60
    VUIImageView *_imageView;	// 104 = 0x68
    VUIImageProxy *_imageProxy;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001aaa2c
@property(retain, nonatomic) VUIImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) VUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double defaultFocusedSizeIncrease; // @synthesize defaultFocusedSizeIncrease=_defaultFocusedSizeIncrease;
@property(retain, nonatomic) VUIBaseView *unfocusedShadowView; // @synthesize unfocusedShadowView=_unfocusedShadowView;
@property(retain, nonatomic) VUIBaseView *focusedShadowView; // @synthesize focusedShadowView=_focusedShadowView;
@property(copy, nonatomic) CDUnknownBlockType pressCompletionBlock; // @synthesize pressCompletionBlock=_pressCompletionBlock;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double unfocusedImageAlpha; // @synthesize unfocusedImageAlpha=_unfocusedImageAlpha;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) VUIMonogramDescription *monogramDescription; // @synthesize monogramDescription=_monogramDescription;
@property(retain, nonatomic) VUIMonogramViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;	// IMP=0x00000000001aa088
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000000001a9f5c
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;	// IMP=0x00000000001a9ce5
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;	// IMP=0x00000000001a9c5f
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000001a9c59
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001a9be7
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a9b77
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a9b35
- (void)layoutSubviews;	// IMP=0x00000000001a98f0
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001a96fd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001a96e0
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a9467
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a9216
- (void)_updatePlaceholerView;	// IMP=0x00000000001a9193
- (void)setUnFocusedShadowView:(id)arg1;	// IMP=0x00000000001a8f18
- (void)updateShadowImage;	// IMP=0x00000000001a8c70
- (void)_handleHighContrastFocusIndicator;	// IMP=0x00000000001a8b47
- (void)_registerAccessiblityNotification;	// IMP=0x00000000001a8ae0
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x00000000001a8814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

