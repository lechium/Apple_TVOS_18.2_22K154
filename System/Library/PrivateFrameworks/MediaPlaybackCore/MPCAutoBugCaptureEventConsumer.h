//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCAutoBugCaptureEventConsumer : NSObject
{
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 8 = 0x8
    NSMutableSet *_reportedBugSignatures;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x00100000002108dd
- (void).cxx_destruct;	// IMP=0x0000000000210ddf
@property(readonly, nonatomic) NSMutableSet *reportedBugSignatures; // @synthesize reportedBugSignatures=_reportedBugSignatures;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (void)autoBugCaptureWithSubType:(id)arg1 context:(id)arg2 triggerThresholdValues:(id)arg3 events:(id)arg4;	// IMP=0x0000000000210b2c
- (_Bool)shouldReportError:(id)arg1;	// IMP=0x0000000000210abf
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000210aa5
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000002108ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

