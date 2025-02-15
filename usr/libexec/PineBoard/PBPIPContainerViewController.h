//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSDate, NSString, PBPIPControlsViewController, PBPIPEditingHintViewController, PGPictureInPictureViewController;
@protocol PBPIPContainerViewControllerAnimationDelegate;

@interface PBPIPContainerViewController : UIViewController
{
    PGPictureInPictureViewController *_pictureInPictureViewController;	// 8 = 0x8
    id <PBPIPContainerViewControllerAnimationDelegate> _animationDelegate;	// 16 = 0x10
    PBPIPControlsViewController *_controlsViewController;	// 24 = 0x18
    CDUnknownBlockType _updateConstraintsForAccessoryState;	// 32 = 0x20
    PBPIPEditingHintViewController *_editingHintViewController;	// 40 = 0x28
    NSDate *_editingStartDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000041245
@property(retain, nonatomic) NSDate *editingStartDate; // @synthesize editingStartDate=_editingStartDate;
@property(retain, nonatomic) PBPIPEditingHintViewController *editingHintViewController; // @synthesize editingHintViewController=_editingHintViewController;
@property(copy, nonatomic) CDUnknownBlockType updateConstraintsForAccessoryState; // @synthesize updateConstraintsForAccessoryState=_updateConstraintsForAccessoryState;
@property(readonly, nonatomic) PBPIPControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(nonatomic) __weak id <PBPIPContainerViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(retain, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004115f
- (void)performStopInIsolationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000410f6
- (void)performStartInIsolationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004108d
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004100b
- (void)prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040eb8
- (void)performStartAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040e4f
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040dcd
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;	// IMP=0x0010000000040d80
- (void)pipEditingHintViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000040d15
- (void)hideControlsHint;	// IMP=0x0010000000040cf7
- (void)showControlsHint;	// IMP=0x0010000000040b82
- (void)_hidePagingAccessoryAnimated:(_Bool)arg1;	// IMP=0x0010000000040a07
- (void)showPagingAccessoryAnimated;	// IMP=0x0010000000040875
- (void)_hideControlsUsingAnimationStyle:(long long)arg1;	// IMP=0x00100000000407a9
- (void)_showControlsUsingAnimationStyle:(long long)arg1 inQuadrant:(long long)arg2;	// IMP=0x001000000004034f
- (void)setEditing:(_Bool)arg1 animationStyle:(long long)arg2 inQuadrant:(long long)arg3;	// IMP=0x001000000004022f
- (id)preferredFocusEnvironments;	// IMP=0x00100000000401b5
- (void)viewDidLoad;	// IMP=0x001000000003fcf4
- (void)dealloc;	// IMP=0x001000000003fc87
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003fc03
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000003fb7f
- (id)initWithPictureInPictureViewController:(id)arg1;	// IMP=0x001000000003faf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

