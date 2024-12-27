//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMapTable, NSMutableSet, NSString, NSTextContainer, NSTextLayoutManager, NSTextViewportLayoutController, _UIAnimatedTextLayoutInfo, _UITextEmphasisBackgroundView, _UITextLayoutCanvasViewHoverEffectContainerLayer;
@protocol NSCustomTextRendering, UITraitChangeRegistration, _UITextCanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextLayoutCanvasView : UIView
{
    NSTextViewportLayoutController *_viewportLayoutController;	// 160 = 0xa0
    NSMutableSet *_viewportElementsToRemove;	// 168 = 0xa8
    NSMapTable *_viewportElementViews;	// 176 = 0xb0
    NSMutableSet *_textAttachmentViews;	// 184 = 0xb8
    NSMutableSet *_newTextAttachmentViews;	// 192 = 0xc0
    NSMutableSet *_currentClientAuxiliaryViews;	// 200 = 0xc8
    NSMutableSet *_oldClientAuxiliaryViews;	// 208 = 0xd0
    unsigned long long _textContainerIndex;	// 216 = 0xd8
    struct CGSize _contentSize;	// 224 = 0xe0
    _Bool _inLayout;	// 240 = 0xf0
    _UITextLayoutCanvasViewHoverEffectContainerLayer *_hoverEffectsLayer;	// 248 = 0xf8
    id <NSCustomTextRendering> _lastCustomRenderController;	// 256 = 0x100
    id <UITraitChangeRegistration> _traitChangeToken;	// 264 = 0x108
    struct {
        unsigned int customRenderControllerSupportsSetContentsScale:1;
        unsigned int customRenderControllerSupportsSetNeedsDisplay:1;
        unsigned int customRenderControllerSupportsInvalidateTemporaryAttributes:1;
        unsigned int customRenderControllerSupportPrePostNotify:1;
    } _canvasViewFlags;	// 272 = 0x110
    _Bool _layoutFragmentViewsNeedDisplay;	// 276 = 0x114
    NSTextLayoutManager *_textLayoutManager;	// 280 = 0x118
    id <_UITextCanvasContext> _context;	// 288 = 0x120
    NSTextContainer *_textContainer;	// 296 = 0x128
    UIView *_selectionContainerView;	// 304 = 0x130
    _UITextEmphasisBackgroundView *_textEmphasisBackgroundView;	// 312 = 0x138
    _UIAnimatedTextLayoutInfo *_uniqueWritingToolsAnimatedLayoutInfo;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000000a042f9
@property(retain, nonatomic) _UIAnimatedTextLayoutInfo *uniqueWritingToolsAnimatedLayoutInfo; // @synthesize uniqueWritingToolsAnimatedLayoutInfo=_uniqueWritingToolsAnimatedLayoutInfo;
@property(readonly, nonatomic) _UITextEmphasisBackgroundView *textEmphasisBackgroundView; // @synthesize textEmphasisBackgroundView=_textEmphasisBackgroundView;
@property(retain, nonatomic) UIView *selectionContainerView; // @synthesize selectionContainerView=_selectionContainerView;
@property(readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property _Bool layoutFragmentViewsNeedDisplay; // @synthesize layoutFragmentViewsNeedDisplay=_layoutFragmentViewsNeedDisplay;
@property(nonatomic) __weak id <_UITextCanvasContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;
- (void)updateContentSizeIfNeeded;	// IMP=0x0000000000a04156
- (void)viewportBoundsDidChange;	// IMP=0x0000000000a04144
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000000a04034
- (void)invalidateTemporaryAttributesInRange:(id)arg1;	// IMP=0x0000000000a03ec6
- (_Bool)textViewportLayoutController:(id)arg1 addRenderingSurface:(id)arg2 group:(long long)arg3 placement:(long long)arg4;	// IMP=0x0000000000a03a99
- (void)textViewportLayoutControllerDidLayout:(id)arg1;	// IMP=0x0000000000a039be
- (void)textViewportLayoutControllerWillLayout:(id)arg1;	// IMP=0x0000000000a038ab
- (void)textViewportLayoutController:(id)arg1 configureRenderingSurfaceForTextLayoutFragment:(id)arg2;	// IMP=0x0000000000a032cd
- (struct CGRect)textViewportLayoutController:(id)arg1 presentationLayoutFragmentFrameForTextLayoutFragment:(id)arg2 proposedOrigin:(struct CGPoint)arg3;	// IMP=0x0000000000a02ee1
- (id)textViewportLayoutController:(id)arg1 renderingSurfaceForTextLayoutFragment:(id)arg2;	// IMP=0x0000000000a02d32
- (struct CGRect)viewportBoundsForTextViewportLayoutController:(id)arg1;	// IMP=0x0000000000a02c08
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a02bab
- (void)isEditingDidChange;	// IMP=0x0000000000a02af6
- (void)layoutSubviews;	// IMP=0x0000000000a02863
- (void)_performViewportLayout:(_Bool)arg1;	// IMP=0x0000000000a02588
- (void)setNeedsLayout;	// IMP=0x0000000000a024ec
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000a022ef
- (void)setNeedsDisplay;	// IMP=0x0000000000a022ae
- (id)textRangeForBounds:(struct CGRect)arg1 layoutIfNeeded:(_Bool)arg2;	// IMP=0x0000000000a01f0a
- (id)textRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000a01eed
- (id)_internalTextLayoutController;	// IMP=0x0000000000a01e67
- (void)_viewportDidLayout;	// IMP=0x0000000000a01897
- (void)_removeUnusedFragmentViews;	// IMP=0x0000000000a0163e
- (void)_updateContentsScaleForCustomRenderController:(double)arg1;	// IMP=0x0000000000a014eb
- (void)_updateTraitsForCustomTextRenderer:(id)arg1;	// IMP=0x0000000000a0131a
- (void)_traitsChanged;	// IMP=0x0000000000a012ce
- (void)configureCustomTextRenderer;	// IMP=0x0000000000a010a6
- (void)flushFragmentViews;	// IMP=0x0000000000a00f19
- (void)_viewportWillLayout;	// IMP=0x0000000000a00cb4
- (void)_updateTextEmphasisBackgroundViewForTextRange:(id)arg1 inTextView:(id)arg2 bounds:(struct CGRect)arg3;	// IMP=0x0000000000a00847
- (void)setTextEmphasisBackgroundView:(id)arg1 withTextView:(id)arg2;	// IMP=0x0000000000a00595
@property(readonly, nonatomic) id <NSCustomTextRendering> customRenderController;
- (id)initWithTextLayoutManager:(id)arg1 textContainer:(id)arg2;	// IMP=0x0000000000a001ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

