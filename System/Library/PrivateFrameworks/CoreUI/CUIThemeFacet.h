//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIThemeFacet : NSObject
{
    struct _renditionkeytoken *_renditionKeyList;	// 8 = 0x8
    unsigned long long _themeIndex;	// 16 = 0x10
    long long _renditionType;	// 24 = 0x18
    struct CGSize _thumbnailSize;	// 32 = 0x20
    struct CGPoint _hotSpot;	// 48 = 0x30
    int _isTintable;	// 64 = 0x40
    struct {
        unsigned int hasCheckedButtonGlyph:1;
        unsigned int isButtonGlyph:1;
        unsigned int reserved:14;
    } _fFlags;	// 68 = 0x44
}

+ (_Bool)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x001000000005921d
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x0010000000058dac
+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;	// IMP=0x0010000000058aee
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x0010000000058ad2
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;	// IMP=0x00100000000589f0
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;	// IMP=0x00100000000589cb
+ (id)_bundleIdentifierForThemeRef:(unsigned long long)arg1;	// IMP=0x0010000000058828
+ (void)themeUnregisterThemeRef:(unsigned long long)arg1;	// IMP=0x00100000000585ef
+ (unsigned long long)themeWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000058401
+ (unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000581ab
+ (unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000058191
+ (unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000057fb1
+ (void)initialize;	// IMP=0x0010000000057f75
+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;	// IMP=0x00100000000573e1
+ (void)_invalidateArtworkCaches;	// IMP=0x00100000000573be
- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000005d3b0
- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000005d2e4
- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000005d23d
- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;	// IMP=0x000000000005d158
- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;	// IMP=0x000000000005d073
@property(readonly, copy) NSString *description;
- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;	// IMP=0x000000000005cfad
- (void)_applyFixedAttributesToKey:(id)arg1;	// IMP=0x000000000005cf91
- (struct CGSize)topLeftCapSize;	// IMP=0x000000000005cf3f
- (struct CGSize)thumbnailSize;	// IMP=0x000000000005ceef
- (id)thumbnail;	// IMP=0x000000000005ce07
- (id)displayName;	// IMP=0x000000000005cd91
- (id)properties;	// IMP=0x000000000005cd66
- (_Bool)isTintable;	// IMP=0x000000000005cd27
- (long long)renditionType;	// IMP=0x000000000005cced
- (id)renditionKey;	// IMP=0x000000000005ccb6
- (id)themeRendition;	// IMP=0x000000000005cc58
- (unsigned long long)themeIndex;	// IMP=0x000000000005cc4e
- (void)_setThemeIndex:(unsigned long long)arg1;	// IMP=0x000000000005cc44
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double *)arg2 style:(unsigned long long *)arg3;	// IMP=0x000000000005cb36
- (struct CGSize)sizeForSegmentOfType:(int)arg1;	// IMP=0x000000000005c9cb
- (struct CGSize)imageSize;	// IMP=0x000000000005c8ec
- (id)blendModeAsCAFilterString;	// IMP=0x000000000005c8d8
- (id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1;	// IMP=0x000000000005c75d
- (int)blendMode;	// IMP=0x000000000005c749
- (int)blendModeWithKeyAdjustment:(id)arg1;	// IMP=0x000000000005c6ac
- (double)alpha;	// IMP=0x000000000005c698
- (double)alphaWithKeyAdjustment:(id)arg1;	// IMP=0x000000000005c5fb
- (id)image;	// IMP=0x000000000005c5e7
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x000000000005c59a
- (id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3;	// IMP=0x000000000005c4bf
- (id)imageForState:(long long)arg1 value:(long long)arg2;	// IMP=0x000000000005c47a
- (_Bool)isValidButtonImageSource;	// IMP=0x000000000005c452
- (_Bool)hasValueSlices;	// IMP=0x000000000005c266
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;	// IMP=0x000000000005c254
- (id)imageForState:(long long)arg1;	// IMP=0x000000000005c21f
- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000005c11e
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;	// IMP=0x000000000005c084
- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000005bf97
- (id)renditionForSpecificKeyWrapper:(id)arg1;	// IMP=0x000000000005bc23
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000005bb16
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 focusRingColor:(struct CGColor *)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7;	// IMP=0x000000000005b9e8
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000005b99a
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005b876
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000005b84c
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 focusRingColor:(struct CGColor *)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7;	// IMP=0x000000000005b731
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000005b6e3
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 focusRingColor:(struct CGColor *)arg6 keyAdjustment:(id)arg7 context:(struct CGContext *)arg8 effects:(id)arg9;	// IMP=0x000000000005b37b
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000005b264
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000005b171
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005b07f
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005af5d
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005af2d
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005aefd
- (_Bool)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;	// IMP=0x000000000005ad48
- (_Bool)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;	// IMP=0x000000000005acd9
- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000005acbf
- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000005aca5
- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000005ac8b
- (void)updateSegmentBezelLeadingCapLayer:(id)arg1 bezelFillLayer:(id)arg2 trailingBezelCapLayer:(id)arg3 forSegmentType:(int)arg4 segmentBounds:(struct CGRect)arg5 leadingSeparatorWidth:(double)arg6 trailingSeparatorWidth:(double)arg7 renditionKey:(id)arg8 effects:(id)arg9;	// IMP=0x000000000005a8b9
- (void)drawSegmentInFrame:(struct CGRect)arg1 isFocused:(int)arg2 focusRingColor:(struct CGColor *)arg3 segmentType:(int)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;	// IMP=0x000000000005a7ab
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;	// IMP=0x000000000005a729
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005a711
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005a694
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;	// IMP=0x000000000005a5cc
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 focusRingColor:(struct CGColor *)arg5 context:(struct CGContext *)arg6 effects:(id)arg7;	// IMP=0x000000000005a442
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 focusRingColor:(struct CGColor *)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;	// IMP=0x000000000005a3b9
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000005a36a
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 focusRingColor:(struct CGColor *)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;	// IMP=0x000000000005a31c
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 focusRingColor:(struct CGColor *)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000005a293
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3;	// IMP=0x000000000005a15b
- (void)updateLayer:(id)arg1 effects:(id)arg2;	// IMP=0x00000000000596b1
- (void)updateLayer:(id)arg1;	// IMP=0x000000000005969d
- (id)makeLayer;	// IMP=0x0000000000059650
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1;	// IMP=0x000000000005956e
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1 renditionKey:(id)arg2;	// IMP=0x0000000000059308
- (void)dealloc;	// IMP=0x00000000000591e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000591d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000590f1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005900b
- (id)init;	// IMP=0x0000000000058f97
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x0000000000058ee6
- (_Bool)_isButtonGlyph;	// IMP=0x00000000000577e7
- (void)_setIsButtonGlyph:(_Bool)arg1;	// IMP=0x00000000000577dd
- (void)_setHasCheckedButtonGlyph:(_Bool)arg1;	// IMP=0x00000000000577cb
- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;	// IMP=0x00000000000576b9
- (id)_rendition;	// IMP=0x000000000005765b
- (id)_renditionForSpecificKey:(id)arg1;	// IMP=0x00000000000575a9
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(_Bool *)arg2 owner:(id)arg3 userInfo:(id)arg4;	// IMP=0x0000000000057426
- (struct CGPoint)_hotSpot;	// IMP=0x0000000000057416
- (id)_themeStore;	// IMP=0x00000000000573ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

