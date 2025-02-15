//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSArray, NSObject, NSString;
@protocol HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriMultiUserNewLanguageNotificationManagerContext : HMFObject
{
    _Bool _cachedHasCurrentUserSeenNotification;	// 8 = 0x8
    id <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> _delegate;	// 16 = 0x10
    HMDUser *_user;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000a289bf
+ (id)userReadableLanguageFromCode:(id)arg1;	// IMP=0x0010000000a28554
- (void).cxx_destruct;	// IMP=0x0000000000a28516
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDUser *user; // @synthesize user=_user;
@property _Bool cachedHasCurrentUserSeenNotification; // @synthesize cachedHasCurrentUserSeenNotification=_cachedHasCurrentUserSeenNotification;
@property __weak id <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submitLogEventForShownNotificationWithLanguage:(id)arg1;	// IMP=0x0000000000a28409
- (void)showNotificationForNewlySupportedLanguage:(id)arg1;	// IMP=0x0000000000a281a5
- (id)siriLanguageForMediaAccessory:(id)arg1;	// IMP=0x0000000000a28152
- (id)siriLanguagesRequiringNotificationForVersion:(id)arg1;	// IMP=0x0000000000a27e5c
@property(readonly) NSString *currentDeviceSiriLanguage;
@property(readonly, getter=isRMVEnabledForCurrentUser) _Bool RMVEnabledForCurrentUser;
- (void)setCurrentUserHasSeenNotification;	// IMP=0x0000000000a27b5b
@property(readonly) _Bool hasCurrentUserSeenNotification;
@property(readonly) NSArray *mediaAccessories;
- (void)handleMediaAccessorySoftwareVersionUpdated:(id)arg1;	// IMP=0x0000000000a2756c
- (void)configure;	// IMP=0x0000000000a27508
- (id)initWithUser:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000a27483

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

