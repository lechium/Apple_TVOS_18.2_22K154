//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBLoretoUserProfileManagerClientRecord, PBSGroupRecommendationsSession, PBSUserProfilesSnapshot, PBUserProfileManagerServiceConfiguration;
@protocol OS_dispatch_queue, PBSUserProfileManagerClientInterface;

@interface PBLoretoUserProfileManagerClient : NSObject
{
    PBUserProfileManagerServiceConfiguration *_serviceConfiguration;	// 8 = 0x8
    id <PBSUserProfileManagerClientInterface> _delegate;	// 16 = 0x10
    PBLoretoUserProfileManagerClientRecord *_record;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000243503
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientRecord *record; // @synthesize record=_record;
@property(nonatomic) __weak id <PBSUserProfileManagerClientInterface> delegate; // @synthesize delegate=_delegate;
- (_Bool)_preflightServiceAccessForPermission:(CDUnknownBlockType)arg1 allowAccessDuringMigration:(_Bool)arg2 logErrors:(_Bool)arg3 error:(out id *)arg4;	// IMP=0x00100000002432e4
- (_Bool)_canObserveProfiles;	// IMP=0x00100000002432bc
- (_Bool)_preflightServiceAccessForPermission:(CDUnknownBlockType)arg1 error:(out id *)arg2;	// IMP=0x001000000024329e
- (_Bool)_preflightServiceAccessForPermission:(CDUnknownBlockType)arg1;	// IMP=0x0010000000243289
- (id)_service;	// IMP=0x0010000000243262
- (void)userProfileManager:(id)arg1 didUpdateGroupRecommendationsSession:(id)arg2;	// IMP=0x00100000002431c9
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x0010000000243144
- (oneway void)handleUserProfileAccountNotification:(id)arg1;	// IMP=0x001000000024300a
- (void)endIgnoringUserProfileAccountNotifications;	// IMP=0x0010000000242efa
- (void)beginIgnoringUserProfileAccountNotifications;	// IMP=0x0010000000242dea
- (oneway void)updateGroupRecommendationsSessionWithUserIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000242c52
- (oneway void)updateGroupRecommendationsConsent:(id)arg1 forUserProfileWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000242a8d
- (oneway void)effectiveUserProfileWithHomeUserIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002428f5
- (oneway void)removeUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000242758
- (oneway void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002425a0
- (oneway void)createUserProfileWithAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000242408
- (_Bool)canAddNewUserWithType:(id)arg1;	// IMP=0x00100000002422af
- (oneway void)selectUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000242112
- (oneway void)fetchGroupRecommendationsSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000241f8f
@property(readonly, nonatomic) PBSGroupRecommendationsSession *groupRecommendationsSession;
- (oneway void)fetchUserProfilesSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000241ce1
@property(readonly, nonatomic) PBSUserProfilesSnapshot *userProfilesSnapshot;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000241b31
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000241ae0
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000241a59
- (id)succinctDescription;	// IMP=0x0010000000241a08
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x001000000024195a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)dealloc;	// IMP=0x001000000024187b
- (id)initWithRecord:(id)arg1;	// IMP=0x00100000002413a2

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

