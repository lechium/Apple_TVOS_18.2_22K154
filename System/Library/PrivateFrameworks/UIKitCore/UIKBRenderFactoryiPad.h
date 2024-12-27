//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x0000000000cc7fc8
- (void)setupLayoutSegments;	// IMP=0x0000000000cc78ff
- (double)_row4ControlSegmentWidthRight;	// IMP=0x0000000000cc788b
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x0000000000cc787d
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000cc7148
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x0000000000cc6e20
- (long long)rowLimitForKey:(id)arg1;	// IMP=0x0000000000cc6d79
- (double)defaultVariantSizeThreshold;	// IMP=0x0000000000cc6d67
- (struct CGSize)defaultVariantGeometrySize;	// IMP=0x0000000000cc6d51
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x0000000000cc62b4
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;	// IMP=0x0000000000cc62ac
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000cc5386
- (id)lowQualityLayeredBackgroundColorName;	// IMP=0x0000000000cc5326
- (struct CGPoint)dismissKeyOffset;	// IMP=0x0000000000cc5315
- (struct CGPoint)dualStringKeyOffset;	// IMP=0x0000000000cc52ff
- (struct CGPoint)tinyPunctuationGlyphOffset;	// IMP=0x0000000000cc52ee
- (double)tinyPunctuationGlyphFontSize;	// IMP=0x0000000000cc52e0
- (double)messagesTypeKeyplanSwitchKeyFontSize;	// IMP=0x0000000000cc52d2
- (double)fallbackFontSize;	// IMP=0x0000000000cc52c4
- (double)symbolImageControlKeyFontSize;	// IMP=0x0000000000cc52b6
- (double)zhuyinFirstToneKeyFontSize;	// IMP=0x0000000000cc52a8
- (double)facemarkKeyFontSize;	// IMP=0x0000000000cc529a
- (double)emailDotKeyFontSize;	// IMP=0x0000000000cc528c
- (double)smallKanaKeyFontSize;	// IMP=0x0000000000cc527e
- (double)dismissKeyFontSize;	// IMP=0x0000000000cc5270
- (double)spaceKeyFontSize;	// IMP=0x0000000000cc5262
- (double)dictationKeyFontSize;	// IMP=0x0000000000cc5254
- (double)internationalKeyFontSize;	// IMP=0x0000000000cc5246
- (double)moreKeyFontSize;	// IMP=0x0000000000cc5238
- (double)deleteKeyFontSize;	// IMP=0x0000000000cc522a
- (double)shiftKeyFontSize;	// IMP=0x0000000000cc521c
- (double)defaultPathWeight;	// IMP=0x0000000000cc520e
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;	// IMP=0x0000000000cc5200
- (double)bottomRowDefaultFontSize;	// IMP=0x0000000000cc51f2
- (double)dualStringKeyFontSizeAdjustment;	// IMP=0x0000000000cc51e4
- (struct CGPoint)stringKeyOffset;	// IMP=0x0000000000cc51a6
- (double)stringKeyFontSize;	// IMP=0x0000000000cc5198
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000cc4c39
- (id)displayContentsForKey:(id)arg1;	// IMP=0x0000000000cc46fd
- (struct CGRect)insetFrame:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x0000000000cc4665
- (double)cornerRadiusForKey:(id)arg1;	// IMP=0x0000000000cc459a
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;	// IMP=0x0000000000cc4492
- (_Bool)_onLeftSide:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000cc438d
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x0000000000cc437c
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x0000000000cc4369
- (struct UIEdgeInsets)variantDisplayFrameInsets;	// IMP=0x0000000000cc4352
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x0000000000cc433f
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x0000000000cc431e
- (_Bool)iPadSansHomeButtonLayout;	// IMP=0x0000000000cc4316
- (_Bool)iPadFudgeLayout;	// IMP=0x0000000000cc430e
- (double)predictiveKeyCornerRadius;	// IMP=0x0000000000cc4300
- (double)skinnyKeyThreshold;	// IMP=0x0000000000cc42f2
- (id)returnKeyImageName;	// IMP=0x0000000000cc42e5
- (id)tabKeyImageName;	// IMP=0x0000000000cc42d8
- (id)capslockKeyImageName;	// IMP=0x0000000000cc42cb
- (id)ZWNJKeyImageName;	// IMP=0x0000000000cc42be
- (id)messagesWriteboardKeyImageName;	// IMP=0x0000000000cc42b1
- (id)muttitapReverseKeyImageName;	// IMP=0x0000000000cc4278
- (id)multitapCompleteKeyImageName;	// IMP=0x0000000000cc423f
- (struct CGPoint)ZWNJKeyOffset;	// IMP=0x0000000000cc422e
- (struct CGPoint)secondaryShiftKeyOffset;	// IMP=0x0000000000cc421c
- (struct CGPoint)symbolImageControlKeyOffset;	// IMP=0x0000000000cc420b
- (struct CGPoint)returnKeyOffset;	// IMP=0x0000000000cc41cd
- (struct CGPoint)shiftKeyOffset;	// IMP=0x0000000000cc41bc
- (struct CGPoint)deleteKeyOffset;	// IMP=0x0000000000cc41ab
- (struct CGPoint)dictationKeyOffset;	// IMP=0x0000000000cc419a
- (struct CGPoint)internationalKeyOffset;	// IMP=0x0000000000cc4189
- (double)keyInsetBottom;	// IMP=0x0000000000cc417b
- (double)returnKeySymbolFrameInset;	// IMP=0x0000000000cc416d
- (double)symbolFrameInset;	// IMP=0x0000000000cc415f
- (struct CGRect)dismissKeySymbolFrame;	// IMP=0x0000000000cc4145
- (struct CGRect)shiftKeySymbolFrame;	// IMP=0x0000000000cc412b
- (double)keyCornerRadius;	// IMP=0x0000000000cc411d
- (id)thinKeycapsFontName;	// IMP=0x0000000000cc410b
- (id)lightKeycapsFontName;	// IMP=0x0000000000cc40f9
- (void)setAllowsPaddles:(_Bool)arg1;	// IMP=0x0000000000cc40c5
- (long long)assetIdiom;	// IMP=0x0000000000cc40ba

@end

