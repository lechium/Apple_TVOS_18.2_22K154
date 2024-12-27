//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHLTaskSchedulerFactory;
@protocol OS_dispatch_queue, SHLLocalStateTransactionable, SHLSyncSessionDelegate;

@interface SHLSyncSession : NSObject
{
    id <SHLSyncSessionDelegate> _delegate;	// 8 = 0x8
    SHLTaskSchedulerFactory *_schedulerFactory;	// 16 = 0x10
    id <SHLLocalStateTransactionable> _transaction;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sessionDispatchQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004d336
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionDispatchQueue; // @synthesize sessionDispatchQueue=_sessionDispatchQueue;
@property(retain, nonatomic) id <SHLLocalStateTransactionable> transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) SHLTaskSchedulerFactory *schedulerFactory; // @synthesize schedulerFactory=_schedulerFactory;
@property(nonatomic) __weak id <SHLSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)undoTransactionWithError:(id *)arg1;	// IMP=0x001000000004d25c
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x001000000004d1fa
- (_Bool)startTransactionWithError:(id *)arg1;	// IMP=0x001000000004d14b
- (void)executeFetchTask:(id)arg1;	// IMP=0x001000000004cc52
- (void)executeModifyTask:(id)arg1;	// IMP=0x001000000004c720
- (void)executeTask:(id)arg1;	// IMP=0x001000000004c6c3
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000004c620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

