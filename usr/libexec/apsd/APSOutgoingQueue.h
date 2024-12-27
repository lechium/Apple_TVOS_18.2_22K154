//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSPowerAssertion, NSMutableArray, NSTimer;

@interface APSOutgoingQueue : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    double _lastReceivedAckOrReconnect;	// 24 = 0x18
    APSPowerAssertion *_powerAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009f92e
- (void)_timerFired:(id)arg1;	// IMP=0x001000000009f530
- (void)_recalculatePowerAssertion;	// IMP=0x001000000009f2ba
- (void)_recalculateTimer;	// IMP=0x001000000009ee5f
- (void)_queueChanged;	// IMP=0x001000000009ec01
- (void)clearEnqueuedSendsOnInterface:(id)arg1;	// IMP=0x001000000009e9f9
- (void)handleConnectionClosedOnInterface:(id)arg1;	// IMP=0x001000000009e79a
- (void)handleConnectionOpened;	// IMP=0x001000000009e760
- (void)handleResponseForPendingItem:(id)arg1 error:(id)arg2 onInterface:(id)arg3;	// IMP=0x001000000009e455
- (void)enqueueSendBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e2bd

@end

