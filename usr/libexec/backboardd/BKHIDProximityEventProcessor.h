//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKHIDDomainServiceServer, BKSProximityDetectionMaskChangeEvent, BSMutableIntegerMap, NSMutableSet, NSString;
@protocol BKHIDEventDispatcher, BKHIDEventSenderInfo, BSInvalidatable;

@interface BKHIDProximityEventProcessor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BKSProximityDetectionMaskChangeEvent *_lock_lastEvent;	// 16 = 0x10
    _Bool _lock_shouldSuppressTouchesWhileObjectWithinProximity;	// 24 = 0x18
    _Bool _objectWithinProximity;	// 25 = 0x19
    _Bool _proximityDetectionActive;	// 26 = 0x1a
    int _detectionMode;	// 28 = 0x1c
    unsigned int _rawDetectionMask;	// 32 = 0x20
    unsigned int _modeDetectionMask;	// 36 = 0x24
    BSMutableIntegerMap *_eventClients;	// 40 = 0x28
    BKHIDDomainServiceServer *_server;	// 48 = 0x30
    NSMutableSet *_observingProximityConnections;	// 56 = 0x38
    id <BKHIDEventSenderInfo> _lastProximitySender;	// 64 = 0x40
    id <BKHIDEventDispatcher> _lastProximityDispatcher;	// 72 = 0x48
    id <BSInvalidatable> _sensorModeChangeObserverToken;	// 80 = 0x50
    id <BSInvalidatable> _suppressTouchesAssertion;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000002bfa3
- (void)connectionDidTerminate:(id)arg1 process:(id)arg2;	// IMP=0x001000000002bf4f
- (id)setObservesProximitySensorDetectionMaskChanges:(id)arg1;	// IMP=0x001000000002bdce
- (void)_lock_postSyntheticEventWithDetectionMaskToClients:(unsigned int)arg1;	// IMP=0x001000000002b863
- (void)_locked_setObjectWithinProximity:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x001000000002b7d5
- (void)_locked_updateTouchSuppressionAssertion;	// IMP=0x001000000002b6b5
- (void)_locked_postEventWithDetectionMask:(unsigned int)arg1 toDestinations:(id)arg2 dispatcher:(id)arg3 reason:(id)arg4;	// IMP=0x001000000002b389
- (void)_lock_postDetectionMaskChangeToObservers;	// IMP=0x001000000002b119
- (void)_locked_notifyIfNeededCurrentDetectionMaskChangeWithTimstamp:(unsigned long long)arg1;	// IMP=0x001000000002b033
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000002aa44
@property(nonatomic) _Bool shouldSuppressTouchesWhileObjectWithinProximity;
@property(readonly, nonatomic, getter=isProximityDetectionActive) _Bool proximityDetectionActive;
@property(readonly, nonatomic, getter=isObjectWithinProximity) _Bool objectWithinProximity;
- (void)dealloc;	// IMP=0x001000000002a949
- (id)initWithContext:(id)arg1;	// IMP=0x001000000002a81e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

