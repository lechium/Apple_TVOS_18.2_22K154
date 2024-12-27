//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, NSUUID;
@protocol HMFTimerManagerTimerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMDRequestedCapabilitiesContext : NSObject
{
    NSUUID *_transactionID;	// 8 = 0x8
    NSDictionary *_requestedCapabilities;	// 16 = 0x10
    NSString *_destinationAddress;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_responseQueue;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    NSMutableArray *_receivedResponses;	// 48 = 0x30
    id <HMFTimerManagerTimerContext> _timerContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000008560a8
@property(retain, nonatomic) id <HMFTimerManagerTimerContext> timerContext; // @synthesize timerContext=_timerContext;
@property(readonly, nonatomic) NSMutableArray *receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(readonly, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, copy, nonatomic) NSDictionary *requestedCapabilities; // @synthesize requestedCapabilities=_requestedCapabilities;
@property(readonly, nonatomic) NSUUID *transactionID; // @synthesize transactionID=_transactionID;
- (id)initWithTransactionID:(id)arg1 requestedCapabilities:(id)arg2 destinationAddress:(id)arg3 responseQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000855f26

@end

