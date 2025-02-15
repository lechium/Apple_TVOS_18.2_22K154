//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBRenderFactory.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPhone : UIKBRenderFactory
{
}

+ (id)_textOffsetHints;	// IMP=0x0080000000cc15b4
- (void)setupLayoutSegments;	// IMP=0x0000000000cc1d87
- (struct)customizedOffsetForString:(id)arg1 isPrimary:(_Bool)arg2 isLandscape:(_Bool)arg3 withFrame:(struct CGRect)arg4;	// IMP=0x0000000000cc181e
- (id)shiftDeleteGlyphTraits;	// IMP=0x0000000000cc1483
- (id)shiftLockControlKeyTraits;	// IMP=0x0000000000cc12b6
- (id)shiftedControlKeyTraits;	// IMP=0x0000000000cc10c8
- (id)activeControlKeyTraits;	// IMP=0x0000000000cc0f19
- (id)controlKeyTraits;	// IMP=0x0000000000cc0d72
- (double)_row4ControlSegmentWidthRight;	// IMP=0x0000000000cc0d60
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x0000000000cc0d52
- (_Bool)isCustomizedKeyStyle;	// IMP=0x0000000000cc0c8e
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000cbdd04
- (id)_textStyleForSpaceKey;	// IMP=0x0000000000cbdc99
- (_Bool)_shouldConfigureSecondarySymbolStyleForSpaceKey:(id)arg1;	// IMP=0x0000000000cbdc0f
- (void)_configureTraitsForPopupStyle:(id)arg1 withKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x0000000000cbc61d
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x0000000000cbc530
- (long long)rowLimitForKey:(id)arg1;	// IMP=0x0000000000cbc520
- (_Bool)_popupMenuStyleForKey:(id)arg1;	// IMP=0x0000000000cbc485
- (_Bool)_popupStyleForKey:(id)arg1;	// IMP=0x0000000000cbc3b4
- (void)_customizeTraits:(id)arg1 forZhuyinGridDualStringKey:(id)arg2;	// IMP=0x0000000000cbbf20
- (void)_customizeTraits:(id)arg1 forMultiscriptKey:(id)arg2 style:(long long)arg3;	// IMP=0x0000000000cbb750
- (void)_customizeTraits:(id)arg1 forPredictionCellKey:(id)arg2;	// IMP=0x0000000000cbb4e0
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x0000000000cba5f0
- (double)dualStringBottomAdditionalOffsetForDisplayContents:(id)arg1;	// IMP=0x0000000000cba580
- (_Bool)isTallPopup;	// IMP=0x0000000000cba578
- (double)popupFontSize;	// IMP=0x0000000000cba56a
- (struct CGPoint)popupSymbolTextOffset;	// IMP=0x0000000000cba559
- (double)variantAnnotationTextFontSize;	// IMP=0x0000000000cba54b
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x0000000000cba53a
- (struct CGPoint)variantSymbolTextOffset;	// IMP=0x0000000000cba529
- (double)variantWideShadowWeight;	// IMP=0x0000000000cba51b
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x0000000000cba508
- (struct UIEdgeInsets)variantDisplayFrameInsets;	// IMP=0x0000000000cba4e8
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x0000000000cba4d5
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;	// IMP=0x0000000000cba4b6
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x0000000000cba498
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000cb9179
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000cb8c99
- (_Bool)needsSmallerFontSizeForKey:(id)arg1;	// IMP=0x0000000000cb8ba1
- (struct UIEdgeInsets)dynamicInsetsForNumberOfRows:(unsigned long long)arg1;	// IMP=0x0000000000cb8b2e
- (double)dynamicBottomRowMultiplier;	// IMP=0x0000000000cb8b20
- (struct UIEdgeInsets)dynamicInsets;	// IMP=0x0000000000cb8b06
- (struct CGPoint)conjunctStringKeyOffsetTelugu;	// IMP=0x0000000000cb8af5
- (struct CGPoint)stringKeyOffsetTelugu;	// IMP=0x0000000000cb8ae9
- (struct CGPoint)stringKeyOffsetTamil;	// IMP=0x0000000000cb8add
- (struct CGPoint)stringKeyOffsetOriya;	// IMP=0x0000000000cb8ad1
- (struct CGPoint)stringKeyOffsetMalayalam;	// IMP=0x0000000000cb8ac5
- (struct CGPoint)stringKeyOffsetKannada;	// IMP=0x0000000000cb8ab9
- (struct CGPoint)stringKeyOffsetGurmukhi;	// IMP=0x0000000000cb8aad
- (struct CGPoint)stringKeyOffsetGujarati;	// IMP=0x0000000000cb8aa1
- (struct CGPoint)stringKeyOffsetDevanagari;	// IMP=0x0000000000cb8a95
- (struct CGPoint)stringKeyOffsetBengali;	// IMP=0x0000000000cb8a89
- (double)stringKeyFontSizeTelugu;	// IMP=0x0000000000cb8a7b
- (double)stringKeyFontSizeTamil;	// IMP=0x0000000000cb8a6d
- (double)stringKeyFontSizeOriya;	// IMP=0x0000000000cb8a5f
- (double)stringKeyFontSizeMalayalam;	// IMP=0x0000000000cb8a51
- (double)stringKeyFontSizeKannada;	// IMP=0x0000000000cb8a43
- (double)stringKeyFontSizeGurmukhi;	// IMP=0x0000000000cb8a35
- (double)stringKeyFontSizeGujarati;	// IMP=0x0000000000cb8a27
- (double)stringKeyFontSizeDevanagari;	// IMP=0x0000000000cb8a19
- (double)stringKeyFontSizeBengali;	// IMP=0x0000000000cb8a0b
- (_Bool)iPadSansHomeButtonLayout;	// IMP=0x0000000000cb8a03
- (_Bool)iPadFudgeLayout;	// IMP=0x0000000000cb89fb
- (double)skinnyKeyThreshold;	// IMP=0x0000000000cb89ed
- (id)muttitapReverseKeyImageName;	// IMP=0x0000000000cb89e0
- (id)multitapCompleteKeyImageName;	// IMP=0x0000000000cb89d3
- (struct CGPoint)symbolImageControlKeyOffset;	// IMP=0x0000000000cb89bd
- (struct CGPoint)ZWNJKeyOffset;	// IMP=0x0000000000cb89b1
- (struct CGPoint)secondaryShiftKeyOffset;	// IMP=0x0000000000cb89a0
- (struct CGPoint)shiftKeyOffset;	// IMP=0x0000000000cb8994
- (struct CGPoint)deleteKeyOffset;	// IMP=0x0000000000cb8988
- (struct CGPoint)moreABCKeyWideCellOffset;	// IMP=0x0000000000cb8977
- (struct CGPoint)moreABCKeyOffset;	// IMP=0x0000000000cb8966
- (struct CGPoint)more123KeyOffset;	// IMP=0x0000000000cb8955
- (struct CGPoint)dictationKeyOffset;	// IMP=0x0000000000cb8944
- (struct CGPoint)realEmojiKeyOffset;	// IMP=0x0000000000cb892e
- (struct CGPoint)internationalKeyOffset;	// IMP=0x0000000000cb891d
- (struct CGPoint)gurmukhiEkOnkarOffset;	// IMP=0x0000000000cb8907
- (struct CGPoint)zhuyinFirstToneKeyOffset;	// IMP=0x0000000000cb88f1
- (struct CGPoint)dismissKeyOffset;	// IMP=0x0000000000cb88db
- (struct CGPoint)undoKeyOffset;	// IMP=0x0000000000cb88c5
- (struct CGPoint)boldKeyOffset;	// IMP=0x0000000000cb88af
- (struct CGPoint)pasteKeyOffset;	// IMP=0x0000000000cb8899
- (struct CGPoint)copyKeyOffset;	// IMP=0x0000000000cb8883
- (struct CGPoint)cutKeyOffset;	// IMP=0x0000000000cb886d
- (struct CGPoint)rightArrowKeyOffset;	// IMP=0x0000000000cb8857
- (struct CGPoint)leftArrowKeyOffset;	// IMP=0x0000000000cb8841
- (struct CGPoint)returnKeyOffset;	// IMP=0x0000000000cb8830
- (struct CGPoint)stringKeyOffset;	// IMP=0x0000000000cb881f
- (double)smallSymbolImageFontSize;	// IMP=0x0000000000cb8811
- (double)symbolImageControlKeyFontSize;	// IMP=0x0000000000cb8803
- (double)gurmukhiEkOnkarFontSize;	// IMP=0x0000000000cb87f5
- (double)zhuyinFirstToneKeyFontSize;	// IMP=0x0000000000cb87e7
- (double)moreABCKeyWideCellFontSize;	// IMP=0x0000000000cb87d9
- (double)moreABCKeyFontSize;	// IMP=0x0000000000cb87cb
- (double)moreKeyFontSize;	// IMP=0x0000000000cb87bd
- (double)assistKeyFontSize;	// IMP=0x0000000000cb87af
- (double)returnKeyFontSize;	// IMP=0x0000000000cb87a1
- (double)hintNoneKeyFontSize;	// IMP=0x0000000000cb8793
- (double)shiftKeyFontSize;	// IMP=0x0000000000cb8785
- (double)deleteKeyFontSize;	// IMP=0x0000000000cb8777
- (double)stringKeyFontSize;	// IMP=0x0000000000cb8769
- (long long)assetIdiom;	// IMP=0x0000000000cb8761
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x0000000000cb8756

@end

