//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI35CatalogModalityDetailViewController : UIViewController
{
    MISSING_TYPE *currentContentInsetBehavior;	// 8 = 0x8
    MISSING_TYPE *isTransitioningContentInset;	// 25 = 0x19
    MISSING_TYPE *visibility;	// 26 = 0x1a
    MISSING_TYPE *contentInsetInitialBehavior;	// 32 = 0x20
    MISSING_TYPE *controllerDisplayCoordinator;	// 48 = 0x30
    MISSING_TYPE *dependencies;	// 56 = 0x38
    MISSING_TYPE *dataProvider;	// 64 = 0x40
    MISSING_TYPE *eventHub;	// 72 = 0x48
    MISSING_TYPE *marketingHostedContentCoordinator;	// 88 = 0x58
    MISSING_TYPE *marketingMessageViewControllerHandler;	// 96 = 0x60
    MISSING_TYPE *platform;	// 104 = 0x68
    MISSING_TYPE *pageNavigator;	// 112 = 0x70
    MISSING_TYPE *resignActiveObserver;	// 152 = 0x98
    MISSING_TYPE *serviceSubscriptionCache;	// 160 = 0xa0
    MISSING_TYPE *sortOptionsDataProvider;	// 200 = 0xc8
    MISSING_TYPE *storefrontLocalizer;	// 208 = 0xd0
    MISSING_TYPE *upNextQueueButton;	// 248 = 0xf8
    MISSING_TYPE *upNextQueueButtonPresenter;	// 256 = 0x100
    MISSING_TYPE *standardNavigationBarTintColor;	// 264 = 0x108
    MISSING_TYPE *subscriptionToken;	// 272 = 0x110
    MISSING_TYPE *currentStatusBarStyle;	// 280 = 0x118
    MISSING_TYPE *currentNavigationBarTintColor;	// 288 = 0x120
    MISSING_TYPE *isBeyondScrollBoundary;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000000084be50
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000084bdf0
- (void)moreOptionsButtonTapped:(id)arg1;	// IMP=0x000000000084bd40
- (void)viewDidLayoutSubviews;	// IMP=0x000000000084b7f0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000084b740
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000084b710
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000084b550
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x000000000084b300
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000084b2d0
- (void)viewDidLoad;	// IMP=0x000000000084b0d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000084aff0
@property(nonatomic, readonly) long long preferredStatusBarStyle;

@end

