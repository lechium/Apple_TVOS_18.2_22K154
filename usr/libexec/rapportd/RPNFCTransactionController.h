//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPNFCTransaction;
@protocol OS_dispatch_queue, OS_dispatch_source, RPNFCTransactionControllerDataSource, RPNFCTransactionControllerDelegate;

@interface RPNFCTransactionController : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    _Bool _pendingReceiver;	// 9 = 0x9
    _Bool _pendingInitiator;	// 10 = 0xa
    long long _preferredPollingType;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    id <RPNFCTransactionControllerDataSource> _dataSource;	// 32 = 0x20
    id <RPNFCTransactionControllerDelegate> _delegate;	// 40 = 0x28
    RPNFCTransaction *_currentTransaction;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_pollingCoolDownTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_initiatorLimitTimer;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_connectToReceiverTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_becomeInitiatorTimer;	// 80 = 0x50
    long long _receiverState;	// 88 = 0x58
    long long _initiatorState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000804d4
@property(nonatomic) _Bool pendingInitiator; // @synthesize pendingInitiator=_pendingInitiator;
@property(nonatomic) _Bool pendingReceiver; // @synthesize pendingReceiver=_pendingReceiver;
@property(nonatomic) long long initiatorState; // @synthesize initiatorState=_initiatorState;
@property(nonatomic) long long receiverState; // @synthesize receiverState=_receiverState;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *becomeInitiatorTimer; // @synthesize becomeInitiatorTimer=_becomeInitiatorTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectToReceiverTimer; // @synthesize connectToReceiverTimer=_connectToReceiverTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *initiatorLimitTimer; // @synthesize initiatorLimitTimer=_initiatorLimitTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollingCoolDownTimer; // @synthesize pollingCoolDownTimer=_pollingCoolDownTimer;
@property(retain, nonatomic) RPNFCTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <RPNFCTransactionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <RPNFCTransactionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) long long preferredPollingType; // @synthesize preferredPollingType=_preferredPollingType;
- (void);	// IMP=0x0010000000080228
- (void)_beginTransactionForRole:(long long)arg1;	// IMP=0x0010000000080099
- (void)_stopBecomeInitiatorTimer;	// IMP=0x0010000000080009
- (void)_startBecomeInitiatorTimer;	// IMP=0x001000000007feb2
- (void)_stopInitiatorLimitTimer;	// IMP=0x001000000007fe22
- (void)_startInitiatorLimitTimer;	// IMP=0x001000000007fd14
- (void)_stopConnectToReceiverTimer;	// IMP=0x001000000007fc3c
- (void)_startConnectToReceiverTimer;	// IMP=0x001000000007fa7a
- (void)_stopPollingCoolDownTimer;	// IMP=0x001000000007f9a2
- (void)_startPollingCoolDownTimer;	// IMP=0x001000000007f883
- (id)_createOneShotTimerWithInterval:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f804
- (void)_stopTimers;	// IMP=0x001000000007f7bc
- (void)_stopReceiver;	// IMP=0x001000000007f7b6
- (void)_startReceiver;	// IMP=0x001000000007f7b0
- (void)_stopInitiator;	// IMP=0x001000000007f7aa
- (void)_startInitiator;	// IMP=0x001000000007f7a4
- (void)resumePassiveNearbyDeviceDiscovery;	// IMP=0x001000000007f79e
- (void)invalidateTransaction:(id)arg1;	// IMP=0x001000000007f58e
- (void)stop;	// IMP=0x001000000007f588
- (void)start;	// IMP=0x001000000007f582
- (void)_updatePolling;	// IMP=0x001000000007f39c
- (id)initWithPreferredPollingType:(long long)arg1 dispatchQueue:(id)arg2;	// IMP=0x001000000007f2b3

@end

