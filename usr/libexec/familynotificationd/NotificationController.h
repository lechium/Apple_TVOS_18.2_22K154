//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAUserNotificationProvider, NSString;

@interface NotificationController : NSObject
{
    FAUserNotificationProvider *_notificationProvider;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0020000000001c49
- (void).cxx_destruct;	// IMP=0x0020000000002b3f
- (id)xpcConnectionForClientWithMachServiceName:(id)arg1;	// IMP=0x0010000000002a97
- (void)provider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x00100000000027e4
- (void)provider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x00100000000023dc
- (void)_allPendingNotificationsSortedByDate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002259
- (void)allPendingNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000021c2
- (void)pendingNotificationsForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001f5d
- (void)removeAllNotificationsFromClient:(id)arg1;	// IMP=0x0010000000001db1
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001cf1
- (void)deliverNotification:(id)arg1;	// IMP=0x0010000000001cdb
- (void)start;	// IMP=0x0010000000001c9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

