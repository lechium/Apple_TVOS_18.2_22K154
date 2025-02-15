//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BSAnimationSettings;

@interface UIViewController (BNHostedContentProvidingAdditions)
- (_Bool)isClippingEnabled;	// IMP=0x003000000002ba91
- (_Bool)bn_shouldAnimateViewTransitionToSize:(struct CGSize)arg1;	// IMP=0x003000000002ba89
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x003000000002ba77
@property(readonly, copy, nonatomic) BSAnimationSettings *bannerSizeTransitionAnimationSettings;
@property(readonly, nonatomic) struct UIEdgeInsets bannerContentOutsets;
- (void)bannerContentOutsetsDidInvalidateForPresentableViewController:(id)arg1;	// IMP=0x003000000002ba99
@end

