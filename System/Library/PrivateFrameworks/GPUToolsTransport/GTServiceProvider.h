//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTObservableService, NSMutableDictionary;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface GTServiceProvider : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSMutableDictionary *_services;	// 16 = 0x10
    unsigned long long _nextServiceID;	// 24 = 0x18
    NSMutableDictionary *_waiting;	// 32 = 0x20
    GTObservableService *_observers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002bf32
- (void)notifyServiceListChanged:(id)arg1;	// IMP=0x000000000002be84
- (void)disconnectServicePorts:(id)arg1;	// IMP=0x000000000002bb7b
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;	// IMP=0x000000000002bb65
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x000000000002bb4f
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x000000000002bb39
- (void)deregisterService:(unsigned long long)arg1;	// IMP=0x000000000002ba8b
- (_Bool)waitForService:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002b8eb
- (void)waitForService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b4f0
- (id)allServices;	// IMP=0x000000000002b4da
- (void)registerService:(id)arg1 forProcess:(id)arg2;	// IMP=0x000000000002b4b5
- (void)registerDefaultServiceProvider:(id)arg1 forProcess:(id)arg2;	// IMP=0x000000000002b4a0
- (void)_registerService:(id)arg1 forProcess:(id)arg2 forPort:(unsigned long long)arg3;	// IMP=0x000000000002b078
- (id)init;	// IMP=0x000000000002afc6

@end

