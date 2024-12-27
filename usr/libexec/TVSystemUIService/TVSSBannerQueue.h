//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface TVSSBannerQueue : NSObject
{
    NSString *_penderIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSArray *_prioritizedQueues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000059d60
@property(retain, nonatomic) NSArray *prioritizedQueues; // @synthesize prioritizedQueues=_prioritizedQueues;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSString *penderIdentifier; // @synthesize penderIdentifier=_penderIdentifier;
- (_Bool)setSuspended:(_Bool)arg1 forRequesterWithIdentifier:(id)arg2 reason:(id)arg3;	// IMP=0x0010000000058f50
@property(readonly, copy, nonatomic) NSSet *activeSuspensionReasons;
- (_Bool)setSuspended:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0010000000058a60
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (id)pullPresentablesWithIdentification:(id)arg1;	// IMP=0x0010000000058110
- (id)peekPresentable;	// IMP=0x00100000000579e0
- (void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0010000000057310
- (void)setNonHighPrioritySuspended:(_Bool)arg1 level:(long long)arg2;	// IMP=0x0010000000056ec0
- (_Bool)isNonHighPrioritySuspendedWithLevel:(long long)arg1;	// IMP=0x0010000000056930
- (id)init;	// IMP=0x0010000000056440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

