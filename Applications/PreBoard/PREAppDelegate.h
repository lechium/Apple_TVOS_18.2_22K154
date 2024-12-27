//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, PREStackViewController, UIRootWindowScenePresentationBinder, UIViewController, UIWindow;
@protocol BSInvalidatable;

@interface PREAppDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
    UIViewController *_mainViewController;	// 16 = 0x10
    PREStackViewController *_stackViewController;	// 24 = 0x18
    UIRootWindowScenePresentationBinder *_rootWindowScenePresentationBinder;	// 32 = 0x20
    id <BSInvalidatable> _dispatchingRulesAssertion;	// 40 = 0x28
    id <BSInvalidatable> _focusDeferral;	// 48 = 0x30
}

+ (id)sharedAppDelegate;	// IMP=0x0020000000002076
- (void).cxx_destruct;	// IMP=0x002000000000341f
@property(readonly, nonatomic) id <BSInvalidatable> focusDeferral; // @synthesize focusDeferral=_focusDeferral;
@property(retain, nonatomic) id <BSInvalidatable> dispatchingRulesAssertion; // @synthesize dispatchingRulesAssertion=_dispatchingRulesAssertion;
@property(retain, nonatomic) UIRootWindowScenePresentationBinder *rootWindowScenePresentationBinder; // @synthesize rootWindowScenePresentationBinder=_rootWindowScenePresentationBinder;
@property(retain, nonatomic) PREStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
@property(retain, nonatomic) UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_clearBootCount;	// IMP=0x0010000000003187
- (void)_menuHomeButtonTriplePressUp:(id)arg1;	// IMP=0x00100000000030e7
- (void)_setMainViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000003010
- (void)_setMainViewController:(id)arg1;	// IMP=0x0010000000002f89
- (void)_startReceivingEventsWithWindow:(id)arg1;	// IMP=0x0010000000002c15
- (void)_setupButtonRecognition;	// IMP=0x0010000000002b8a
- (void)_createInitialAppScene:(struct CGRect)arg1;	// IMP=0x0010000000002744
- (void)failedBootCountRestore;	// IMP=0x00100000000026c0
- (void)failedBootCountObliterate;	// IMP=0x0010000000002656
- (void)clearFailedBootCountAndRestart;	// IMP=0x001000000000254b
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00100000000024ff
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000024f9
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00100000000024f3
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00100000000024ed
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00100000000024e7
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000000020cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

