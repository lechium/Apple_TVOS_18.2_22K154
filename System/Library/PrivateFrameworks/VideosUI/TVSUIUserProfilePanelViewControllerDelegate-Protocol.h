//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class TVSUIProfilePanelViewController;

@protocol TVSUIUserProfilePanelViewControllerDelegate <NSObject>

@optional
- (void)profilePanelViewController:(TVSUIProfilePanelViewController *)arg1 appearedWithUserCount:(unsigned long long)arg2;
- (void)profilePanelViewController:(TVSUIProfilePanelViewController *)arg1 didSelectItemWithType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)profilePanelViewController:(TVSUIProfilePanelViewController *)arg1 didSelectItemWithType:(long long)arg2;
@end

