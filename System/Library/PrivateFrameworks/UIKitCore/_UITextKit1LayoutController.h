//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITextLayoutControllerBase.h"

@class CUIStyleEffectConfiguration, NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UITextPosition, UITextRange, UITextView, _UITextCanvasView;
@protocol NSLayoutManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITextKit1LayoutController : _UITextLayoutControllerBase
{
    UITextView *_textView;	// 8 = 0x8
    NSLayoutManager *_originalLayoutManager;	// 16 = 0x10
    _UITextCanvasView *_canvasView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004783ee
- (void)resetFontForExtraBulletRendering;	// IMP=0x00000000004783a0
@property(nonatomic) __weak id <NSLayoutManagerDelegate> layoutManagerDelegate;
@property(nonatomic) _Bool drawsDebugBaselines;
- (void)resumeTiling;	// IMP=0x000000000047823c
- (void)suspendTiling;	// IMP=0x000000000047821f
@property(nonatomic) double maxTileHeight;
@property(nonatomic) _Bool usesTiledViews;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000047815a
- (struct CGRect)unionRectForCharacterRange:(struct _NSRange)arg1 bottomInset:(double)arg2;	// IMP=0x0000000000477e32
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000477b24
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;	// IMP=0x00000000004779ec
- (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;	// IMP=0x00000000004779d3
- (id)textRangeForCharacterRange:(struct _NSRange)arg1;	// IMP=0x00000000004779ba
- (struct _NSRange)characterRangeForTextRange:(id)arg1 clippedToDocument:(_Bool)arg2;	// IMP=0x0000000000477957
- (struct _NSRange)characterRangeForTextRange:(id)arg1;	// IMP=0x0000000000477943
@property(readonly, nonatomic) _Bool canAccessLayoutManager;
@property(readonly, nonatomic) _Bool includesTextListMarkers;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)_writingToolsMinimumContextualRangeForRange:(id)arg1;	// IMP=0x000000000047792b
- (struct CGRect)boundingRectForRange:(id)arg1;	// IMP=0x00000000004778eb
- (void)invalidateLayoutForRange:(id)arg1;	// IMP=0x000000000047786e
- (void)ensureLayoutForRange:(id)arg1;	// IMP=0x00000000004777e0
- (struct CGRect)updateLayoutForSizeChangeOfTextContainer:(id)arg1;	// IMP=0x00000000004777c2
- (void)ensureLayoutForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2;	// IMP=0x00000000004776c0
- (struct CGRect)usedRectForTextContainer:(id)arg1;	// IMP=0x0000000000477643
- (void)ensureLayoutForTextContainer:(id)arg1;	// IMP=0x00000000004775da
- (id)dequeueCanvasViewForTextContainer:(id)arg1;	// IMP=0x000000000047759c
- (id)textContainerForPosition:(id)arg1;	// IMP=0x000000000047755c
@property(readonly, copy, nonatomic) NSArray *textContainers;
- (void)requestTextGeometryAtPosition:(id)arg1 typingAttributes:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004770b2
- (double)baselineOffsetForFirstGlyph;	// IMP=0x0000000000477046
- (id)annotatedSubstringForRange:(id)arg1;	// IMP=0x0000000000476d9c
- (id)attributedTextInRange:(id)arg1;	// IMP=0x0000000000476cfd
@property(copy, nonatomic) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property(getter=isEditable) _Bool editable;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,GisEditable

- (void)removeInvisibleRange:(id)arg1;	// IMP=0x0000000000476bfa
- (void)addInvisibleRange:(id)arg1;	// IMP=0x0000000000476bbe
- (void)removeAllGhostedRanges;	// IMP=0x0000000000476ba1
- (void)addGhostedRange:(id)arg1;	// IMP=0x0000000000476b65
- (void)removeRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000047699a
- (void)addRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x00000000004768f3
- (void)removeAnnotationAttribute:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000047684c
- (id)annotationAttribute:(id)arg1 atPosition:(id)arg2;	// IMP=0x0000000000476797
- (void)addAnnotationAttribute:(id)arg1 value:(id)arg2 forRange:(id)arg3;	// IMP=0x00000000004766d8
- (struct CGRect)extraLineFragmentRect;	// IMP=0x000000000047667c
- (void)enumerateTextSegmentsInRange:(id)arg1 inTextContainer:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000476596
- (void)enumerateTextLineFragmentsInRange:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000476404
- (id)nearestPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x000000000047621f
- (id)cursorPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000475d45
- (id)selectionRectsForRange:(id)arg1 fromView:(id)arg2 forContainerPassingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000004754e3
- (long long)baseWritingDirectionAtPosition:(id)arg1;	// IMP=0x000000000047541e
- (id)attributesAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000475261
- (id)textRangeForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2 layoutIfNeeded:(_Bool)arg3;	// IMP=0x0000000000474fe0
- (struct CGRect)insertionRectForPosition:(id)arg1 typingAttributes:(id)arg2 placeholderAttachment:(id)arg3 textContainer:(id *)arg4;	// IMP=0x0000000000474084
- (long long)affinityForPosition:(id)arg1;	// IMP=0x000000000047406f
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000474017
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000473fff
- (id)_visualSelectionRangeForExtent:(id)arg1 forPoint:(struct CGPoint)arg2 fromPosition:(id)arg3 inDirection:(long long)arg4;	// IMP=0x0000000000473fe4
- (id)textRangeForTextKit2Ranges:(id)arg1;	// IMP=0x0000000000473fdc
- (id)textRangeForLineEnclosingPosition:(id)arg1 effectiveAffinity:(long long)arg2;	// IMP=0x0000000000473ba1
- (id)textRangeForLineEnclosingPosition:(id)arg1;	// IMP=0x0000000000473b36
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2 affinity:(long long)arg3;	// IMP=0x0000000000473a65
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000473a4c
- (id)emptyTextRangeAtPosition:(id)arg1;	// IMP=0x00000000004739d3
- (id)viewportRangeForTextContainer:(id)arg1;	// IMP=0x00000000004739cb
@property(readonly, nonatomic) UITextRange *documentRange;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (unsigned long long)_textStorageLength;	// IMP=0x0000000000473771

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSTextContainer *firstTextContainer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

