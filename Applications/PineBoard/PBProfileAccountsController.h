//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSCountedSet, NSRecursiveLock, PBAccountNotificationCoalescingQueue, UPSuppressAccountChangeEventHandlingAssertion;
@protocol PBProfileAccountsControllerDelegate, PBProfileStoreSnapshotProviding;

@interface PBProfileAccountsController : NSObject
{
    id <PBProfileStoreSnapshotProviding> _snapshotProvider;	// 8 = 0x8
    id <PBProfileAccountsControllerDelegate> _delegate;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    UPSuppressAccountChangeEventHandlingAssertion *_lock_suppressAccountEventAssertion;	// 32 = 0x20
    NSCountedSet *_lock_ignoringProfileAccountNotificationsReasons;	// 40 = 0x28
    PBAccountNotificationCoalescingQueue *_lock_pendingProfileAccountNotifications;	// 48 = 0x30
    NSRecursiveLock *_lock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000022b9fd
- (void)_removeOrphanPersonasWithProfileStoreSnapshot:(id)arg1;	// IMP=0x001000000022b42a
- (void)_removeOrphanAccountsWithProfileStoreSnapshot:(id)arg1;	// IMP=0x001000000022a95b
- (void)_validateAndFixActiveITunesAccount;	// IMP=0x001000000022a619
- (void)_deactivateCurrentlyActiveITunesAccount;	// IMP=0x001000000022a3b7
- (void)_activateITunesAccountWithProfile:(id)arg1;	// IMP=0x001000000022a05a
- (void)_removePersonaWithPersonaUniqueIdentifier:(id)arg1 isActiveProfile:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000229ad2
- (void)_endIgnoringProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x00100000002298dd
- (void)_notifyDelegateDidHandleAccountNotifications;	// IMP=0x0010000000229867
- (void)_processPendingAccountNotifications;	// IMP=0x00100000002295db
- (void)_updateProfilesWithContexts:(id)arg1;	// IMP=0x0010000000228f5c
- (void)_assignITunesAltDSID:(id)arg1 toProfile:(id)arg2;	// IMP=0x0010000000228d81
- (void)_addUserWithITunesAltDSID:(id)arg1 isPrimary:(_Bool)arg2 personaUniqueString:(id)arg3;	// IMP=0x0010000000228bc8
- (void)_didAddITunesAccountWithAccountIdentifier:(id)arg1;	// IMP=0x001000000022847c
- (void)_didRemoveITunesAccountWithAltDSID:(id)arg1;	// IMP=0x0010000000227cb2
- (void)_didRemoveGameCenterAccountWithAltDSID:(id)arg1;	// IMP=0x00100000002274e8
- (void)_didRemoveICloudAccountWithAltDSID:(id)arg1;	// IMP=0x0010000000226f6b
- (void)_handleProfileAccountNotification:(id)arg1;	// IMP=0x0010000000226c0a
- (void)_lock_acquireSuppressAccountEventAssertion;	// IMP=0x0010000000226b66
- (void)handleProfileAccountNotification:(id)arg1;	// IMP=0x0010000000226955
- (void)endAllIgnoringProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x001000000022684f
- (void)endIgnoringProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x001000000022683c
- (void)beginIgnoringProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x00100000002266ff
- (void)deactivateCurrentlyActiveITunesAccount;	// IMP=0x00100000002266ec
- (void)activateITunesAccountWithProfile:(id)arg1;	// IMP=0x00100000002266d9
- (void)validateAndFixActiveITunesAccount;	// IMP=0x00100000002266c6
- (void)removeOrphanAccountsAndPersonas;	// IMP=0x001000000022657e
- (id)initWithProfileStoreSnapshotProvider:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000226490

@end

