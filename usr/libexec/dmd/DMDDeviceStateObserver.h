//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDDeviceStateObserver : NSObject
{
    int mKeychainFirstUnlockNotificationToken;	// 8 = 0x8
    int mKeychainLockStateNotificationToken;	// 12 = 0xc
    int mNetworkChangeNotificationToken;	// 16 = 0x10
    _Bool _hasKeychainUnlockedSinceBoot;	// 20 = 0x14
    _Bool _isKeychainUnlocked;	// 21 = 0x15
    _Bool _isNetworkTethered;	// 22 = 0x16
}

@property(nonatomic) _Bool isNetworkTethered; // @synthesize isNetworkTethered=_isNetworkTethered;
@property(nonatomic) _Bool isKeychainUnlocked; // @synthesize isKeychainUnlocked=_isKeychainUnlocked;
@property(nonatomic) _Bool hasKeychainUnlockedSinceBoot; // @synthesize hasKeychainUnlockedSinceBoot=_hasKeychainUnlockedSinceBoot;
- (void)networkDidChange;	// IMP=0x001000000003c7d7
- (void)keybagLockStateDidChange;	// IMP=0x001000000003c79f
- (void)stopObservingChanges;	// IMP=0x001000000003c767
- (void)startObservingChanges;	// IMP=0x001000000003c5d7
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000003c4f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

