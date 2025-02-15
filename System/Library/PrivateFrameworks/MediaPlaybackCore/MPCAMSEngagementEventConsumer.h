//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSEngagement, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCAMSEngagementEventConsumer : NSObject
{
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 8 = 0x8
    AMSEngagement *_engagement;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x001000000029ee3a
- (void).cxx_destruct;	// IMP=0x000000000029fb62
@property(readonly, nonatomic) AMSEngagement *engagement; // @synthesize engagement=_engagement;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (id)_JSONEncodableEvent:(id)arg1;	// IMP=0x000000000029f9b1
- (_Bool)_enqueueDataForPlaybackChangingEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x000000000029f097
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x000000000029f05e
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x000000000029ee47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

