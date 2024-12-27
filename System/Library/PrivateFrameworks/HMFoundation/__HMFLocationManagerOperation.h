//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFOperation.h"

@class CLLocationManager, HMFLocationAuthorization, NSString;

__attribute__((visibility("hidden")))
@interface __HMFLocationManagerOperation : HMFOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _registeredForKVO;	// 12 = 0xc
    _Bool _ready;	// 13 = 0xd
    CLLocationManager *_manager;	// 16 = 0x10
    HMFLocationAuthorization *_authorization;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000000764f2
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000075e64
+ (void)initialize;	// IMP=0x0010000000075dbd
- (void).cxx_destruct;	// IMP=0x000000000007656f
@property(readonly) HMFLocationAuthorization *authorization; // @synthesize authorization=_authorization;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007625e
- (void)main;	// IMP=0x000000000007624c
- (_Bool)isReady;	// IMP=0x00000000000761dd
@property(readonly) CLLocationManager *manager; // @synthesize manager=_manager;
- (void)unregisterFromKVO;	// IMP=0x00000000000760f9
- (void)dealloc;	// IMP=0x00000000000760bb
- (id)initWithAuthorization:(id)arg1;	// IMP=0x0000000000076031
- (id)initWithTimeout:(double)arg1;	// IMP=0x0000000000075f19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

