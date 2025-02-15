//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, VUIExtrasApplicationController, _TVNavigationZoomAnimator, _TVProductTemplateZoomAnimator;

__attribute__((visibility("hidden")))
@interface VUIExtrasManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _reverseDismissal;	// 9 = 0x9
    NSString *_unrestrictedActionParams;	// 16 = 0x10
    VUIExtrasApplicationController *_applicationController;	// 24 = 0x18
    _TVNavigationZoomAnimator *_presentingAnimator;	// 32 = 0x20
    _TVProductTemplateZoomAnimator *_dismissingAnimator;	// 40 = 0x28
    UIViewController *_lastVisibleExtrasViewController;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x001000000000b95b
- (void).cxx_destruct;	// IMP=0x000000000000d001
@property(nonatomic) _Bool reverseDismissal; // @synthesize reverseDismissal=_reverseDismissal;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) UIViewController *lastVisibleExtrasViewController; // @synthesize lastVisibleExtrasViewController=_lastVisibleExtrasViewController;
@property(retain, nonatomic) _TVProductTemplateZoomAnimator *dismissingAnimator; // @synthesize dismissingAnimator=_dismissingAnimator;
@property(retain, nonatomic) _TVNavigationZoomAnimator *presentingAnimator; // @synthesize presentingAnimator=_presentingAnimator;
@property(retain, nonatomic) VUIExtrasApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(copy, nonatomic) NSString *unrestrictedActionParams; // @synthesize unrestrictedActionParams=_unrestrictedActionParams;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x000000000000cebc
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000000000cc0f
- (void)_presentExtrasApplicationController:(id)arg1 usingAppNavigationController:(id)arg2 withPreviousAppNavigationController:(id)arg3 presentImmediately:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000c9fd
- (void)_loadExtrasURL:(id)arg1 adamID:(id)arg2 actionParams:(id)arg3 previewURL:(id)arg4 loadingImage:(id)arg5 lightTheme:(_Bool)arg6 presentImmediately:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000000c65a
- (void)_stopExtrasApp;	// IMP=0x000000000000c61c
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000000c608
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000c56b
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000000c4ff
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000000c4f1
- (void)pushItunesExtrasStoreVC:(id)arg1;	// IMP=0x000000000000c416
@property(readonly, nonatomic, getter=isExtrasVisible) _Bool extrasVisible;
- (void)dismissExtrasViewControllerIfPresent;	// IMP=0x000000000000c307
- (id)extrasNavigationController;	// IMP=0x000000000000c2f1
- (void)loadExtrasInfo:(id)arg1;	// IMP=0x000000000000bd23
- (void)loadExtrasInfoWithPreflight:(id)arg1;	// IMP=0x000000000000bb30
- (id)init;	// IMP=0x000000000000baef
- (void)dealloc;	// IMP=0x000000000000ba7a
- (id)_init;	// IMP=0x000000000000b9c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

