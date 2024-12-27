//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDirectTouchPerDisplayInfo, BKDirectTouchStateHitTester, BKDirectTouchUpdateEvents, BKHIDDirectTouchEventProcessor, BKIOHIDService, BKTouchAnnotationController, BKTouchContactSet, BKTouchDeliveryObservationManager, BKTouchDeliveryPolicyServer, BSCompoundAssertion, BSMutableIntegerMap, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol BKHIDEventHitTestDispatcher, BKHIDSystemInterfacing;

@interface BKDirectTouchState : NSObject
{
    BKIOHIDService *_service;	// 8 = 0x8
    BKHIDDirectTouchEventProcessor *_eventProcessor;	// 16 = 0x10
    BKDirectTouchStateHitTester *_hitTester;	// 24 = 0x18
    BSCompoundAssertion *_suppressTouchesAssertion;	// 32 = 0x20
    BKDirectTouchPerDisplayInfo *_displayInfo;	// 40 = 0x28
    id <BKHIDEventHitTestDispatcher> _dispatcher;	// 48 = 0x30
    BKTouchDeliveryPolicyServer *_touchDeliveryPolicyServer;	// 56 = 0x38
    BKTouchDeliveryObservationManager *_touchDeliveryObservationManager;	// 64 = 0x40
    NSMutableArray *_touchLifecycleObservers;	// 72 = 0x48
    BKTouchAnnotationController *_annotationController;	// 80 = 0x50
    id <BKHIDSystemInterfacing> _eventSystemInterface;	// 88 = 0x58
    double _initialTouchTimestamp;	// 96 = 0x60
    long long _activeModifiers;	// 104 = 0x68
    BKTouchContactSet *_contacts;	// 112 = 0x70
    BSMutableIntegerMap *_destinationsByContextID;	// 120 = 0x78
    BSMutableIntegerMap *_contactsByContextID;	// 128 = 0x80
    BSMutableIntegerMap *_centroidPerUserIdentifier;	// 136 = 0x88
    NSMutableSet *_latentSystemGestureDestinations;	// 144 = 0x90
    long long _interfaceOrientation;	// 152 = 0x98
    double _lastSystemGestureTouchTimestamp;	// 160 = 0xa0
    double _initialTouchStreamTouchTimestamp;	// 168 = 0xa8
    NSArray *_hitTestRegions;	// 176 = 0xb0
    BKDirectTouchUpdateEvents *_updateEvents;	// 184 = 0xb8
    double _maximumPositionZ;	// 192 = 0xc0
    float;	// 200 = 0xc8
    _Bool _determinedMaxForce;	// 204 = 0xcc
    _Bool _supportsPreciseLocations;	// 205 = 0xcd
    _Bool _displayIntegrated;	// 206 = 0xce
    _Bool _builtIn;	// 207 = 0xcf
    _Bool _waitingForAllTouchesUp;	// 208 = 0xd0
    _Bool _hoverDisabled;	// 209 = 0xd1
}

- (void).cxx_destruct;	// IMP=0x002000000005e6b6
- (void)invalidate;	// IMP=0x001000000005e5a7
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000005e546
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000005e337

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

