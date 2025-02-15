//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIClassicStatusBarView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIStatusBarViewController : UIViewController
{
    _Bool _iPhoneWS;	// 440 = 0x1b8
    UIWindow *_window;	// 448 = 0x1c0
    UIView *_statusBar;	// 456 = 0x1c8
    UIClassicStatusBarView *_statusBarBackgroundView;	// 464 = 0x1d0
    _Bool _keyboardVisible;	// 472 = 0x1d8
}

+ (double)statusBarOrientationAnimationDurationFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x006000000152253f
- (void).cxx_destruct;	// IMP=0x000000000152286c
- (id)_window;	// IMP=0x000000000152285b
- (void)_statusBarViewControllerKeyboardDidHide:(id)arg1;	// IMP=0x000000000152284a
- (void)_statusBarViewControllerKeyboardWillShow:(id)arg1;	// IMP=0x0000000001522839
- (void)_finishStatusBarOrientationChange;	// IMP=0x00000000015227a9
- (void)_changeStatusBarOrientationFrom:(long long)arg1 toOrientation:(long long)arg2;	// IMP=0x00000000015225e0
- (struct CGSize)_statusBarSizeForOrientation:(long long)arg1;	// IMP=0x0000000001522452
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 style:(long long)arg3 hidden:(_Bool)arg4 slideUp:(_Bool)arg5;	// IMP=0x00000000015221a6
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 hidden:(_Bool)arg3 slideUp:(_Bool)arg4;	// IMP=0x0000000001521dcd
- (void)_zoom:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001521c83
- (void)_prepareForZoom:(_Bool)arg1;	// IMP=0x0000000001521c5e
- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000001521c14
- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000001521a91
- (void)setStatusBarHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x0000000001521854
- (void)loadView;	// IMP=0x0000000001521530
- (_Bool)isClassicControlWindow:(id)arg1;	// IMP=0x000000000152151c
- (void)dealloc;	// IMP=0x000000000152141d
- (id)init;	// IMP=0x0000000001521345

@end

