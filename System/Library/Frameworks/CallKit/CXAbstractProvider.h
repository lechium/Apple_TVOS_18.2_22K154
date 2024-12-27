//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol CXAbstractProviderDelegate, CXActionDelegateInternal, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXAbstractProvider : NSObject
{
    CDUnknownBlockType _connectionInterruptionHandler;	// 8 = 0x8
    id <CXActionDelegateInternal> _internalActionDelegate;	// 16 = 0x10
    id <CXAbstractProviderDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_mutablePendingTransactions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000010173
@property(readonly, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXAbstractProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CXActionDelegateInternal> internalActionDelegate; // @synthesize internalActionDelegate=_internalActionDelegate;
@property(copy) CDUnknownBlockType connectionInterruptionHandler; // @synthesize connectionInterruptionHandler=_connectionInterruptionHandler;
- (void)provider:(id)arg1 handleTimeoutForAction:(id)arg2;	// IMP=0x000000000000fd98
- (void)provider:(id)arg1 commitTransaction:(id)arg2;	// IMP=0x000000000000f742
- (void)handleConnectionInterruptionForProvider:(id)arg1;	// IMP=0x000000000000f605
- (void)sendDidBeginForProvider:(id)arg1;	// IMP=0x000000000000f511
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f42a
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f355
- (id)_pendingActionWithUUID:(id)arg1;	// IMP=0x000000000000eff9
- (void)_updatePendingTransactions;	// IMP=0x000000000000ed76
@property(readonly, copy, nonatomic) NSArray *pendingTransactions;
- (void)invalidate;	// IMP=0x000000000000eaf6
- (void)_syncSetDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000e9d2
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000e8af
- (void)actionCompleted:(id)arg1;	// IMP=0x000000000000e563
- (id)init;	// IMP=0x000000000000e4ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

