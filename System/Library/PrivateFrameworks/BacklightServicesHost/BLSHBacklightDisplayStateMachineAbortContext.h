//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SWSystemSleepMonitorAggregateState;

__attribute__((visibility("hidden")))
@interface BLSHBacklightDisplayStateMachineAbortContext : NSObject
{
    SWSystemSleepMonitorAggregateState *_sleepMonitorAggregateState;	// 8 = 0x8
    unsigned long long _abortTimestamp;	// 16 = 0x10
    long long _displayMode;	// 24 = 0x18
    long long _prewarmingDisplayMode;	// 32 = 0x20
    long long _lastSteadyStateDisplayMode;	// 40 = 0x28
    long long _caDisplayState;	// 48 = 0x30
    long long _cbDisplayMode;	// 56 = 0x38
    _Bool _showingBlankingWindow;	// 64 = 0x40
    _Bool _hasEnsureFlipbookCurrent;	// 65 = 0x41
    unsigned int _payloadSize;	// 68 = 0x44
    unsigned long long _abortReason;	// 72 = 0x48
    const void *_payload;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000322a
@property(readonly, nonatomic) _Bool hasEnsureFlipbookCurrent; // @synthesize hasEnsureFlipbookCurrent=_hasEnsureFlipbookCurrent;
@property(readonly, nonatomic) unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property(readonly, nonatomic) const void *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) unsigned long long abortReason; // @synthesize abortReason=_abortReason;
- (void)dealloc;	// IMP=0x00000000000031b6
@property(readonly, copy) NSString *description;
- (void)_populatePayload;	// IMP=0x0000000000002ef8
@property(readonly, nonatomic) _Bool wantsPanic;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)setSleepImminentAbortReason;	// IMP=0x0000000000002edc
@property(readonly, copy, nonatomic) NSString *abortReasonString;
- (id)initWithDisplayMode:(long long)arg1 prewarmingDisplayMode:(long long)arg2 lastSteadyStateDisplayMode:(long long)arg3 caDisplayState:(long long)arg4 cbDisplayMode:(long long)arg5 showingBlankingWindow:(_Bool)arg6 sleepMonitorAggregateState:(id)arg7 hasEnsureFlipbookCurrent:(_Bool)arg8;	// IMP=0x0000000000002df0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double panicDelay;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsWaitPastFireForCompletionAndTailspin;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

