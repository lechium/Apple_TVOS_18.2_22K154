//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDDeviceLockStateObserver, CSDKeychainPasswordItem, NSString;
@protocol OS_dispatch_queue;

@interface CSDFaceTimeIMAccount : NSObject
{
    _Bool _IMDaemonConnected;	// 8 = 0x8
    NSString *_callerID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CSDKeychainPasswordItem *_keychainItem;	// 32 = 0x20
    CSDDeviceLockStateObserver *_lockStateObserver;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00200000001c8a52
- (void).cxx_destruct;	// IMP=0x00200000001c9dfe
@property(readonly, nonatomic) CSDDeviceLockStateObserver *lockStateObserver; // @synthesize lockStateObserver=_lockStateObserver;
@property(readonly, nonatomic) CSDKeychainPasswordItem *keychainItem; // @synthesize keychainItem=_keychainItem;
@property(nonatomic, getter=isIMDaemonConnected) _Bool IMDaemonConnected; // @synthesize IMDaemonConnected=_IMDaemonConnected;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *callerID; // @synthesize callerID=_callerID;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;	// IMP=0x00100000001c9c7f
- (void)updateState;	// IMP=0x00100000001c99d2
- (id)faceTimeIMAccount;	// IMP=0x00100000001c9978
- (void)_saveLastKnownFaceTimeCallerID;	// IMP=0x00100000001c981c
- (void)removeCallerIDFromPreferences;	// IMP=0x00100000001c9775
- (void)_initializeLastKnownCallerID;	// IMP=0x00100000001c9466
- (void)displayNameChanged:(id)arg1;	// IMP=0x00100000001c93aa
- (void)preferredAccountChanged:(id)arg1;	// IMP=0x00100000001c92ee
- (void)imDaemonDidConnect:(id)arg1;	// IMP=0x00100000001c9178
- (void)updateCallerID:(id)arg1;	// IMP=0x00100000001c8f37
- (id)init;	// IMP=0x00100000001c8ad7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

