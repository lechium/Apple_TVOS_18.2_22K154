//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDMediaUserState, MRUserIdentity, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MRDMusicUserStateCenter : NSObject
{
    _Bool _cachedStateLoaded;	// 8 = 0x8
    _Bool _isMusicAppInstalled;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id _privacyObserver;	// 16 = 0x10
    NSString *_musicApplicationBundleIdentifier;	// 24 = 0x18
    NSMutableDictionary *_dsidToPendingCompletionMap;	// 32 = 0x20
    NSMutableSet *_finishedWaitingForCloudStateDSIDs;	// 40 = 0x28
}

+ (id)sharedCenter;	// IMP=0x0020000000030f59
- (void).cxx_destruct;	// IMP=0x00200000000360a8
@property(retain, nonatomic) NSMutableSet *finishedWaitingForCloudStateDSIDs; // @synthesize finishedWaitingForCloudStateDSIDs=_finishedWaitingForCloudStateDSIDs;
@property(retain, nonatomic) NSMutableDictionary *dsidToPendingCompletionMap; // @synthesize dsidToPendingCompletionMap=_dsidToPendingCompletionMap;
@property(readonly, nonatomic) NSString *musicApplicationBundleIdentifier; // @synthesize musicApplicationBundleIdentifier=_musicApplicationBundleIdentifier;
@property(retain, nonatomic) id privacyObserver; // @synthesize privacyObserver=_privacyObserver;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) _Bool isMusicAppInstalled; // @synthesize isMusicAppInstalled=_isMusicAppInstalled;
- (void)postCloudStateChanged;	// IMP=0x0010000000035de5
- (void)handleiTunesNotification:(id)arg1;	// IMP=0x0010000000035db7
- (void)handleRegisteredApplicationsChangedNotification:(id)arg1;	// IMP=0x0010000000035cfe
- (void)updateIsMusicAppInstalled;	// IMP=0x0010000000035b14
- (id)stateCenter;	// IMP=0x0010000000035729
@property(readonly, nonatomic) _Bool cachedStateLoaded; // @synthesize cachedStateLoaded=_cachedStateLoaded;
- (id)identityForHomeUserIdentifier:(id)arg1;	// IMP=0x00100000000354db
@property(readonly, nonatomic) NSArray *localUserIdentities;
- (id)identityForUserState:(id)arg1;	// IMP=0x00100000000342dc
@property(readonly, nonatomic) MRUserIdentity *localActiveIdentity;
@property(readonly, nonatomic) MRDMediaUserState *localActiveUserState;
@property(readonly, nonatomic) NSArray *localUserStates;
- (void)checkPendingIdentityCompletions;	// IMP=0x0010000000032a6b
- (void)userIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003125d
- (void)registerNotifications;	// IMP=0x0010000000031112
- (id)init;	// IMP=0x0010000000030ff8

@end

