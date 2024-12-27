//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDHH2AutoMigrationEligibilityResult, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHH2AutoMigrationEligibilityStatusLogEvent : HMMLogEvent
{
    _Bool _didRunMigrationTaskOnCurrentBuild;	// 8 = 0x8
    _Bool _currentBuildStartedOnHH1;	// 9 = 0x9
    HMDHH2AutoMigrationEligibilityResult *_currentUserAutoMigrationEligibilityResult;	// 16 = 0x10
    HMDHH2AutoMigrationEligibilityResult *_currentUserMigrationByOwnerManualEligibilityResult;	// 24 = 0x18
    HMDHH2AutoMigrationEligibilityResult *_currentUserMigrationByOwnerAutoEligibilityResult;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007f9db9
@property(readonly) _Bool currentBuildStartedOnHH1; // @synthesize currentBuildStartedOnHH1=_currentBuildStartedOnHH1;
@property(readonly) _Bool didRunMigrationTaskOnCurrentBuild; // @synthesize didRunMigrationTaskOnCurrentBuild=_didRunMigrationTaskOnCurrentBuild;
@property(readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerAutoEligibilityResult; // @synthesize currentUserMigrationByOwnerAutoEligibilityResult=_currentUserMigrationByOwnerAutoEligibilityResult;
@property(readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerManualEligibilityResult; // @synthesize currentUserMigrationByOwnerManualEligibilityResult=_currentUserMigrationByOwnerManualEligibilityResult;
@property(readonly) HMDHH2AutoMigrationEligibilityResult *currentUserAutoMigrationEligibilityResult; // @synthesize currentUserAutoMigrationEligibilityResult=_currentUserAutoMigrationEligibilityResult;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithAutoMigrationEligibilityResult:(id)arg1 migrationByOwnerManualEligibilityResult:(id)arg2 migrationByOwnerAutoEligibilityResult:(id)arg3 didRunMigrationTaskOnCurrentBuild:(_Bool)arg4 currentBuildStartedOnHH1:(_Bool)arg5;	// IMP=0x00000000007f9531

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end

