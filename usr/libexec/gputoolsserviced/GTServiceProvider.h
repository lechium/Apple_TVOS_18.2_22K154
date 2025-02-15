//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTObservableService, NSMutableDictionary;
@protocol OS_os_log;

@interface GTServiceProvider : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSMutableDictionary *_services;	// 16 = 0x10
    unsigned long long _nextServiceID;	// 24 = 0x18
    NSMutableDictionary *_waiting;	// 32 = 0x20
    GTObservableService *_observers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000015947
- (void)notifyServiceListChanged:(id)arg1;	// IMP=0x0010000000015899
- (void)disconnectServicePorts:(id)arg1;	// IMP=0x0010000000015590
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;	// IMP=0x001000000001557a
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x0010000000015564
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x001000000001554e
- (void)deregisterService:(unsigned long long)arg1;	// IMP=0x00100000000154a0
- (_Bool)waitForService:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015300
- (void)waitForService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014f05
- (id)allServices;	// IMP=0x0010000000014eef
- (void)registerService:(id)arg1 forProcess:(id)arg2;	// IMP=0x0010000000014eca
- (void)registerDefaultServiceProvider:(id)arg1 forProcess:(id)arg2;	// IMP=0x0010000000014eb5
- (void);	// IMP=0x0010000000014a8d
- (id)init;	// IMP=0x00100000000149db

@end

