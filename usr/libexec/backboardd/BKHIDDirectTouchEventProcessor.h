//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayController, BKIOHIDService, BKIOHIDServicePersistentPropertyController, BKIOHIDServiceSimplePersistentPropertySupport, BKTouchEventServer, BSContinuousMachTimer, BSProcessDeathWatcher, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol BKHIDEventHitTestDispatcher, BSInvalidatable, OS_dispatch_queue;

@interface BKHIDDirectTouchEventProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BKTouchEventServer *_touchEventServer;	// 16 = 0x10
    id <BKHIDEventHitTestDispatcher> _dispatcher;	// 24 = 0x18
    BKIOHIDServicePersistentPropertyController *_persistentPropertyController;	// 32 = 0x20
    NSArray *_matchers;	// 40 = 0x28
    BKIOHIDServiceSimplePersistentPropertySupport *_pencilOpaqueTouchPersistentPropertySupport;	// 48 = 0x30
    BKIOHIDService *_queue_mainDisplayDigitizerService;	// 56 = 0x38
    BKIOHIDService *_queue_mainDisplayAOPDigitizerService;	// 64 = 0x40
    BKIOHIDService *_queue_mainDisplayPencilDigitizerService;	// 72 = 0x48
    double _queue_startMainDisplayDigitizerMatchingTime;	// 80 = 0x50
    BSContinuousMachTimer *_queue_mainDisplayDigitizerSentinelTimer;	// 88 = 0x58
    long long _queue_interfaceOrientation;	// 96 = 0x60
    long long _queue_activeModifiers;	// 104 = 0x68
    id <BSInvalidatable> _globalKeyboardObserver;	// 112 = 0x70
    NSMutableDictionary *_queue_perDisplayInfo;	// 120 = 0x78
    NSMutableDictionary *_queue_referenceToTouchStreamClient;	// 128 = 0x80
    unsigned int _queue_previousVendedTouchStreamReference;	// 136 = 0x88
    NSMutableDictionary *_queue_slotIDToSlotRecord;	// 144 = 0x90
    NSMutableOrderedSet *_queue_touchEnterSlotIDs;	// 152 = 0x98
    BSProcessDeathWatcher *_queue_zoomDeathWatcher;	// 160 = 0xa0
    NSArray *_queue_zoomExcludedContextIDs;	// 168 = 0xa8
    long long _queue_zoomExcludedContextsSeed;	// 176 = 0xb0
    struct os_unfair_lock_s _lock;	// 184 = 0xb8
    _Bool _lock_shouldIgnoreTouchesWhileObjectInProximity;	// 188 = 0xbc
    BKDisplayController *_defaultDisplayController;	// 192 = 0xc0
}

+ (id)digitizerMatchingDictionaries;	// IMP=0x0020000000043972
- (void).cxx_destruct;	// IMP=0x002000000003e037
- (id)_queue_servicesMatchingSenderDescriptor:(id)arg1;	// IMP=0x001000000003dca0
- (void)_queue_addServicesMatchingSenderDescriptor:(id)arg1 inPerDisplayInfo:(id)arg2 toArray:(id)arg3;	// IMP=0x001000000003da80
- (id)_determineServiceForEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 fromTouchPad:(_Bool *)arg3;	// IMP=0x001000000003d71b
- (void)_handleDirectTouchEvent:(struct __IOHIDEvent *)arg1 service:(id)arg2;	// IMP=0x001000000003d516
- (id)_queue_contextIDsToIgnoreForZoomSenders;	// IMP=0x001000000003d4f2
- (id)_queue_slotRecordForSlotID:(unsigned int)arg1;	// IMP=0x001000000003d45b
- (_Bool)_queue_hasTouchEnterSlots;	// IMP=0x001000000003d43b
- (id)_queue_applyCachedPropertiesToMultitouchService:(id)arg1;	// IMP=0x001000000003d14f
- (id)_queue_touchStreamClientForReference:(unsigned int)arg1;	// IMP=0x001000000003d0c1
- (unsigned int)_queue_addTouchStreamClient:(id)arg1 toDisplayUUID:(id)arg2 versionedPID:(long long)arg3;	// IMP=0x001000000003ccda
- (id)_queue_touchStreamInfoForDisplayUUID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x001000000003cb9c
- (id)_queue_digitizerStateForService:(id)arg1;	// IMP=0x001000000003ca7c
- (id)_queue_addDigitizerStateForService:(id)arg1;	// IMP=0x001000000003bfd3
- (id)_queue_displayInfoForDisplay:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x001000000003be15
- (void)globalKeyboardModifiersDidChange:(long long)arg1;	// IMP=0x001000000003bdc6
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000003ba6f
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000003b3db
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000003b0a9
- (long long)setPersistentProperties:(id)arg1 forServicesMatchingDescriptor:(id)arg2;	// IMP=0x001000000003ab26
- (id)_persistentPropertyKeyDenylist;	// IMP=0x001000000003aaf6
- (_Bool)handlesPersistentPropertiesForSenderDescriptor:(id)arg1;	// IMP=0x001000000003a86b
- (void)_queue_enumerateTouchStreamsForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a7fe
- (void)_queue_enumerateDigitizersForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a791
- (void)_queue_enumerateDigitizersForDisplay:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a591
- (void)_queue_windowServerDidDeleteSlotID:(unsigned int)arg1;	// IMP=0x001000000003a454
- (void)applyExtendedHitTestInformationForCAScreenCoordinates:(struct CGPoint)arg1 displayUUID:(id)arg2 toPathAttributes:(id)arg3 secureName:(unsigned int)arg4 excludeContextIDs:(id)arg5;	// IMP=0x001000000003a3b1
- (void)_queue_resetTouchAuthenticationInitialSampleEvent;	// IMP=0x001000000003a1ab
- (void)addTouchAuthenticationSpecifications:(id)arg1 registrantEntitled:(_Bool)arg2;	// IMP=0x001000000003a158
- (id)authenticationSpecificationForSlotID:(unsigned int)arg1 registrantEntitled:(out _Bool *)arg2;	// IMP=0x001000000003a087
- (void)setBuiltInDisplayInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000039eff
- (void)setExcludedZoomContextIDs:(id)arg1 fromVersionedPID:(long long)arg2;	// IMP=0x0010000000039eab
@property(nonatomic) _Bool shouldIgnoreTouchesWhileObjectInProximity;
- (void)postTouchAnnotations:(id)arg1 sourcePID:(int)arg2;	// IMP=0x0010000000039df3
- (void)setOffset:(struct CGPoint)arg1 forTouchesWithUserIdentifier:(unsigned int)arg2;	// IMP=0x0010000000039d3c
- (void)setRoutingPolicy:(id)arg1 forTouchesWithUserIdentifier:(unsigned int)arg2;	// IMP=0x0010000000039c8a
- (_Bool)detachTouchIdentifiers:(unsigned int *)arg1 count:(long long)arg2 assignUserIdentifier:(unsigned int)arg3 policy:(id)arg4 offset:(struct CGPoint)arg5;	// IMP=0x0010000000039bd8
- (void)transferTouchIdentifiers:(unsigned int *)arg1 count:(long long)arg2 toContextID:(unsigned int)arg3;	// IMP=0x0010000000039b80
- (void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 forTouchStreamIdentifier:(unsigned int)arg4;	// IMP=0x0010000000039aca
- (void)invalidateTouchStreamReference:(unsigned int)arg1;	// IMP=0x0010000000039a7c
- (unsigned int)addTouchStreamForContextID:(unsigned int)arg1 display:(id)arg2 versionedPID:(long long)arg3 identifier:(unsigned int)arg4 shouldSendAmbiguityRecommendations:(_Bool)arg5;	// IMP=0x00100000000399d3
- (void)setHitTestRegions:(id)arg1 forDisplay:(id)arg2;	// IMP=0x001000000003997f
- (id)cancelAndSuppressTouchesOnDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000397ae
- (void)cancelTouchesOnAllDisplays;	// IMP=0x00100000000396bd
- (void)cancelTouchesOnMainDisplay;	// IMP=0x00100000000396a9
- (void)cancelTouchesOnDisplay:(id)arg1;	// IMP=0x0010000000039510
- (void)cancelTouchesWithIdentifiers:(id)arg1;	// IMP=0x00100000000393c7
@property(readonly, retain) BKIOHIDService *mainDisplayPencilDigitizerService;
@property(readonly, retain) BKIOHIDService *mainDisplayAOPDigitizerService;
@property(readonly, retain) BKIOHIDService *mainDisplayDigitizerService;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000003910d
- (void)didInitializeRegistryWithContext:(id)arg1;	// IMP=0x0010000000039058
- (void)dealloc;	// IMP=0x0010000000038fe1
- (id)initWithContext:(id)arg1;	// IMP=0x00100000000385df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

