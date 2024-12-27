//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplicationRotationFollowingController.h>

@class ASOHostContext, ASOOverlayManager, ASORemoteOverlay, ASORemoteViewController, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASOOverlayViewController : UIApplicationRotationFollowingController
{
    _Bool _isViewServiceLoading;	// 8 = 0x8
    ASORemoteViewController *_remoteViewController;	// 16 = 0x10
    ASOHostContext *_context;	// 24 = 0x18
    ASORemoteOverlay *_currentOverlay;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_viewServiceQueue;	// 40 = 0x28
    NSOperationQueue *_presentationQueue;	// 48 = 0x30
    ASOOverlayManager *_overlayManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000005ae7
@property(nonatomic) __weak ASOOverlayManager *overlayManager; // @synthesize overlayManager=_overlayManager;
@property(retain, nonatomic) NSOperationQueue *presentationQueue; // @synthesize presentationQueue=_presentationQueue;
@property(nonatomic) _Bool isViewServiceLoading; // @synthesize isViewServiceLoading=_isViewServiceLoading;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *viewServiceQueue; // @synthesize viewServiceQueue=_viewServiceQueue;
@property(retain, nonatomic) ASORemoteOverlay *currentOverlay; // @synthesize currentOverlay=_currentOverlay;
@property(nonatomic) __weak ASOHostContext *context; // @synthesize context=_context;
@property(retain, nonatomic) ASORemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)shutdownViewServiceIfOverlayOffScreen;	// IMP=0x00000000000058e2
- (void)didEnterBackground;	// IMP=0x000000000000587e
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000057f9
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000005617
- (void)didFinishDismissingOverlay:(id)arg1;	// IMP=0x0000000000005536
- (void)willStartPresentingOverlay:(id)arg1 transitionContext:(id)arg2;	// IMP=0x0000000000005454
- (id)remoteViewControllerForOverlayViewService;	// IMP=0x0000000000005442
- (id)hostContextForOverlayViewService;	// IMP=0x0000000000005430
- (void)_loadRemoteViewController:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004da7
- (void)_loadViewServiceIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x000000000000465d
- (void)loadViewServiceIfNeeded;	// IMP=0x000000000000452a
- (void)failAllQueuedOverlaysWithError:(id)arg1;	// IMP=0x0000000000004212
- (void)dismissOverlay;	// IMP=0x00000000000040f7
- (void)presentOverlay:(id)arg1;	// IMP=0x0000000000003f42
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000003da7
- (void)viewDidLoad;	// IMP=0x0000000000003c14
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000003b2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

