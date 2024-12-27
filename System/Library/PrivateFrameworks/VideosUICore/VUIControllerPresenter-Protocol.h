//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/NSObject-Protocol.h>

@class NSArray, NSString, UIViewController;

@protocol VUIControllerPresenter <NSObject>
- (_Bool)dismissViewControllerWithID:(NSString *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 modalPresentationStyle:(long long)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 actions:(NSArray *)arg3 animated:(_Bool)arg4;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;

@optional
@property(nonatomic) _Bool vui_requiresLegacyPresentation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@end

