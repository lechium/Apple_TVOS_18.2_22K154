//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDEntryExitLogEvent : HMMLogEvent
{
    _Bool _isEntry;	// 8 = 0x8
    _Bool _isExit;	// 9 = 0x9
    _Bool _isFalse;	// 10 = 0xa
    _Bool _isInitial;	// 11 = 0xb
    double _secondsLastFired;	// 16 = 0x10
}

+ (id)exitLogEvent:(double)arg1 isFalse:(_Bool)arg2 isInitial:(_Bool)arg3;	// IMP=0x0010000000e51fca
+ (id)entryLogEvent:(double)arg1 isFalse:(_Bool)arg2 isInitial:(_Bool)arg3;	// IMP=0x0010000000e51f7c
@property(readonly) double secondsLastFired; // @synthesize secondsLastFired=_secondsLastFired;
@property(readonly) _Bool isInitial; // @synthesize isInitial=_isInitial;
@property(readonly) _Bool isFalse; // @synthesize isFalse=_isFalse;
@property(readonly) _Bool isExit; // @synthesize isExit=_isExit;
@property(readonly) _Bool isEntry; // @synthesize isEntry=_isEntry;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithReason:(unsigned long long)arg1 isFalse:(_Bool)arg2 lastFired:(double)arg3 isInitial:(_Bool)arg4;	// IMP=0x0000000000e51a52

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

