//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRGroupSessionEligibilityStatus, MRGroupSessionInfo, MRUserIdentity;

__attribute__((visibility("hidden")))
@interface MRGroupSessionRequestManager : NSObject
{
    _Bool _hasPopulatedIdentity;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    MRGroupSessionInfo *_groupSessionInfo;	// 16 = 0x10
    MRUserIdentity *_localUserIdentity;	// 24 = 0x18
    MRGroupSessionEligibilityStatus *_eligibilityStatus;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x00600000000466d3
- (void).cxx_destruct;	// IMP=0x0000000000046e12
@property(nonatomic) _Bool hasPopulatedIdentity; // @synthesize hasPopulatedIdentity=_hasPopulatedIdentity;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MRGroupSessionEligibilityStatus *eligibilityStatus; // @synthesize eligibilityStatus=_eligibilityStatus;
@property(retain, nonatomic) MRUserIdentity *localUserIdentity; // @synthesize localUserIdentity=_localUserIdentity;
- (void)handleGroupSessionNearbyContactDiscoveryDidChange:(id)arg1;	// IMP=0x0000000000046d26
- (_Bool)updateGroupSessionEligibility:(id)arg1;	// IMP=0x0000000000046c05
- (void)updateLocalIdentity:(id)arg1;	// IMP=0x0000000000046b37
- (void)updateGroupSessionInfo:(id)arg1;	// IMP=0x0000000000046a6d
@property(readonly, nonatomic) MRGroupSessionInfo *groupSessionInfo; // @synthesize groupSessionInfo=_groupSessionInfo;
- (void)augmentLocalCommandOptions:(id)arg1;	// IMP=0x00000000000468c1
- (void)restoreState;	// IMP=0x0000000000046873
- (void)registerObservers;	// IMP=0x00000000000467c5
- (id)init;	// IMP=0x0000000000046772

@end

