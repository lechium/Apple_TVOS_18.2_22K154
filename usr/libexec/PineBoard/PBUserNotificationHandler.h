//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PBUserNotificationHandler : NSObject
{
    CDUnknownBlockType _notificationFilter;	// 8 = 0x8
    NSMutableDictionary *_displayedViewControllers;	// 16 = 0x10
    NSMutableDictionary *_dialogContextsByToken;	// 24 = 0x18
    NSMutableDictionary *_displayedWaitViewControllers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002da00
@property(retain, nonatomic) NSMutableDictionary *displayedWaitViewControllers; // @synthesize displayedWaitViewControllers=_displayedWaitViewControllers;
@property(retain, nonatomic) NSMutableDictionary *dialogContextsByToken; // @synthesize dialogContextsByToken=_dialogContextsByToken;
@property(retain, nonatomic) NSMutableDictionary *displayedViewControllers; // @synthesize displayedViewControllers=_displayedViewControllers;
@property(copy, nonatomic) CDUnknownBlockType notificationFilter; // @synthesize notificationFilter=_notificationFilter;
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissControllerBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d8f6
- (void)_dismissUserNotificationWithToken:(id)arg1;	// IMP=0x001000000002d817
- (void)_cancelUserNotificationWithToken:(id)arg1;	// IMP=0x001000000002d739
- (id)_waitViewControllerForSpec:(id)arg1;	// IMP=0x001000000002d669
- (void)dialogManager:(id)arg1 willDismissDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x001000000002d47c
- (void)dismissDialogForViewController:(id)arg1;	// IMP=0x001000000002d3f5
- (void)didCancelUserNotificationViewController:(id)arg1;	// IMP=0x001000000002d1da
- (void)userNotificationViewController:(id)arg1 didSelectButtonIndex:(unsigned long long)arg2;	// IMP=0x001000000002cd14
- (id)_newViewControllerForNotification:(id)arg1;	// IMP=0x001000000002cb83
- (void)userNotificationCenterDidCancelCFNotification:(id)arg1;	// IMP=0x001000000002cb1d
- (void)userNotificationCenterDidReceiveCFNotification:(id)arg1;	// IMP=0x001000000002c1ac
- (id)init;	// IMP=0x001000000002c0ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

