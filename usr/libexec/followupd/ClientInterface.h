//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_os_transaction;

@interface ClientInterface : NSObject
{
    NSXPCConnection *_conn;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
}

+ (void)updateBadgeCount:(unsigned long long)arg1 bundleID:(id)arg2;	// IMP=0x002000000000524c
+ (void)refreshBadgesWithItems:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000005033
+ (id)allApprovedItemsByBundle;	// IMP=0x0010000000004f15
+ (void)_updateBadgeCounts:(_Bool)arg1 processTelemetry:(id)arg2;	// IMP=0x0010000000004ab5
+ (void)updateBadgeCounts:(_Bool)arg1;	// IMP=0x0010000000004aa1
+ (id)_badgeQueue;	// IMP=0x0010000000003785
- (void).cxx_destruct;	// IMP=0x0020000000005853
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_telemetryProcessor;	// IMP=0x00100000000057df
- (void)postHSA2PasswordResetNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000055fb
- (void)didActivateHSA2LoginNotificationNotification:(id)arg1;	// IMP=0x001000000000558e
- (void)tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;	// IMP=0x0010000000005588
- (void)postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005582
- (void)postHSA2PasswordChangeForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000557c
- (void)postHSA2LoginNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005576
- (void)_didChangeFollowUpItems;	// IMP=0x00100000000049d7
- (id)_predicateForClientIdentifier:(id)arg1;	// IMP=0x00100000000048ce
- (id)itemsForClientIdentifier:(id)arg1;	// IMP=0x00100000000047c2
- (void)clearPendingFollowUpItemsForClientIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000044d6
- (void)updateBadgesForTimer;	// IMP=0x00100000000044bb
- (void)clearNotificationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000421e
- (void)clearPendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003eea
- (void)pendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003e73
- (void)postFollowUpItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000388b
- (void)countOfPendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003806
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000036dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

