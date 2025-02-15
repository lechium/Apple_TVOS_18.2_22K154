//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, FBProcess, FBProcessExecutionContext, FBProcessManager, NSArray, NSString, RBSAssertion, RBSProcessIdentity;
@protocol OS_dispatch_queue;

@interface PBProcessLaunchAgent : NSObject
{
    _Bool _queue_relaunchProcessOnExit;	// 8 = 0x8
    FBProcessExecutionContext *_queue_processExecutionContext;	// 16 = 0x10
    NSArray *_queue_attributes;	// 24 = 0x18
    FBProcess *_queue_process;	// 32 = 0x20
    RBSAssertion *_queue_processAssertion;	// 40 = 0x28
    RBSProcessIdentity *_processIdentity;	// 48 = 0x30
    FBProcessManager *_processManager;	// 56 = 0x38
    CDUnknownBlockType _assertionCreator;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    BSCompoundAssertion *_compoundAssertion;	// 80 = 0x50
}

+ (id)defaultAttributes;	// IMP=0x002000000019e680
- (void).cxx_destruct;	// IMP=0x00200000001a05b5
@property(readonly, nonatomic) BSCompoundAssertion *compoundAssertion; // @synthesize compoundAssertion=_compoundAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType assertionCreator; // @synthesize assertionCreator=_assertionCreator;
@property(readonly, nonatomic) FBProcessManager *processManager; // @synthesize processManager=_processManager;
@property(readonly, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_queue_processAssertion;
@property(readonly, nonatomic) FBProcess *process; // @synthesize process=_queue_process;
- (void)_queue_assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00100000001a03af
- (void)_assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00100000001a0288
- (id)_queue_createProcessAssertion;	// IMP=0x00100000001a01fc
- (void)_queue_stateDidChange:(long long)arg1;	// IMP=0x001000000019fdbb
- (void)_stateDidChange:(long long)arg1;	// IMP=0x001000000019fcf0
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x001000000019fbec
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x001000000019fae8
- (void)invalidate;	// IMP=0x001000000019fa5f
- (id)launchProcessForReason:(id)arg1;	// IMP=0x001000000019fa38
- (void)appendAttributes:(id)arg1;	// IMP=0x001000000019f75d
@property(copy) NSArray *attributes; // @synthesize attributes=_queue_attributes;
@property _Bool relaunchProcessOnExit; // @synthesize relaunchProcessOnExit=_queue_relaunchProcessOnExit;
@property(copy) FBProcessExecutionContext *processExecutionContext; // @synthesize processExecutionContext=_queue_processExecutionContext;
- (void)dealloc;	// IMP=0x001000000019ed68
- (id)initWithProcessIdentity:(id)arg1 processManager:(id)arg2 assertionCreator:(CDUnknownBlockType)arg3;	// IMP=0x001000000019e767
- (id)initWithProcessIdentity:(id)arg1;	// IMP=0x001000000019e6df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

