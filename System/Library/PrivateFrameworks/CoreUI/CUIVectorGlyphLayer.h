//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIVectorGlyphPath, NSArray, NSString;
@protocol CUIVectorGlyhLayerDelegate;

@interface CUIVectorGlyphLayer : NSObject
{
    NSArray *_sublayers;	// 8 = 0x8
    struct CGPath *_clipPathFromSublayers;	// 16 = 0x10
    _Bool _alwaysPulses;	// 24 = 0x18
    _Bool _alwaysRotates;	// 25 = 0x19
    _Bool _alwaysBreathes;	// 26 = 0x1a
    _Bool _isEraserLayer;	// 27 = 0x1b
    _Bool _isPassthrough;	// 28 = 0x1c
    int _lineCap;	// 32 = 0x20
    int _lineJoin;	// 36 = 0x24
    NSString *_name;	// 40 = 0x28
    unsigned long long _index;	// 48 = 0x30
    NSArray *_tags;	// 56 = 0x38
    unsigned long long _motionGroup;	// 64 = 0x40
    double _opacity;	// 72 = 0x48
    double _valueThreshold;	// 80 = 0x50
    double _strokeWidth;	// 88 = 0x58
    CUIVectorGlyphPath *_referencePath;	// 96 = 0x60
    id <CUIVectorGlyhLayerDelegate> _delegate;	// 104 = 0x68
}

+ (id)_layerHierarchyStyleNames;	// IMP=0x006000000008bf53
+ (id)_colorNameForRenderingStyle:(id)arg1;	// IMP=0x006000000008beeb
+ (int)_lineJoinFromStyle:(struct CGSVGAttributeMap *)arg1;	// IMP=0x006000000008be85
+ (int)_lineCapFromStyle:(struct CGSVGAttributeMap *)arg1;	// IMP=0x006000000008be1c
+ (double)_strokeWidthFromStyle:(struct CGSVGAttributeMap *)arg1;	// IMP=0x006000000008bdbc
+ (struct CGColor *)_strokeColorFromStyle:(struct CGSVGAttributeMap *)arg1;	// IMP=0x006000000008bd39
+ (struct CGColor *)_fillColorFromStyle:(struct CGSVGAttributeMap *)arg1;	// IMP=0x006000000008bcb6
+ (id)createLayerGroupWithLayerNames:(id)arg1 delegate:(id)arg2;	// IMP=0x0060000000089c22
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode *)arg1 modePrefix:(id)arg2 shapes:(id)arg3 delegate:(id)arg4;	// IMP=0x0060000000089bf8
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode *)arg1 layerNames:(id)arg2 shapes:(id)arg3 delegate:(id)arg4;	// IMP=0x00600000000898f4
+ (id)_createShapeLayerWithLayerTreeNode:(struct CGSVGNode *)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 shapes:(id)arg4 delegate:(id)arg5;	// IMP=0x0060000000089639
+ (id)_createSimpleLayerWithLayerTreeNode:(struct CGSVGNode *)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 subpaths:(id)arg4 delegate:(id)arg5;	// IMP=0x0060000000089561
+ (id)_createLayerWithLayerTreeNode:(struct CGSVGNode *)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 subpaths:(id)arg4 delegate:(id)arg5;	// IMP=0x0060000000089501
+ (id)_createTreeWithLayerTreeNode:(struct CGSVGNode *)arg1 modePrefix:(id)arg2 layerName:(id)arg3 index:(unsigned long long)arg4 subpaths:(id)arg5 delegate:(id)arg6;	// IMP=0x0060000000089172
+ (id)_createPathFromStyle:(struct CGSVGAttributeMap *)arg1 subpaths:(id)arg2;	// IMP=0x00600000000890cc
+ (_Bool)_indexFromStyleSuffix:(id)arg1 integer:(unsigned long long *)arg2;	// IMP=0x006000000008900a
+ (id)_suffixForNamedStyleWithPrefix:(id)arg1 styles:(id)arg2;	// IMP=0x0060000000088e9b
+ (_Bool)_classesContainRenderModeClass:(id)arg1;	// IMP=0x0060000000088e3e
+ (unsigned int)_layerTagsAtom;	// IMP=0x0060000000088dfb
+ (unsigned int)_subpathIndicesAtom;	// IMP=0x0060000000088db8
+ (unsigned int)_alwaysBreathesAtom;	// IMP=0x0060000000088d75
+ (unsigned int)_alwaysRotatesAtom;	// IMP=0x0060000000088d32
+ (unsigned int)_alwaysPulsesAtom;	// IMP=0x0060000000088cef
+ (unsigned int)_motionGroupAtom;	// IMP=0x0060000000088cac
+ (unsigned int)_fillActionAtom;	// IMP=0x0060000000088c69
+ (unsigned int)_variableThresholdAtom;	// IMP=0x0060000000088c26
+ (unsigned int)_clearBehindAtom;	// IMP=0x0060000000088be3
+ (double)_strokeWidthForNode:(struct CGSVGNode *)arg1;	// IMP=0x0060000000088b7a
- (void).cxx_destruct;	// IMP=0x000000000008c04a
@property(nonatomic) __weak id <CUIVectorGlyhLayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPassthrough; // @synthesize isPassthrough=_isPassthrough;
@property(readonly, retain, nonatomic) CUIVectorGlyphPath *referencePath; // @synthesize referencePath=_referencePath;
@property(readonly, nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(readonly, nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) _Bool isEraserLayer; // @synthesize isEraserLayer=_isEraserLayer;
@property(readonly, nonatomic) double valueThreshold; // @synthesize valueThreshold=_valueThreshold;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) _Bool alwaysBreathes; // @synthesize alwaysBreathes=_alwaysBreathes;
@property(readonly, nonatomic) _Bool alwaysRotates; // @synthesize alwaysRotates=_alwaysRotates;
@property(readonly, nonatomic) _Bool alwaysPulses; // @synthesize alwaysPulses=_alwaysPulses;
@property(readonly, nonatomic) unsigned long long motionGroup; // @synthesize motionGroup=_motionGroup;
@property(readonly, retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (struct CGPath *)copyClipShape;	// IMP=0x000000000008b98e
- (struct CGImage *)createSublayerMaskUsingScaleFactor:(double)arg1 targetSize:(struct CGSize)arg2 maskColor:(struct CGColor *)arg3;	// IMP=0x000000000008b741
- (struct CGImage *)createImageUsingScaleFactor:(double)arg1 targetSize:(struct CGSize)arg2 variableMinValue:(double)arg3 variableMaxValue:(double)arg4 onFillColor:(struct CGColor *)arg5 offFillColor:(struct CGColor *)arg6;	// IMP=0x000000000008b4e8
- (void)drawInContext:(struct CGContext *)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize)arg3 variableMinValue:(double)arg4 variableMaxValue:(double)arg5 onFillColor:(struct CGColor *)arg6 offFillColor:(struct CGColor *)arg7;	// IMP=0x000000000008b1cc
- (struct CGColor *)_colorForVariableThreshold:(double)arg1 variableMinValue:(double)arg2 variableMaxValue:(double)arg3 onFillColor:(struct CGColor *)arg4 offFillColor:(struct CGColor *)arg5;	// IMP=0x000000000008b138
- (_Bool)anyLayerNeedsWideGamutColor;	// IMP=0x000000000008afc6
@property(readonly, nonatomic) _Bool needsWideGamut;
@property(readonly, retain, nonatomic) NSArray *sublayers;
- (void)_setAllLayersAlwaysRotate:(_Bool)arg1;	// IMP=0x000000000008ae98
- (_Bool)_anyLayerAlwaysRotates;	// IMP=0x000000000008ad51
- (void)_setAlwaysRotates:(_Bool)arg1;	// IMP=0x000000000008ad48
- (void)_setAllLayersAlwaysPulse:(_Bool)arg1;	// IMP=0x000000000008ac12
- (_Bool)_anyLayerAlwaysPulses;	// IMP=0x000000000008aacb
- (void)_setAlwaysPulses:(_Bool)arg1;	// IMP=0x000000000008aac2
- (id)pathAtScale:(double)arg1;	// IMP=0x000000000008a9ee
- (id)path;	// IMP=0x000000000008a99d
- (struct CGPath *)shapeAtScale:(double)arg1;	// IMP=0x000000000008a954
- (struct CGPath *)shape;	// IMP=0x000000000008a903
@property(readonly, retain, nonatomic) id referenceShape;
- (id)debugDescription;	// IMP=0x000000000008a8d6
- (id)debugDescriptionWithIndentLevel:(unsigned long long)arg1;	// IMP=0x000000000008a5bf
- (void)dealloc;	// IMP=0x000000000008a533
- (id)__initGroupWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 attributes:(struct CGSVGAttributeMap *)arg4 style:(struct CGSVGAttributeMap *)arg5 passthrough:(_Bool)arg6 delegate:(id)arg7;	// IMP=0x000000000008a47c
- (id)__initTreeWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 attributes:(struct CGSVGAttributeMap *)arg4 style:(struct CGSVGAttributeMap *)arg5 delegate:(id)arg6;	// IMP=0x000000000008a459
- (id)_initWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 attributes:(struct CGSVGAttributeMap *)arg4 style:(struct CGSVGAttributeMap *)arg5 delegate:(id)arg6;	// IMP=0x000000000008a436
- (id)_initWithName:(id)arg1 index:(unsigned long long)arg2 shape:(id)arg3 strokeWidth:(double)arg4 attributes:(struct CGSVGAttributeMap *)arg5 style:(struct CGSVGAttributeMap *)arg6 delegate:(id)arg7;	// IMP=0x000000000008a36f
- (void)_readCSSAttributes:(struct CGSVGAttributeMap *)arg1 styleAttributes:(struct CGSVGAttributeMap *)arg2;	// IMP=0x0000000000089df5

@end

