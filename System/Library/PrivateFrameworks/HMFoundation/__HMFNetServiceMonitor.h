//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFNetMonitor.h"

@class HMFNetService;

__attribute__((visibility("hidden")))
@interface __HMFNetServiceMonitor : HMFNetMonitor
{
    HMFNetService *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006f27b
@property(readonly) HMFNetService *service; // @synthesize service=_service;
- (id)logIdentifier;	// IMP=0x000000000006f248
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000006f0d8
- (unsigned long long)reachabilityPath;	// IMP=0x000000000006f0bf
- (id)netAddress;	// IMP=0x000000000006f064
- (void)dealloc;	// IMP=0x000000000006efea
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000006ef17
- (id)initWithNetAddress:(id)arg1;	// IMP=0x000000000006ee63

@end

