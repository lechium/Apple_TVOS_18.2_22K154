//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPPlatterViewController.h>

@class NSString, TVSSProfilePanelNoUserPlatterController, TVSSProfileUserGridViewController, TVSUIProfilePanelUserController, _TtC17TVSystemUIService14TVSSTipManager;

@interface TVSSProfilePanelViewController : TVSPPlatterViewController
{
    _Bool _allowTip;	// 8 = 0x8
    TVSUIProfilePanelUserController *_profilePanelUserController;	// 16 = 0x10
    TVSSProfilePanelNoUserPlatterController *_noUserPlatterController;	// 24 = 0x18
    TVSSProfileUserGridViewController *_userGridViewViewController;	// 32 = 0x20
    _TtC17TVSystemUIService14TVSSTipManager *_tip;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000009e4f0
@property(nonatomic) _Bool allowTip; // @synthesize allowTip=_allowTip;
@property(retain, nonatomic) _TtC17TVSystemUIService14TVSSTipManager *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) TVSSProfileUserGridViewController *userGridViewViewController; // @synthesize userGridViewViewController=_userGridViewViewController;
@property(retain, nonatomic) TVSSProfilePanelNoUserPlatterController *noUserPlatterController; // @synthesize noUserPlatterController=_noUserPlatterController;
@property(retain, nonatomic) TVSUIProfilePanelUserController *profilePanelUserController; // @synthesize profilePanelUserController=_profilePanelUserController;
- (void)userGridViewControllerRequestsDismissal:(id)arg1;	// IMP=0x001000000009e2f0
- (void)hostingViewController:(id)arg1 willTransitionFromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x001000000009e1b0
- (id)preferredFocusEnvironments;	// IMP=0x001000000009e0e0
- (double)desiredWidth;	// IMP=0x001000000009e060
- (void)updateTip;	// IMP=0x001000000009df50
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000009de20
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000009dd60
- (void)dealloc;	// IMP=0x001000000009dd00
- (void)configureHierarchy;	// IMP=0x001000000009d7a0
- (id)init;	// IMP=0x001000000009d500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

