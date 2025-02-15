//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPApplicationLauncher, MISSING_TYPE, NSSet, NSUUID;
@protocol CPActivitySessionManagerDelegate;

@interface CPActivitySessionManager : NSObject
{
    MISSING_TYPE *id;	// 1 = 0x1
    MISSING_TYPE *groupUUID;	// 0 = 0x0
    MISSING_TYPE *queue;	// 25 = 0x19
    MISSING_TYPE *featureFlags;	// 1229741919 = 0x494c5f5f
    MISSING_TYPE *systemStateObserver;	// 21577 = 0x5449
    MISSING_TYPE *audioRoutePolicyManager;	// 3428352 = 0x345000
    MISSING_TYPE *serverBag;	// 0 = 0x0
    MISSING_TYPE *__activitySessions;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 5275648 = 0x508000
    MISSING_TYPE *applicationController;	// 3321856 = 0x32b000
    MISSING_TYPE *applicationLauncher;	// 5267584 = 0x506080
    MISSING_TYPE *handedOff;	// 1 = 0x1
    MISSING_TYPE *_activitySessionCreation;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_protectedStorage;	// 0 = 0x0
    MISSING_TYPE *topicsObserver;	// 0 = 0x0
    MISSING_TYPE *topicsObserverSubscription;	// 0 = 0x0
    MISSING_TYPE *_topicsObserverGenerator;	// 0 = 0x0
}

+ (_Bool)supportsMultipleActivitySessions;	// IMP=0x00100000001de2d0
- (void).cxx_destruct;	// IMP=0x00000000001e8a80
- (id)init;	// IMP=0x00000000001e8a20
- (void)updateVirtualParticipantIdentifier:(unsigned long long)arg1;	// IMP=0x00000000001e6fb0
- (void)resetSceneAssociationsForBundleID:(id)arg1;	// IMP=0x00000000001e30a0
- (void)removeLocalScreenSharingSessions;	// IMP=0x00000000001e2f60
- (void)removeScreenSharingSessions;	// IMP=0x00000000001e2d60
- (void)resetNonScreenSharingSessions;	// IMP=0x00000000001e2d10
- (void)resetSessions;	// IMP=0x00000000001e2cc0
- (void)refreshActivitySessionActiveParticipants;	// IMP=0x00000000001e2b70
- (void)refreshDataCryptors;	// IMP=0x00000000001e2a30
- (void)setUsingAirplay:(_Bool)arg1 forActivitySessionWithUUID:(id)arg2;	// IMP=0x00000000001e2980
- (void)updateActivitySessionWithUUID:(id)arg1 activity:(id)arg2;	// IMP=0x00000000001e24b0
- (void)removeActivitySessionWithUUID:(id)arg1 usingHandle:(id)arg2;	// IMP=0x00000000001e1ec0
- (void)presentSessionDismissalAlertForActivitySessionUUID:(id)arg1 allowingCancellation:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e19d0
- (void)leaveActivitySessionWithUUID:(id)arg1;	// IMP=0x00000000001e12f0
- (id)createActivitySessionWithTuActivitySession:(id)arg1;	// IMP=0x00000000001e0c60
- (id)initWithIdentifier:(id)arg1 groupUUID:(id)arg2 activities:(id)arg3 applicationController:(id)arg4 delegate:(id)arg5 queue:(id)arg6 systemStateObserver:(id)arg7;	// IMP=0x00000000001defb0
@property(nonatomic, readonly) NSSet *tuSystemActivitySessions;
@property(nonatomic, readonly) NSSet *tuActivitySessions;
@property(nonatomic) _Bool handedOff; // @synthesize handedOff;
@property(nonatomic, retain) CPApplicationLauncher *applicationLauncher; // @synthesize applicationLauncher;
@property(nonatomic) __weak id <CPActivitySessionManagerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) NSSet *activitySessions;
@property(nonatomic, readonly) NSUUID *identifier;
- (void)applicationController:(id)arg1 bundleIdentifierChanged:(id)arg2;	// IMP=0x00000000001e9110
- (void)systemStateObserver:(id)arg1 sharePlayAllowedStateChanged:(_Bool)arg2;	// IMP=0x00000000001e91b0
- (void)audioPolicyManager:(id)arg1 sharePlayAllowedStateChanged:(_Bool)arg2;	// IMP=0x00000000001e91f0

@end

