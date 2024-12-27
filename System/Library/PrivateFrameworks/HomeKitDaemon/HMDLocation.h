//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSHashTable, NSMapTable, NSObject, NSString;
@protocol HMDCLLocationManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLocation : HMFObject
{
    _Bool _currentLocationSimulated;	// 8 = 0x8
    _Bool _beingConfigured;	// 9 = 0x9
    int _authStatus;	// 12 = 0xc
    long long _locationAuthorized;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 24 = 0x18
    NSHashTable *_singleLocationDelegates;	// 32 = 0x20
    NSMapTable *_regionStateDelegatesByRegionIdentifier;	// 40 = 0x28
    NSMapTable *_pendingRegionMonitoringRequests;	// 48 = 0x30
    NSMapTable *_pendingRegionCallbacks;	// 56 = 0x38
    NSMapTable *_regionStates;	// 64 = 0x40
    long long _totalLocationObservingClients;	// 72 = 0x48
    id <HMDCLLocationManager> _locationManager;	// 80 = 0x50
}

+ (void)timeZoneISOCountryCodeForCLLocationAsync:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a0d69f
+ (_Bool)isAccurateLocation:(id)arg1;	// IMP=0x0010000000a0d63d
+ (id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2;	// IMP=0x0010000000a0d531
+ (id)sunsetTimeForLocation:(id)arg1;	// IMP=0x0010000000a0d3f5
+ (id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2;	// IMP=0x0010000000a0d2e9
+ (id)sunriseTimeForLocation:(id)arg1;	// IMP=0x0010000000a0d1ad
+ (id)findEvent:(id)arg1 withGeo:(id)arg2;	// IMP=0x0010000000a0ce45
+ (id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2;	// IMP=0x0010000000a0cd9b
+ (id)_getAlmanacWithLocation:(id)arg1;	// IMP=0x0010000000a0cd05
+ (id)logCategory;	// IMP=0x0010000000a0ccd5
+ (id)bundleForLocationManager;	// IMP=0x0010000000a0ccb5
+ (id)sharedManager;	// IMP=0x0010000000a0cc52
- (void).cxx_destruct;	// IMP=0x0000000000a09c88
@property(readonly, nonatomic) id <HMDCLLocationManager> locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) long long totalLocationObservingClients; // @synthesize totalLocationObservingClients=_totalLocationObservingClients;
@property(nonatomic) _Bool beingConfigured; // @synthesize beingConfigured=_beingConfigured;
@property(readonly, nonatomic) NSMapTable *regionStates; // @synthesize regionStates=_regionStates;
@property(readonly, nonatomic) NSMapTable *pendingRegionCallbacks; // @synthesize pendingRegionCallbacks=_pendingRegionCallbacks;
@property(readonly, nonatomic) NSMapTable *pendingRegionMonitoringRequests; // @synthesize pendingRegionMonitoringRequests=_pendingRegionMonitoringRequests;
@property(readonly, nonatomic) NSMapTable *regionStateDelegatesByRegionIdentifier; // @synthesize regionStateDelegatesByRegionIdentifier=_regionStateDelegatesByRegionIdentifier;
@property(readonly, nonatomic) NSHashTable *singleLocationDelegates; // @synthesize singleLocationDelegates=_singleLocationDelegates;
@property(nonatomic) int authStatus; // @synthesize authStatus=_authStatus;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(nonatomic) long long locationAuthorized; // @synthesize locationAuthorized=_locationAuthorized;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;	// IMP=0x0000000000a09ad5
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x0000000000a0998c
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x0000000000a09843
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x0000000000a096d1
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000000a0953a
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000a093c7
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000a09234
- (void)_handleDeterminedState:(long long)arg1 forRegion:(id)arg2;	// IMP=0x0000000000a08fe7
- (void)beingConfigured:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a08f30
- (void)_updateExitForRegion:(id)arg1;	// IMP=0x0000000000a08c5e
- (void)_updateEntryForRegion:(id)arg1;	// IMP=0x0000000000a0898c
- (void)_updateRegionState:(long long)arg1 forRegion:(id)arg2;	// IMP=0x0000000000a08643
- (id)_delegateforRegion:(id)arg1;	// IMP=0x0000000000a08413
- (void)_updateWithLocationAuthorizationStatus:(int)arg1;	// IMP=0x0000000000a081c9
- (void)_notifySingleLocationDelegate:(id)arg1 withLocation:(id)arg2;	// IMP=0x0000000000a08122
- (void)_notifySingleLocationDelegatesWithLocation:(id)arg1;	// IMP=0x0000000000a07f68
- (void)deregisterForRegionUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a07e8a
- (void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a07d7d
- (id)getCurrentLocation;	// IMP=0x0000000000a07d2d
- (void)_extractSingleLocationForDelegate:(id)arg1;	// IMP=0x0000000000a078fd
- (_Bool)_canLocationBeExtracted;	// IMP=0x0000000000a07688
- (void)startExtractingSingleLocationForDelegate:(id)arg1;	// IMP=0x0000000000a075d0
- (void)stopUpdatingLocation;	// IMP=0x0000000000a0755f
- (void)startUpdatingLocation;	// IMP=0x0000000000a074ee
@property(readonly, nonatomic, getter=isCurrentLocationSimulated) _Bool currentLocationSimulated; // @synthesize currentLocationSimulated=_currentLocationSimulated;
- (void)dealloc;	// IMP=0x0000000000a0743f
- (id)initWithLocationManager:(id)arg1 handlerQueue:(id)arg2;	// IMP=0x0000000000a07269
- (id)init;	// IMP=0x0000000000a07187

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

