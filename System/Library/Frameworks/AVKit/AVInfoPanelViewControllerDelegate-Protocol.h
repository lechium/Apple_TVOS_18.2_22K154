//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class UIViewController;

@protocol AVInfoPanelViewControllerDelegate <NSObject>
- (void)infoPanelViewController:(UIViewController *)arg1 playPauseRecognizedByViewController:(UIViewController *)arg2;
- (void)infoPanelViewController:(UIViewController *)arg1 willShowViewController:(UIViewController *)arg2;
- (void)didDismissInfoPanelViewController;
- (void)willDismissInfoPanelViewControllerWithReason:(long long)arg1;
@end

