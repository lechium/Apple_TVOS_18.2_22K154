//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSSuggestedUserProfileSnapshot, TVSObserverSet, UPCandidateProfileStore;
@protocol BSInvalidatable, PBSuggestedUserProfilesArchiveControlling;

@interface PBLoretoSuggestedUserProfileManager : NSObject
{
    UPCandidateProfileStore *_profileStore;	// 8 = 0x8
    id <BSInvalidatable> _profileStoreObserverToken;	// 16 = 0x10
    id <PBSuggestedUserProfilesArchiveControlling> _profileArchiveController;	// 24 = 0x18
    TVSObserverSet *_observers;	// 32 = 0x20
}

+ (id)_updateProfileRequestsForLegacySuggestedUserProfilesArchive:(id)arg1;	// IMP=0x004000000005ff27
- (void).cxx_destruct;	// IMP=0x0020000000060131
- (void)_removeSuggestedUserProfilesArchiveWithController:(id)arg1;	// IMP=0x001000000005fe38
- (void)_migrateSuggestedUserProfilesWithController:(id)arg1;	// IMP=0x001000000005f8e4
- (void)_notifyObservers;	// IMP=0x001000000005f874
- (void)removeObserver:(id)arg1;	// IMP=0x001000000005f7b6
- (void)addObserver:(id)arg1;	// IMP=0x001000000005f6f0
- (void)updateSuppressedForSuggestedUserWithIdentifier:(id)arg1 suppressed:(id)arg2;	// IMP=0x001000000005f4b1
@property(readonly, nonatomic) PBSSuggestedUserProfileSnapshot *suggestedUserProfileSnapshot;
- (void)dealloc;	// IMP=0x001000000005f1f2
- (id)initWithSuggestedUserProfilesArchiveController:(id)arg1;	// IMP=0x001000000005efed
- (id)init;	// IMP=0x001000000005efad

@end

