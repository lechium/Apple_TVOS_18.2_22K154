//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDCustomPluginNotificationContext : NSObject
{
}

+ (id)logger;	// IMP=0x0010000000036998
- (id)notificationCategories;	// IMP=0x0000000000036e92
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3;	// IMP=0x0000000000036a77
- (_Bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;	// IMP=0x0000000000036a0e
- (id)logger;	// IMP=0x00000000000369f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

