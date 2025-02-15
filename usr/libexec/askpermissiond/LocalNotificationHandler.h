//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UNUserNotificationCenter;

@interface LocalNotificationHandler : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
}

+ (id)sharedHandler;	// IMP=0x002000000000ff15
- (void).cxx_destruct;	// IMP=0x002000000001209b
@property(readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (id)_notificationContentWithRequest:(id)arg1 silently:(_Bool)arg2;	// IMP=0x0010000000011df0
- (void)_replaceNotificationWithRequest:(id)arg1;	// IMP=0x0010000000011a47
- (void)_presentNotificationWithRequest:(id)arg1 silently:(_Bool)arg2;	// IMP=0x00100000000115c7
- (void)_handleUnknownRequestIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011457
- (void)_handleRequesterRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000110c7
- (void)_handleApproverRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010f91
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010c78
- (void)start;	// IMP=0x0010000000010b13
- (id)retrieveRequestWithIdentifier:(id)arg1;	// IMP=0x001000000001076b
- (void)presentNotificationWithRequest:(id)arg1 silently:(_Bool)arg2;	// IMP=0x001000000001049f
- (void)dismissNotificationWithIdentifier:(id)arg1;	// IMP=0x001000000001024f
@property(readonly, nonatomic) NSArray *presentedRequests;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

