//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserActivityStateType6DetectorTransitionDailyCountLogEvent : HMMLogEvent
{
    NSNumber *_endedHomeCount;	// 8 = 0x8
    NSNumber *_coreLocationCount;	// 16 = 0x10
    NSNumber *_coreLocationEndedHomeCount;	// 24 = 0x18
    NSNumber *_coreLocationEndedNonHome;	// 32 = 0x20
    NSNumber *_coreLocationEndedNotMakingProgress;	// 40 = 0x28
    NSNumber *_coreLocationResume;	// 48 = 0x30
    NSNumber *_coreLocationEndDateUpdated;	// 56 = 0x38
    NSNumber *_coreLocationVisitExit;	// 64 = 0x40
    NSNumber *_coreLocationVisitEntry;	// 72 = 0x48
    NSNumber *_maxCoreLocationStateEndOffset;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000af39ea
@property(readonly, nonatomic) NSNumber *maxCoreLocationStateEndOffset; // @synthesize maxCoreLocationStateEndOffset=_maxCoreLocationStateEndOffset;
@property(readonly, nonatomic) NSNumber *coreLocationVisitEntry; // @synthesize coreLocationVisitEntry=_coreLocationVisitEntry;
@property(readonly, nonatomic) NSNumber *coreLocationVisitExit; // @synthesize coreLocationVisitExit=_coreLocationVisitExit;
@property(readonly, nonatomic) NSNumber *coreLocationEndDateUpdated; // @synthesize coreLocationEndDateUpdated=_coreLocationEndDateUpdated;
@property(readonly, nonatomic) NSNumber *coreLocationResume; // @synthesize coreLocationResume=_coreLocationResume;
@property(readonly, nonatomic) NSNumber *coreLocationEndedNotMakingProgress; // @synthesize coreLocationEndedNotMakingProgress=_coreLocationEndedNotMakingProgress;
@property(readonly, nonatomic) NSNumber *coreLocationEndedNonHome; // @synthesize coreLocationEndedNonHome=_coreLocationEndedNonHome;
@property(readonly, nonatomic) NSNumber *coreLocationEndedHomeCount; // @synthesize coreLocationEndedHomeCount=_coreLocationEndedHomeCount;
@property(readonly, nonatomic) NSNumber *coreLocationCount; // @synthesize coreLocationCount=_coreLocationCount;
@property(readonly, nonatomic) NSNumber *endedHomeCount; // @synthesize endedHomeCount=_endedHomeCount;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithEndedHomeCount:(id)arg1 coreLocationCount:(id)arg2 coreLocationEndedHomeCount:(id)arg3 coreLocationEndedNonHome:(id)arg4 coreLocationEndedNotMakingProgress:(id)arg5 coreLocationResume:(id)arg6 coreLocationEndDateUpdated:(id)arg7 coreLocationVisitExit:(id)arg8 coreLocationVisitEntry:(id)arg9 maxCoreLocationStateEndOffset:(id)arg10;	// IMP=0x0000000000af34d5

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

