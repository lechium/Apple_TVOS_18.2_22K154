//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerViewController : NSObject
{
    struct ThreadSafeWeakPtr<WebCore::VideoPresentationInterfaceAVKit> _fullscreenInterface;	// 8 = 0x8
    struct RetainPtr<UIViewController> _presentingViewController;	// 24 = 0x18
    struct RetainPtr<AVPlayerViewController> _avPlayerViewController;	// 32 = 0x20
    struct RetainPtr<NSTimer> _startPictureInPictureTimer;	// 40 = 0x28
    struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> _delegate;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0000000002adbaf0
- (void).cxx_destruct;	// IMP=0x0000000002adba20
@property(readonly, nonatomic) CDStruct_3707b61b *logChannel;
@property(readonly, nonatomic) const void *loggerPtr;
@property(readonly, nonatomic) const void *logIdentifier;
- (void)removeFromParentViewController;	// IMP=0x0000000002adb890
- (id)avPlayerViewController;	// IMP=0x0000000002adb880
- (void)setPlayerController:(id)arg1;	// IMP=0x0000000002adb860
- (void)setDelegate:(id)arg1;	// IMP=0x0000000002adb840
- (void)setAllowsPictureInPicturePlayback:(_Bool)arg1;	// IMP=0x0000000002adb770
- (void)setShowsPlaybackControls:(_Bool)arg1;	// IMP=0x0000000002adb6a0
- (_Bool)showsPlaybackControls;	// IMP=0x0000000002adb680
- (id)view;	// IMP=0x0000000002adb660
- (_Bool)pictureInPictureWasStartedWhenEnteringBackground;	// IMP=0x0000000002adb650
- (_Bool)pictureInPictureActive;	// IMP=0x0000000002adb640
- (_Bool)isPictureInPictureActive;	// IMP=0x0000000002adb630
- (_Bool)isPictureInPicturePossible;	// IMP=0x0000000002adb620
- (void)stopPictureInPicture;	// IMP=0x0000000002adb570
- (void)startPictureInPicture;	// IMP=0x0000000002adb4c0
- (void)tryToStartPictureInPicture;	// IMP=0x0000000002adb410
- (void)removeObserver;	// IMP=0x0000000002adb3e0
- (void)initObserver;	// IMP=0x0000000002adb3b0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000002adb2c0
- (void)exitFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000002adb0e0
- (void)enterFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000002adae50
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;	// IMP=0x0000000002adae00
- (void)dealloc;	// IMP=0x0000000002adacf0
- (void)configurePlayerViewControllerWithFullscreenInterface:(void *)arg1;	// IMP=0x0000000002adaa80
- (id)initWithFullscreenInterface:(void *)arg1;	// IMP=0x0000000002ada840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

