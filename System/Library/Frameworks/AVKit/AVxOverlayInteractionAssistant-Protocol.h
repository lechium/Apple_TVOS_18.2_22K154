//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class UIFocusMovementHint, UIFocusUpdateContext, UIView, UIViewController;

@protocol AVxOverlayInteractionAssistant <NSObject>
- (void)viewControllerDidReceiveSelectEvent:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 didUpdateFocusInContext:(UIFocusUpdateContext *)arg2;
- (void)viewDidReceiveSelectEvent:(UIView *)arg1;
- (void)view:(UIView *)arg1 didUpdateFocusInContext:(UIFocusUpdateContext *)arg2;
- (void)view:(UIView *)arg1 didReceiveFocusMovementHint:(UIFocusMovementHint *)arg2;
@end

