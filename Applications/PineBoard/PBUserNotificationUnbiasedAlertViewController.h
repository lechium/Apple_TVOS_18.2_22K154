//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class NSString, PBCFUserNotification;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationUnbiasedAlertViewController : UIAlertController
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    PBCFUserNotification *_notification;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000045a8f
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectButtonAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000459fd
- (void)_handleMenuButton;	// IMP=0x00100000000459b0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000000458c6
- (id)preferredFocusEnvironments;	// IMP=0x00100000000457f7
- (id)selectButton;	// IMP=0x0010000000045782

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

