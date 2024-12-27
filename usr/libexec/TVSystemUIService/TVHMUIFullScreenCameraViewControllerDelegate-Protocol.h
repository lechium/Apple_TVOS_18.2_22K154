//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSUUID, TVHMCameraContentView, TVHMUIAllCamerasFullScreenViewController, TVHMUIFullScreenCameraViewController;

@protocol TVHMUIFullScreenCameraViewControllerDelegate <NSObject>
- (void)viewControllerDidRequestDismissal:(TVHMUIFullScreenCameraViewController *)arg1 focusedIdentifier:(NSUUID *)arg2 focusedContentView:(TVHMCameraContentView *)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;

@optional
- (void)viewController:(TVHMUIFullScreenCameraViewController *)arg1 presentedAllCamerasViewControllerWillPresentFullScreenCamera:(TVHMUIAllCamerasFullScreenViewController *)arg2 completion:(void (^)(void))arg3;
@end

