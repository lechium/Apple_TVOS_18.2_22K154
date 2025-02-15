//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallStateController, MISSING_TYPE, NSArray, NSMapTable, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CSDCallDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSDCallStateController *_callStateController;	// 16 = 0x10
    NSMapTable *_uniqueProxyIdentifierToCallTable;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToCallTableSemaphore;	// 32 = 0x20
    NSMutableOrderedSet *_currentCallSet;	// 40 = 0x28
}

+ (Class)callClass;	// IMP=0x002000000020343f
- (void).cxx_destruct;	// IMP=0x00200000002055a8
@property(retain, nonatomic) NSMutableOrderedSet *currentCallSet; // @synthesize currentCallSet=_currentCallSet;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *uniqueProxyIdentifierToCallTableSemaphore; // @synthesize uniqueProxyIdentifierToCallTableSemaphore=_uniqueProxyIdentifierToCallTableSemaphore;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToCallTable; // @synthesize uniqueProxyIdentifierToCallTable=_uniqueProxyIdentifierToCallTable;
@property(readonly, nonatomic) __weak CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_postClientNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000020549a
- (void)postClientNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000205488
- (void)postClientNotificationName:(id)arg1 forCall:(id)arg2;	// IMP=0x0010000000205473
- (void)postClientNotificationName:(id)arg1;	// IMP=0x001000000020545c
- (void)handleMeterLevelChanged:(float)arg1 inDirection:(int)arg2 forCalls:(id)arg3;	// IMP=0x00100000002053dd
- (void)handleFrequencyDataChanged:(id)arg1 inDirection:(int)arg2 forCalls:(id)arg3;	// IMP=0x0010000000205353
- (void)handleBytesOfDataUsedChanged:(long long)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 callHistoryIdentifier:(id)arg3;	// IMP=0x001000000020521b
- (void)handleCallStatusChanged:(id)arg1;	// IMP=0x001000000020512b
- (void)setUplinkMuted:(_Bool)arg1 forCalls:(id)arg2;	// IMP=0x0010000000204f83
- (void)setTTYType:(int)arg1 forCalls:(id)arg2;	// IMP=0x0010000000204dd0
- (void)disconnectCalls:(id)arg1 withReason:(int)arg2 whileHoldingCalls:(id)arg3 andUnholdingCalls:(id)arg4 andUngroupingCalls:(id)arg5;	// IMP=0x00100000002048f2
- (void)disconnectCalls:(id)arg1 whileHoldingCalls:(id)arg2 andUnholdingCalls:(id)arg3 andUngroupingCalls:(id)arg4;	// IMP=0x00100000002048c8
- (void)disconnectAllCalls:(id)arg1 withReason:(int)arg2;	// IMP=0x00100000002047f3
- (void)disconnectCall:(id)arg1 whileUngroupingCall:(id)arg2;	// IMP=0x001000000020469e
- (void)ungroupCall:(id)arg1 fromOtherCallsInGroup:(id)arg2;	// IMP=0x0010000000204447
- (void)groupCalls:(id)arg1 withCalls:(id)arg2;	// IMP=0x00100000002040e1
- (void)holdCalls:(id)arg1 whileUnholdingCalls:(id)arg2;	// IMP=0x0010000000203e43
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileHoldingActiveCalls:(id)arg3;	// IMP=0x0010000000203e27
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingActiveCalls:(id)arg3;	// IMP=0x0010000000203e0e
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingHeldCalls:(id)arg3 andHoldingCalls:(id)arg4;	// IMP=0x0010000000203dfc
- (void)answerCall:(id)arg1 withRequest:(id)arg2 whileDisconnectingCalls:(id)arg3 andHoldingCalls:(id)arg4;	// IMP=0x0010000000203b02
- (void)stopTrackingCall:(id)arg1;	// IMP=0x0010000000203975
- (void)startTrackingCall:(id)arg1;	// IMP=0x00100000002037db
- (void)registerCall:(id)arg1;	// IMP=0x00100000002036bf
- (MISSING_TYPE *)shouldRegisterCall: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000203622
- (_Bool)shouldTrackCall:(id)arg1;	// IMP=0x001000000020359b
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x00100000002034bc
@property(readonly, nonatomic) NSArray *calls;
- (id)initWithCallStateController:(id)arg1 queue:(id)arg2;	// IMP=0x00100000002032c8
- (id)init;	// IMP=0x00100000002032ad

@end

