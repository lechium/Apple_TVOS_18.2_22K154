//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class UIViewController;
@protocol NSObject;

@protocol PXPresentationEnvironment <NSObject>
@property(readonly, nonatomic) _Bool canPresentPopovers;
@property(readonly, nonatomic) _Bool canPushViewController;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)dismissAlertWithToken:(id <NSObject>)arg1 completionHandler:(void (^)(void))arg2;
- (id <NSObject>)presentAlertWithConfigurationHandler:(void (^)(PXAlertConfiguration *))arg1;
- (_Bool)popToViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (_Bool)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)dismissViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
@end

