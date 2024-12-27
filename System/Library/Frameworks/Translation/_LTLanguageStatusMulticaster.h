//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTLanguageStatusMulticaster : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMapTable *_statusObservers;	// 16 = 0x10
    NSMutableDictionary *_lastStatusObservations;	// 24 = 0x18
    NSMutableDictionary *_connectionIdentifiers;	// 32 = 0x20
}

+ (id)shared;	// IMP=0x00100000000161d7
- (void).cxx_destruct;	// IMP=0x00000000000178b0
- (void)languageStatusChangedForType:(unsigned long long)arg1 progress:(_Bool)arg2 observations:(id)arg3;	// IMP=0x0000000000017893
- (void)_cancelWithConnectionIdentifier:(id)arg1 observationType:(unsigned long long)arg2 useDedicatedMachPort:(_Bool)arg3;	// IMP=0x0000000000017515
- (void)_startWithConnectionIdentifier:(id)arg1 observationType:(unsigned long long)arg2 useDedicatedMachPort:(_Bool)arg3;	// IMP=0x0000000000017060
- (void)_reconnectIfStreamingWithConnectionIdentifier:(id)arg1 observationType:(unsigned long long)arg2 useDedicatedMachPort:(_Bool)arg3;	// IMP=0x0000000000016e95
- (void)_multicastObservations:(id)arg1 observationType:(unsigned long long)arg2 progress:(_Bool)arg3;	// IMP=0x0000000000016b03
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000168d0
- (void)addObserver:(id)arg1;	// IMP=0x00000000000165a3
- (void)_removeAllObservers;	// IMP=0x0000000000016376
- (void)dealloc;	// IMP=0x00000000000162f3
- (id)init;	// IMP=0x000000000001622c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

