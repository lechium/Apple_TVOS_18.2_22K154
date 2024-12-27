//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVUnifiedPlayerContextMenuNavigationController, AVUnifiedPlayerContextMenuViewController, UITapGestureRecognizer;

@protocol AVUnifiedPlayerContextMenuNavigationControllerDelegate <NSObject>
- (void)contextMenuNavigationController:(AVUnifiedPlayerContextMenuNavigationController *)arg1 didReceivePlayPauseGesture:(UITapGestureRecognizer *)arg2;
- (void)contextMenuNavigationController:(AVUnifiedPlayerContextMenuNavigationController *)arg1 didReceiveSwipeGestureWithDirection:(unsigned long long)arg2;
- (void)contextMenuNavigationControllerDidDismiss:(AVUnifiedPlayerContextMenuNavigationController *)arg1;
- (void)contextMenuNavigationController:(AVUnifiedPlayerContextMenuNavigationController *)arg1 didPresentMenuViewController:(AVUnifiedPlayerContextMenuViewController *)arg2;
- (void)contextMenuNavigationController:(AVUnifiedPlayerContextMenuNavigationController *)arg1 willPresentMenuViewController:(AVUnifiedPlayerContextMenuViewController *)arg2;
@end

