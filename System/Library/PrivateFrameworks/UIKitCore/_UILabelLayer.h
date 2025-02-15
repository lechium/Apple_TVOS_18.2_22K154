//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIView, _UILabelContentLayer, _UILabelLightInertLayer, _UILabelLightReactiveLayer;

__attribute__((visibility("hidden")))
@interface _UILabelLayer : CALayer
{
    _UILabelContentLayer *_contentLayer;	// 8 = 0x8
    _UILabelLightReactiveLayer *_lightReactiveLayer;	// 16 = 0x10
    _UILabelLightInertLayer *_lightInertLayer;	// 24 = 0x18
    _Bool _contentInsetsValid;	// 32 = 0x20
    struct UIEdgeInsets _contentInsets;	// 40 = 0x28
    unsigned long long _oversizeEdgesIncludedInLabelLayer;	// 72 = 0x48
    UIView *_lightContainerView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000160fdbf
@property(retain, nonatomic) UIView *lightContainerView; // @synthesize lightContainerView=_lightContainerView;
@property(nonatomic) unsigned long long oversizeEdgesIncludedInLabelLayer; // @synthesize oversizeEdgesIncludedInLabelLayer=_oversizeEdgesIncludedInLabelLayer;
@property(readonly, nonatomic) struct UIEdgeInsets letterformAwareInsets; // @synthesize letterformAwareInsets=_contentInsets;
@property(readonly, nonatomic) _Bool letterformAwareInsetsAreValid; // @synthesize letterformAwareInsetsAreValid=_contentInsetsValid;
- (void)setContentsScale:(double)arg1;	// IMP=0x000000000160fcb6
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;	// IMP=0x000000000160fc29
- (void)setContentsFormat:(id)arg1;	// IMP=0x000000000160fb66
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;	// IMP=0x000000000160fadb
- (void)setContentsGravity:(id)arg1;	// IMP=0x000000000160fa18
- (id)_labelLayerToClipDuringBoundsSizeAnimation;	// IMP=0x000000000160f9fc
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;	// IMP=0x000000000160f9cd
- (void)setMasksToBounds:(_Bool)arg1;	// IMP=0x000000000160f951
- (void)_clearContents;	// IMP=0x000000000160f90d
- (_Bool)_glyphPathBoundsExcedesLayers:(struct CGRect)arg1 drawableGlyphPathBounds:(struct CGRect *)arg2 edgesClipped:(unsigned long long *)arg3;	// IMP=0x000000000160f5d6
- (void)reactToLightChanged;	// IMP=0x000000000160f5a8
- (void)_updateSublayers;	// IMP=0x000000000160f0e8
- (void)invalidateContentInsets;	// IMP=0x000000000160f09f
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x000000000160eff4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000160ef5c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000160eec4
- (void)layoutSublayers;	// IMP=0x000000000160ead8
- (void)updateContentInsets;	// IMP=0x000000000160e822

@end

