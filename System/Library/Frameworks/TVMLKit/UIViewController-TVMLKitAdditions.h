//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (TVMLKitAdditions)
- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig)arg1;	// IMP=0x0030000000002379
- (void)_cancelImpressionsUpdate;	// IMP=0x0030000000002373
- (void)tv_updateViewLayout;	// IMP=0x00300000000022c7
@property(copy, nonatomic, setter=tv_setIdentifier:) NSString *tvIdentifier;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x0030000000042ef8
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x0030000000042ef0
- (id)tv_impressionableElementsForDocument:(id)arg1;	// IMP=0x0030000000192a2c
@end

