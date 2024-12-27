//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, SCRCTargetSelectorTimer;
@protocol OS_dispatch_queue;

@interface VOTClickAndHoldButtonInterceptor
{
    SCRCTargetSelectorTimer *_releaseTimer;	// 16 = 0x10
    SCRCTargetSelectorTimer *_holdTimer;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_eventQueue;	// 48 = 0x30
    double _holdDuration;	// 56 = 0x38
    double _releaseDuration;	// 64 = 0x40
    CDUnknownBlockType _clickHandler;	// 72 = 0x48
    CDUnknownBlockType _holdHandler;	// 80 = 0x50
    CDUnknownBlockType _clickAndHoldHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001385bc
@property(copy, nonatomic) CDUnknownBlockType clickAndHoldHandler; // @synthesize clickAndHoldHandler=_clickAndHoldHandler;
@property(copy, nonatomic) CDUnknownBlockType holdHandler; // @synthesize holdHandler=_holdHandler;
@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property(nonatomic) double releaseDuration; // @synthesize releaseDuration=_releaseDuration;
@property(nonatomic) double holdDuration; // @synthesize holdDuration=_holdDuration;
- (void)_drainQueueAndSendEventsToSystem:(_Bool)arg1;	// IMP=0x0010000000138366
- (void)_releaseTimerFired;	// IMP=0x00100000001382f7
- (void)_holdTimerFired;	// IMP=0x0010000000138288
- (void)_resetStateAndSendPendingEventsToSystem:(_Bool)arg1;	// IMP=0x0010000000138220
- (void)_processStateChangeWithEvent:(long long)arg1 axEvent:(id)arg2;	// IMP=0x0010000000137e30
- (void)buttonUpOccurred:(id)arg1;	// IMP=0x0010000000137d4b
- (void)buttonDownOccurred:(id)arg1;	// IMP=0x0010000000137c69
- (void)dealloc;	// IMP=0x0010000000137bd6
- (id)initWithThreadKey:(id)arg1;	// IMP=0x0010000000137a50

@end

