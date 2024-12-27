//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, PBPIPControlButton, UIAction, UIStackView, UIView;
@protocol PBPIPControlsDelegate;

@interface PBPIPControlsViewController : UIViewController
{
    UIAction *_moveQuadrantAction;	// 8 = 0x8
    id <PBPIPControlsDelegate> _delegate;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
    NSArray *_activeButtons;	// 40 = 0x28
    UIView *_gradientView;	// 48 = 0x30
    PBPIPControlButton *_moveQuadrantButton;	// 56 = 0x38
    long long _currentQuadrant;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001a75a4
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(retain, nonatomic) PBPIPControlButton *moveQuadrantButton; // @synthesize moveQuadrantButton=_moveQuadrantButton;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NSArray *activeButtons; // @synthesize activeButtons=_activeButtons;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <PBPIPControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_moveControl;	// IMP=0x00100000001a7477
- (id)_layoutContextMenu;	// IMP=0x00100000001a706a
@property(readonly, nonatomic) UIAction *moveQuadrantAction; // @synthesize moveQuadrantAction=_moveQuadrantAction;
- (void)didSwipeUp:(id)arg1;	// IMP=0x00100000001a6eb1
- (void)upPressed:(id)arg1;	// IMP=0x00100000001a6e6d
- (void)didSwipeDown:(id)arg1;	// IMP=0x00100000001a6e2b
- (void)downPressed:(id)arg1;	// IMP=0x00100000001a6de9
- (void)playPausePressed:(id)arg1;	// IMP=0x00100000001a6dac
- (void)menuPressed:(id)arg1;	// IMP=0x00100000001a6d6f
- (void)enterSplitViewButtonPressed:(id)arg1;	// IMP=0x00100000001a6d32
- (void)toggleStashingButtonPressed:(id)arg1;	// IMP=0x00100000001a6cf5
- (void)endButtonPressed:(id)arg1;	// IMP=0x00100000001a6c70
- (void)cancelPictureInPictureButtonPressed:(id)arg1;	// IMP=0x00100000001a6c33
- (void)movePictureInPictureButtonPressed:(id)arg1;	// IMP=0x00100000001a6bd7
- (void)expandPictureInPictureButtonPressed:(id)arg1;	// IMP=0x00100000001a6b9a
- (void)hideControlsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a6643
- (void)showControlsAnimated:(_Bool)arg1 shrinkingEffect:(_Bool)arg2;	// IMP=0x00100000001a5f5e
- (void)_animateButtonsCoolportWithTargetAlpha:(double)arg1 targetTransform:(struct CGAffineTransform)arg2;	// IMP=0x00100000001a5acb
- (id)preferredFocusEnvironments;	// IMP=0x00100000001a5ab5
- (void)viewDidLoad;	// IMP=0x00100000001a4b59
- (id)initWithQuadrant:(long long)arg1 mode:(unsigned long long)arg2;	// IMP=0x00100000001a4ad8

@end

