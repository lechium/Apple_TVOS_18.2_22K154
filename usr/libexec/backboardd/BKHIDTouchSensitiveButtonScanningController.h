//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface BKHIDTouchSensitiveButtonScanningController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BKIOHIDServiceMatcher *_serviceMatcher;	// 24 = 0x18
    NSMutableDictionary *_lock_pidToProcessDeathWatcher;	// 32 = 0x20
    NSMutableSet *_lock_services;	// 40 = 0x28
    NSMutableIndexSet *_lock_activeCameraButtonScanningPIDs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000c818
- (void)processDidTerminate:(int)arg1;	// IMP=0x001000000000c75c
- (long long)setPersistentProperties:(id)arg1 forServicesMatchingDescriptor:(id)arg2;	// IMP=0x001000000000c55b
- (_Bool)handlesPersistentPropertiesForSenderDescriptor:(id)arg1;	// IMP=0x001000000000c504
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000000c4b0
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000000c1ef
- (void)setScanningActive:(_Bool)arg1 buttonIdentifier:(long long)arg2 forPID:(int)arg3;	// IMP=0x001000000000c01a
- (id)initWithContext:(id)arg1;	// IMP=0x001000000000beda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

