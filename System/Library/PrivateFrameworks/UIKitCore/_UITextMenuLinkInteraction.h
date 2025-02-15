//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIEditMenuInteraction;

__attribute__((visibility("hidden")))
@interface _UITextMenuLinkInteraction
{
    NSMapTable *_configurationItems;	// 48 = 0x30
    UIEditMenuInteraction *_editMenuInteraction;	// 56 = 0x38
    _Bool _isModifyingSelectionForLinkPresentation;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000013e81bb
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000013e8138
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000013e80b5
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;	// IMP=0x00000000013e8061
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;	// IMP=0x00000000013e7f54
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000013e7ed1
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000013e7e4e
- (void)_willEndMenuDisplayForItem:(id)arg1 animator:(id)arg2;	// IMP=0x00000000013e7d44
- (void)_willDisplayMenuForItem:(id)arg1 animator:(id)arg2;	// IMP=0x00000000013e7c0a
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;	// IMP=0x00000000013e7b66
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000013e7ad1
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000013e7a9d
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x00000000013e7a90
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x00000000013e79eb
- (_Bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;	// IMP=0x00000000013e7958
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000013e7801
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000013e7718
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000013e75dd
- (void)dismissEditMenuOnSelectionChangeIfNecessary;	// IMP=0x00000000013e75b1
- (id)editMenuInteraction;	// IMP=0x00000000013e7505
- (id)contextMenuDelegateProxy;	// IMP=0x00000000013e74dc
- (id)initWithShouldProxyContextMenuDelegate:(_Bool)arg1;	// IMP=0x00000000013e742f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

