//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlaybackContentContainerView, UIView, UIViewController;
@protocol AVPlaybackContentContainer, UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerBehaviorContext <NSObject>

@optional
- (void)willEnterFullScreen;
- (void)willExitFullScreen;
- (void)playerControllerDidChange;
- (UIView<AVPlaybackContentContainer> *)makePlaybackContentContainerWithFrame:(struct CGRect)arg1 activeContentView:(AVPlaybackContentContainerView *)arg2;
- (void)didStopPictureInPicture;
- (void)willStartPictureInPictureWithViewController:(UIViewController *)arg1;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewDidLoad;
@end

