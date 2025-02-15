//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIContextMenuContainerView : UIView
{
    _Bool _lastHitTestWasPassedThroughToInteraction;	// 160 = 0xa0
    _Bool _inPassthroughViewHitTest;	// 161 = 0xa1
    _Bool _didDismiss;	// 162 = 0xa2
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 168 = 0xa8
    _Bool _passesBackgroundViewTouchesThrough;	// 176 = 0xb0
    _Bool _allowsDragEventsToPassthrough;	// 177 = 0xb1
    UIView *_contentWrapperView;	// 184 = 0xb8
    CDUnknownBlockType _dismissalHandler;	// 192 = 0xc0
    CDUnknownBlockType _subtreeTraitPropagationHandler;	// 200 = 0xc8
    CDUnknownBlockType _sizeChangeHandler;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000004141a5
@property(nonatomic) _Bool allowsDragEventsToPassthrough; // @synthesize allowsDragEventsToPassthrough=_allowsDragEventsToPassthrough;
@property(nonatomic) _Bool passesBackgroundViewTouchesThrough; // @synthesize passesBackgroundViewTouchesThrough=_passesBackgroundViewTouchesThrough;
@property(copy, nonatomic) CDUnknownBlockType sizeChangeHandler; // @synthesize sizeChangeHandler=_sizeChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType subtreeTraitPropagationHandler; // @synthesize subtreeTraitPropagationHandler=_subtreeTraitPropagationHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(nonatomic) __weak UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
- (_Bool)isScrollEnabled;	// IMP=0x00000000004140da
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004140c1
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;	// IMP=0x000000000041402c
- (void)_attemptDismiss:(_Bool)arg1;	// IMP=0x0000000000413f84
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000413deb
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000000413c34
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x0000000000413c1d
- (void)didMoveToWindow;	// IMP=0x0000000000413b99
- (void)_sceneGeometryWillUpdate:(id)arg1;	// IMP=0x0000000000413b85
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x00000000004139b5
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000413964
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000413838
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000041370c
- (void)dealloc;	// IMP=0x000000000041368a
- (id)initWithFrame:(struct CGRect)arg1 allowsBackgroundInteractionAcrossProccesses:(_Bool)arg2;	// IMP=0x00000000004134f2
- (_Bool)isTransparentFocusItem;	// IMP=0x00000000004134ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

