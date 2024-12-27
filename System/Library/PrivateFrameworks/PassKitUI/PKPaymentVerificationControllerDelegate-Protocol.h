//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UIViewController, UIWindow;

@protocol PKPaymentVerificationControllerDelegate <NSObject>
- (UIWindow *)presentationContext;
- (void)dismissVerificationViewControllerAnimated:(_Bool)arg1;
- (void)presentVerificationViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;

@optional
- (void)didChangeVerificationPresentation;
@end

