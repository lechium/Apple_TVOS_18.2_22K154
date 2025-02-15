//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface SDNotificationManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x00200000001077ec
- (void).cxx_destruct;	// IMP=0x002000000010fb4f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x001000000010fa56
- (void)testWatchKeyboard;	// IMP=0x001000000010f98a
- (void)testKeyboardUpdate;	// IMP=0x001000000010f8bd
- (void)testKeyboardRemove;	// IMP=0x001000000010f7f1
- (void)testKeyboardPostAutoFill;	// IMP=0x001000000010f711
- (void)testKeyboardPost;	// IMP=0x001000000010f643
- (void)testHandoffPost;	// IMP=0x001000000010f4b2
- (void)testAutoFillRemove;	// IMP=0x001000000010f3e6
- (void)testAutofillPost;	// IMP=0x001000000010f31a
- (void)testPostBasic;	// IMP=0x001000000010f1e3
- (void)testPost:(id)arg1;	// IMP=0x001000000010f010
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010ea80
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010e590
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010e082
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010dfaa
- (void)_homePodHandoffRemoveAll;	// IMP=0x001000000010defa
- (void)homePodHandoffRemoveAll;	// IMP=0x001000000010de99
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000010dc26
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000010db65
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010d98f
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010d8b7
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x001000000010d363
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010d2c7
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010cc53
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010cb7b
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010c6f5
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010c61d
- (void)_watchKeyboardRemoveAll;	// IMP=0x001000000010c599
- (void)watchKeyboardRemoveAll;	// IMP=0x001000000010c538
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x001000000010c3b2
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x001000000010c308
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x001000000010c181
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x001000000010c0d7
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x001000000010bd95
- (void)_tvAutoFillRemoveAll;	// IMP=0x001000000010bd05
- (void)tvAutoFillRemoveAll;	// IMP=0x001000000010bca4
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x001000000010bb1e
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x001000000010ba74
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x001000000010b734
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x001000000010b68a
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010af7f
- (void)riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010aea7
- (void)_riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010aa21
- (void)riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010a949
- (void)_riServerRemoveAll;	// IMP=0x001000000010a8c5
- (void)riServerRemoveAll;	// IMP=0x001000000010a864
- (void)_riServerRemove:(id)arg1;	// IMP=0x001000000010a6de
- (void)riServerRemove:(id)arg1;	// IMP=0x001000000010a634
- (void)_riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000010a483
- (void)riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000010a3c3
- (id)riServerContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000010a0a7
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000109a49
- (id)attachmentFromURL:(id)arg1;	// IMP=0x0010000000109844
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x0010000000108f5b
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0010000000108f46
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001087d5
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010841e
- (void)_riServerEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010805a
- (void)_update;	// IMP=0x0010000000107ffc
- (void)prefsChanged;	// IMP=0x0010000000107fea
- (void)_invalidate;	// IMP=0x0010000000107f9d
- (void)invalidate;	// IMP=0x0010000000107f3c
- (void)_activate;	// IMP=0x0010000000107ebb
- (void)activate;	// IMP=0x0010000000107e58
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000107841

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

