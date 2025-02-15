//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PBSplitViewControlsContainerView, PBSplitViewGeometry;
@protocol PBPictureInPictureControlsDelegate, PBSplitViewControlsViewControllerDelegate, PBSplitViewInwardSizing;

@interface PBSplitViewControlsViewController : UIViewController
{
    PBSplitViewGeometry<PBSplitViewInwardSizing> *_geometry;	// 8 = 0x8
    id <PBPictureInPictureControlsDelegate> _controlsDelegate;	// 16 = 0x10
    id <PBSplitViewControlsViewControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000062a81
@property(readonly, nonatomic) __weak id <PBSplitViewControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PBPictureInPictureControlsDelegate> controlsDelegate; // @synthesize controlsDelegate=_controlsDelegate;
@property(readonly, nonatomic) PBSplitViewGeometry *geometry; // @synthesize geometry=_geometry;
- (void)_updateSafeAreaInsets;	// IMP=0x0010000000062984
- (void)_leaveCallAction:(id)arg1;	// IMP=0x0010000000062908
- (void)_expandSidebarAction:(id)arg1;	// IMP=0x00100000000628cb
- (void)_startPictureInPictureAction:(id)arg1;	// IMP=0x001000000006288e
- (void)_hideAction:(id)arg1;	// IMP=0x0010000000062851
- (void)_menuGestureRecognized:(id)arg1;	// IMP=0x001000000006280f
- (id)_layoutContextMenu;	// IMP=0x001000000006274f
- (id)_layoutOptionsMenu;	// IMP=0x001000000006237c
- (void)setEditingControlsVisible:(_Bool)arg1 animationStyle:(long long)arg2;	// IMP=0x00100000000622e2
@property(readonly, nonatomic, getter=isEditingControlsVisible) _Bool editingControlsVisible;
- (void)viewDidLoad;	// IMP=0x0010000000062079
- (void)loadView;	// IMP=0x001000000006203f
- (void)dealloc;	// IMP=0x0010000000061ff6
- (id)initWithGeometry:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000061f3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) PBSplitViewControlsContainerView *view; // @dynamic view;

@end

