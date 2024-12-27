//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSCondition, CKKSResultOperation, NSDate, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface CKKSNearFutureScheduler : NSObject
{
    _Bool _liveRequest;	// 8 = 0x8
    _Bool _keepProcessAlive;	// 9 = 0x9
    CDUnknownBlockType _futureBlock;	// 16 = 0x10
    CKKSResultOperation *_operationDependency;	// 24 = 0x18
    CKKSCondition *_liveRequestReceived;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    unsigned long long _initialDelay;	// 48 = 0x30
    unsigned long long _currentDelay;	// 56 = 0x38
    unsigned long long _maximumDelay;	// 64 = 0x40
    double _backoff;	// 72 = 0x48
    long long _operationDependencyDescriptionCode;	// 80 = 0x50
    NSOperationQueue *_operationQueue;	// 88 = 0x58
    NSDate *_predictedNextFireTime;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_timer;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_os_transaction> *_transaction;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000b1406
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool keepProcessAlive; // @synthesize keepProcessAlive=_keepProcessAlive;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property _Bool liveRequest; // @synthesize liveRequest=_liveRequest;
@property(retain) NSDate *predictedNextFireTime; // @synthesize predictedNextFireTime=_predictedNextFireTime;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property long long operationDependencyDescriptionCode; // @synthesize operationDependencyDescriptionCode=_operationDependencyDescriptionCode;
@property double backoff; // @synthesize backoff=_backoff;
@property unsigned long long maximumDelay; // @synthesize maximumDelay=_maximumDelay;
@property unsigned long long currentDelay; // @synthesize currentDelay=_currentDelay;
@property unsigned long long initialDelay; // @synthesize initialDelay=_initialDelay;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) CKKSCondition *liveRequestReceived; // @synthesize liveRequestReceived=_liveRequestReceived;
@property(retain) CKKSResultOperation *operationDependency; // @synthesize operationDependency=_operationDependency;
@property(copy) CDUnknownBlockType futureBlock; // @synthesize futureBlock=_futureBlock;
- (void)cancel;	// IMP=0x00100000000b11cc
- (void)_onqueueTrigger:(unsigned long long)arg1 maximumDelay:(unsigned long long)arg2;	// IMP=0x00100000000b0c17
- (void)trigger;	// IMP=0x00100000000b0b52
- (void)_onqueueTimerTick;	// IMP=0x00100000000b080b
- (void)triggerAt:(unsigned long long)arg1;	// IMP=0x00100000000b073b
- (void)waitUntil:(unsigned long long)arg1;	// IMP=0x00100000000b06bf
@property(readonly) NSDate *nextFireTime;
- (id)description;	// IMP=0x00100000000b04ee
- (id)makeOperationDependency;	// IMP=0x00100000000b041f
- (void)changeDelays:(unsigned long long)arg1 continuingDelay:(unsigned long long)arg2;	// IMP=0x00100000000b0398
- (id)initWithName:(id)arg1 initialDelay:(unsigned long long)arg2 exponentialBackoff:(double)arg3 maximumDelay:(unsigned long long)arg4 keepProcessAlive:(_Bool)arg5 dependencyDescriptionCode:(long long)arg6 qosClass:(unsigned int)arg7 block:(CDUnknownBlockType)arg8;	// IMP=0x00100000000b01ae
- (id)initWithName:(id)arg1 initialDelay:(unsigned long long)arg2 exponentialBackoff:(double)arg3 maximumDelay:(unsigned long long)arg4 keepProcessAlive:(_Bool)arg5 dependencyDescriptionCode:(long long)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x00100000000b018b
- (id)initWithName:(id)arg1 initialDelay:(unsigned long long)arg2 continuingDelay:(unsigned long long)arg3 keepProcessAlive:(_Bool)arg4 dependencyDescriptionCode:(long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b0137
- (id)initWithName:(id)arg1 delay:(unsigned long long)arg2 keepProcessAlive:(_Bool)arg3 dependencyDescriptionCode:(long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b0113

@end

