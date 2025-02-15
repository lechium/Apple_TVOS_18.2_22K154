//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperation, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATObserverManager : NSObject
{
    NSMutableSet *mObservers;	// 8 = 0x8
    int mState;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *mProgressSource;	// 32 = 0x20
    CATOperation *mOperation;	// 40 = 0x28
    CATOperation *mStrongOperation;	// 48 = 0x30
    _Bool mIsObserving;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000013755
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000135e2
- (void)operationDidFinish:(id)arg1;	// IMP=0x0000000000013281
- (void)notifyObserversOperationDidProgress:(id)arg1;	// IMP=0x00000000000130f8
- (void)operationDidProgress:(id)arg1;	// IMP=0x0000000000012f8a
- (void)operationDidStart:(id)arg1;	// IMP=0x0000000000012c68
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000012b1e
- (void)addObserver:(id)arg1;	// IMP=0x0000000000012888
- (id)initWithOperation:(id)arg1;	// IMP=0x000000000001257f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

