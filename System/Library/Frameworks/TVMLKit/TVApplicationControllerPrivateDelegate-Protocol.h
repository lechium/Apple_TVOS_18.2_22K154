//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>

@class TVApplicationController, UIViewController;
@protocol TVAppRootViewController;

@protocol TVApplicationControllerPrivateDelegate <TVApplicationControllerDelegate>

@optional
- (UIViewController<TVAppRootViewController> *)rootViewControllerForAppController:(TVApplicationController *)arg1;
@end

