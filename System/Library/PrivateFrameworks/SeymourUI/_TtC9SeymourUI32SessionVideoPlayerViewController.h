//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI32SessionVideoPlayerViewController : UIViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *transportBarControlsCoordinator;	// 24 = 0x18
    MISSING_TYPE *airplayAndSettingsControlsView;	// 32 = 0x20
    MISSING_TYPE *settingsControlItem;	// 40 = 0x28
    MISSING_TYPE *gymKitResumeMachineView;	// 48 = 0x30
    MISSING_TYPE *settingsPopoverSourceView;	// 56 = 0x38
    MISSING_TYPE *overlayView;	// 64 = 0x40
    MISSING_TYPE *playbackViewController;	// 72 = 0x48
    MISSING_TYPE *tapGestureRecognizer;	// 80 = 0x50
    MISSING_TYPE *videoBoundsObserver;	// 88 = 0x58
    MISSING_TYPE *_requiresLinearPlayback;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000772930
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000007728b0
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000000772170
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000771e10
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000771d60
- (void)viewDidLoad;	// IMP=0x0000000000771d30
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000771a20
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)didTapMediaPlayerViewWithTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000773a10

@end

