//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UITapGestureRecognizer, VSOnscreenCodeViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationViewController : UIViewController
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSOnscreenCodeViewModel *_viewModel;	// 24 = 0x18
    UITapGestureRecognizer *_menuRecognizer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005451f
@property(nonatomic) __weak UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) VSOnscreenCodeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005445b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000054422
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000543e9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000543b0
- (void)viewDidLoad;	// IMP=0x0000000000054112
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000053f44
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N

- (void)buttonLockupPressed;	// IMP=0x0000000000053e07
- (id)_webPageLocationForURL:(id)arg1;	// IMP=0x0000000000053d50
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000053ca3
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x0000000000053bde
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x0000000000053b92
- (id)_onscreenCodeView;	// IMP=0x0000000000053aa4
- (void)dealloc;	// IMP=0x0000000000053a5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

