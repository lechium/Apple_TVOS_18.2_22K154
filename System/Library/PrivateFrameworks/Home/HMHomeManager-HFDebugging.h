//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHomeManager.h>

@class NSNumber, NSString;

@interface HMHomeManager (HFDebugging)
+ (id)hf_homeFutureForName:(id)arg1;	// IMP=0x0010000000152f02
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0010000000121e81
- (_Bool)hf_canAccessHomeRemotely:(id)arg1;	// IMP=0x0010000000154094
- (void)hf_enableEventLogOnboardingFlag;	// IMP=0x0010000000153f8a
- (id)hf_accessorySettingsController;	// IMP=0x0010000000153f78
- (id)hf_accessorySettingsDataSource;	// IMP=0x0010000000153f66
- (id)hf_updateApplicationDataFuture;	// IMP=0x0010000000153e93
@property(readonly, nonatomic) _Bool hf_hasDetectediCloudIssue;
- (id)hf_setSeenNewFeaturesViewVersion:(long long)arg1;	// IMP=0x0010000000153bea
- (long long)hf_lastNewFeaturesViewVersionSeen;	// IMP=0x0010000000153b19
- (id)hf_setHasSeenOnboardingWelcomeView:(_Bool)arg1;	// IMP=0x00100000001537a8
- (_Bool)hf_hasSeenOnboardingWelcomeView;	// IMP=0x0010000000153526
- (id)hf_homeForName:(id)arg1;	// IMP=0x00100000001533c4
- (id)hf_homeForURL:(id)arg1;	// IMP=0x0010000000153222
- (id)hf_setOrderedHomes:(id)arg1;	// IMP=0x0010000000152e4f
- (id)hf_orderedHomes;	// IMP=0x0010000000152da8
- (id)hf_orderedHomesList;	// IMP=0x0010000000152d60
- (id)hf_mutableOrderedHomesList;	// IMP=0x0010000000152ced
- (id)hf_homeWithIdentifier:(id)arg1;	// IMP=0x0010000000152bc5
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d973e
@property(retain) NSNumber *_cached_lastOnboardingNewFeaturesVersionSeenNumber;
@property(retain) NSNumber *_cached_hasSeenOnboardingWelcomeViewNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

