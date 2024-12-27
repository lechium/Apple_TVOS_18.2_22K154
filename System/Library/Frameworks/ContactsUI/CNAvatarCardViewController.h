//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNAvatarCardActionsView, CNAvatarCardController, CNContactActionsViewController, NSArray, NSLayoutConstraint, NSString, UIImage, UIView;
@protocol CNAvatarCardActionList, CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController
{
    _Bool _visible;	// 8 = 0x8
    _Bool _hasBackgroundColor;	// 9 = 0x9
    _Bool _hasHeader;	// 10 = 0xa
    _Bool _headerOnTop;	// 11 = 0xb
    CNAvatarCardController *_cardController;	// 16 = 0x10
    id <CNAvatarCardViewControllerDelegate> _delegate;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
    UIView *_headerContainerView;	// 40 = 0x28
    CNAvatarCardActionsView *_legacyContactActionsView;	// 48 = 0x30
    CNContactActionsViewController *_actionsViewController;	// 56 = 0x38
    NSLayoutConstraint *_actionsViewControllerHeightConstraint;	// 64 = 0x40
    UIView *_effectView;	// 72 = 0x48
    NSArray *_verticalConstraints;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000005e868
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint; // @synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint;
@property(retain, nonatomic) CNContactActionsViewController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView; // @synthesize legacyContactActionsView=_legacyContactActionsView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool headerOnTop; // @synthesize headerOnTop=_headerOnTop;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic) _Bool hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
- (void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x000000000005e695
@property _Bool transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000000005dfc4
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005dfb0
- (id)viewControllerForCardActionsView:(id)arg1;	// IMP=0x000000000005dee4
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;	// IMP=0x000000000005de8b
- (void)cardActionsView:(id)arg1 willShowActions:(id)arg2;	// IMP=0x000000000005dde1
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x000000000005dd01
- (void)refreshActions;	// IMP=0x000000000005dcc4
- (void)_updatePreferredSize;	// IMP=0x000000000005db70
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000005daca
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005da87
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005da1d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005d968
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005d8df
- (void)updateActionsControllerHeightConstraint;	// IMP=0x000000000005d854
- (void)didAddActionsViewToHierarchy;	// IMP=0x000000000005d5d8
- (void)willAddActionsViewToHierarchy;	// IMP=0x000000000005d559
@property(readonly, nonatomic) id <CNAvatarCardActionList> actionList;
- (id)actionsView;	// IMP=0x000000000005d455
@property(nonatomic) _Bool bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
- (struct CGRect)_photoFrameInView:(id)arg1;	// IMP=0x000000000005d20d
@property(nonatomic) _Bool dismissesBeforePerforming;
@property(nonatomic) _Bool actionsReversed;
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000005d000
- (void)updateViewConstraints;	// IMP=0x000000000005cd65
- (void)viewDidLoad;	// IMP=0x000000000005c39c
- (id)initWithContacts:(id)arg1;	// IMP=0x000000000005c10c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N


@end

