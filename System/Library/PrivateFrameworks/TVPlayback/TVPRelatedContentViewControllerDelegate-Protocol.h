//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class TVPRelatedContentViewController;

@protocol TVPRelatedContentViewControllerDelegate <NSObject>

@optional
- (void)relatedContentViewController:(TVPRelatedContentViewController *)arg1 didTransitionToDisplayMode:(long long)arg2;
- (void)relatedContentViewController:(TVPRelatedContentViewController *)arg1 willTransitionToDisplayMode:(long long)arg2;
- (void)userInteractionBeganWithRelatedContentViewController:(TVPRelatedContentViewController *)arg1;
- (void)didDismissRelatedContentViewController:(TVPRelatedContentViewController *)arg1;
@end

