//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVContainerCollectionViewCell.h"

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell
{
    _Bool _pressIsAnimating;	// 8 = 0x8
    UIView<TVAuxiliaryViewSelecting> *__selectingView;	// 16 = 0x10
    _Bool _unpressOnEndAnimating;	// 24 = 0x18
    struct {
        _Bool respondsToDidUnfocus;
        _Bool respondsToDidSelect;
        _Bool respondsToLayeredImageContainerLayerWithinCollectionViewCell;
    } _delegateFlags;	// 25 = 0x19
    id <TVCollectionViewLockupCellDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000194841
@property(nonatomic) __weak id <TVCollectionViewLockupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showPressState;	// IMP=0x0000000000194575
- (void)_handleSelect;	// IMP=0x00000000001943a1
- (id)_selectingView;	// IMP=0x00000000001941f3
- (void)_clearPressState;	// IMP=0x000000000019405d
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000000193fe5
- (_Bool)_descendantsShouldHighlight;	// IMP=0x0000000000193fdd
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000193e8c
- (id)layeredImageContainerLayer;	// IMP=0x0000000000193e2b
- (void)prepareForReuse;	// IMP=0x0000000000193c2e
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000193942
- (_Bool)_tvAddsChildFocusItemsBeforeSelf;	// IMP=0x0000000000193930
- (_Bool)_tvAllowsFocusInChildrenWhenFocused;	// IMP=0x0000000000193928
- (struct UIEdgeInsets)_focusableContentMargins;	// IMP=0x000000000019388e
- (struct UIEdgeInsets)_additionalFocusableContentInsets;	// IMP=0x00000000001935c9
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000001933b1
- (_Bool)_isFocusedOrParentOfFocusedHierarchyAndSelectingViewIsPoster;	// IMP=0x000000000019329c
- (id)selectingView;	// IMP=0x000000000019319f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001930e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

