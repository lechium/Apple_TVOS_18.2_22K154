//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class MISSING_TYPE, NSString, PBCFUserNotification, UIViewController;
@protocol PBUserNotificationViewController, PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationNavigationController : UINavigationController
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    UIViewController<PBUserNotificationViewController> *_userNotificationViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000024bd5a
@property(retain, nonatomic) UIViewController<PBUserNotificationViewController> *userNotificationViewController; // @synthesize userNotificationViewController=_userNotificationViewController;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (MISSING_TYPE *)dismissDialogForViewController: /* Error: Ran out of types for this method. */;	// IMP=0x001000000024bcff
- (void)didCancelUserNotificationViewController:(id)arg1;	// IMP=0x001000000024bc9d
- (void)userNotificationViewController:(id)arg1 didSelectButtonIndex:(unsigned long long)arg2;	// IMP=0x001000000024bc36
@property(retain, nonatomic) PBCFUserNotification *notification;
- (id)initWithUserNotificationViewController:(id)arg1;	// IMP=0x001000000024bb15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

