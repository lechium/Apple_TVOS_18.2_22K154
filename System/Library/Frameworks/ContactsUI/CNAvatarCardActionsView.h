//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNAvatarCardActionsTableView, CNQuickActionsManager, NSArray, NSIndexPath, NSString, UIGestureRecognizer;
@protocol CNAvatarCardActionsViewDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionsView : UIView
{
    _Bool _actionsReversed;	// 8 = 0x8
    _Bool _bypassActionValidation;	// 9 = 0x9
    _Bool _dismissesBeforePerforming;	// 10 = 0xa
    _Bool _expanded;	// 11 = 0xb
    NSArray *_contacts;	// 16 = 0x10
    NSArray *_actionCategories;	// 24 = 0x18
    id <CNAvatarCardActionsViewDelegate> _delegate;	// 32 = 0x20
    CNQuickActionsManager *_actionsManager;	// 40 = 0x28
    NSArray *_actions;	// 48 = 0x30
    CNAvatarCardActionsTableView *_tableView;	// 56 = 0x38
    NSIndexPath *_highlightedIndexPath;	// 64 = 0x40
    UIGestureRecognizer *_rolloverGestureRecognizer;	// 72 = 0x48
    UIGestureRecognizer *_selectionGestureRecognizer;	// 80 = 0x50
    struct CGPoint _initialLocation;	// 88 = 0x58
    struct CGRect _actionsImageFrame;	// 104 = 0x68
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00100000000bd84d
+ (_Bool)performActionsOnDeepPress;	// IMP=0x00100000000bd7e2
- (void).cxx_destruct;	// IMP=0x00000000000c0b53
@property(nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // @synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer;
@property(retain, nonatomic) NSIndexPath *highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(retain, nonatomic) CNAvatarCardActionsTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool dismissesBeforePerforming; // @synthesize dismissesBeforePerforming=_dismissesBeforePerforming;
@property(nonatomic) __weak id <CNAvatarCardActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect actionsImageFrame; // @synthesize actionsImageFrame=_actionsImageFrame;
@property(nonatomic) _Bool bypassActionValidation; // @synthesize bypassActionValidation=_bypassActionValidation;
@property(nonatomic) _Bool actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property(copy, nonatomic) NSArray *actionCategories; // @synthesize actionCategories=_actionCategories;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000c095b
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000c0919
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000c08f7
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000000c08cf
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000c08b0
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c08a8
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000c0890
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c0715
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000c06d1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000c06c6
- (id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x00000000000c05e6
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;	// IMP=0x00000000000c0541
- (void)_setHighlightedIndexPath:(id)arg1 isChange:(_Bool)arg2;	// IMP=0x00000000000c0406
- (void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x00000000000c0367
- (void)_updateAllSeparators;	// IMP=0x00000000000c01b1
- (void)_dismissCardAnimated:(_Bool)arg1;	// IMP=0x00000000000c0100
- (void)_configureCell:(id)arg1 forAction:(id)arg2;	// IMP=0x00000000000bfec5
- (void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(long long)arg3 toNewActionIndex:(long long)arg4 invertedAnimation:(_Bool)arg5;	// IMP=0x00000000000bf849
- (void)_performActionAtIndexPath:(id)arg1;	// IMP=0x00000000000befb9
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;	// IMP=0x00000000000bef03
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;	// IMP=0x00000000000bee4d
- (void)updateRollover:(id)arg1;	// IMP=0x00000000000bebc3
- (id)_indexPathForGestureRecognizer:(id)arg1;	// IMP=0x00000000000bea08
@property(readonly, nonatomic, getter=isPerformingAction) _Bool performingAction;
- (void)stopTrackingRollover;	// IMP=0x00000000000be8fb
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;	// IMP=0x00000000000be7ee
- (_Bool)performHighlightedAction;	// IMP=0x00000000000be774
- (void)resetWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be762
- (void)reset;	// IMP=0x00000000000be74e
- (void)refreshActions;	// IMP=0x00000000000be711
- (void)reloadDataWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be643
- (void)reloadData;	// IMP=0x00000000000be5a4
- (id)_actionAtIndexPath:(id)arg1;	// IMP=0x00000000000be511
- (id)_effectiveManagerActions;	// IMP=0x00000000000be458
- (void)_updateWithActions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be225
- (void)_updateActionsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bddf1
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000bdc8d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000bd855

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

