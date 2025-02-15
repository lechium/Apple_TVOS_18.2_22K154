//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDStatusMonitor : NSObject
{
    struct __SCDynamicStore *_dynamicStore;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    unsigned long long _networkChangeEventCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    int _symptomToken;	// 40 = 0x28
}

+ (id)sharedMonitor;	// IMP=0x0040000000039d06
- (void).cxx_destruct;	// IMP=0x002000000003993b
- (void)stop;	// IMP=0x0010000000039929
- (void)start;	// IMP=0x0010000000039917
- (void)stopMonitoringDynamicStore;	// IMP=0x0010000000039900
- (void)startMonitoringDynamicStore;	// IMP=0x001000000003969d
- (void)handleBetterNetworkEvent;	// IMP=0x0010000000039697
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x0010000000039691
- (void)simulateNetworkChangedEvent:(id)arg1 identifier:(unsigned long long)arg2;	// IMP=0x00100000000395f1
- (void)performCallbackAfterNetworkChangedEvent:(id)arg1 identifier:(unsigned long long)arg2 delay:(long long)arg3;	// IMP=0x001000000003954f
- (void)performCallbackAfterNetworkChangedEvent:(id)arg1 identifier:(unsigned long long)arg2 numberOfPreviousRetries:(unsigned long long)arg3;	// IMP=0x00100000000394f1
- (void)dealloc;	// IMP=0x0010000000039470
- (id)init;	// IMP=0x001000000003938d

@end

