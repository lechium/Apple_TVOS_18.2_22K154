//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker
{
    GEOTransitRouteMatcher *_transitRouteMatcher;	// 8 = 0x8
    GEORoadMatcher *_roadMatcher;	// 16 = 0x10
    NSDate *_lastLocationTimestamp;	// 24 = 0x18
    NSDate *_lastAccurateLocationDate;	// 32 = 0x20
    MNLocation *_lastMatchedLocation;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    _Bool _hasArrived;	// 56 = 0x38
    _Bool _debugSnapToTransitLines;	// 57 = 0x39
    NSMutableDictionary *_monitoredRegions;	// 64 = 0x40
    NSMutableDictionary *_transitRegions;	// 72 = 0x48
    NSMutableDictionary *_transitAlerts;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000dc3c7
@property(nonatomic) _Bool debugSnapToTransitLines; // @synthesize debugSnapToTransitLines=_debugSnapToTransitLines;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000dc28b
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x00000000000dc043
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x00000000000dbdfb
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dbdf5
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dbdef
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000dbde9
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dbde3
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dbddb
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00000000000dbdd5
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000dbdcf
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00000000000dbdc9
- (void)_triggerAlertForRegionId:(id)arg1;	// IMP=0x00000000000db850
- (id)_stepForRegionAlert:(id)arg1;	// IMP=0x00000000000db6a9
- (void)_stopMonitoringForRegionWithIdentifier:(id)arg1;	// IMP=0x00000000000db55f
- (void)_stopMonitoringAllRegions;	// IMP=0x00000000000db3f8
- (id)_clRegionWithCenter:(id)arg1 identifier:(id)arg2 signalStrength:(int)arg3;	// IMP=0x00000000000db2b1
- (void)_startMonitoringTransitAlerts;	// IMP=0x00000000000daea4
- (_Bool)_isInaccurateLocation:(id)arg1;	// IMP=0x00000000000dae7d
- (double)_timeToDisplayStaleGPSLocation;	// IMP=0x00000000000dae1a
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;	// IMP=0x00000000000dac32
- (id)_locationForInaccurateLocation:(id)arg1;	// IMP=0x00000000000da78f
- (id)_correctedLocationForLocation:(id)arg1;	// IMP=0x00000000000da147
- (id)_matchedLocationForLocation:(id)arg1;	// IMP=0x00000000000d9b6a
- (void)_initRegionAlertsForRoute:(id)arg1;	// IMP=0x00000000000d93e4
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x00000000000d928f
- (void)stopTracking;	// IMP=0x00000000000d9210
- (void)startTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;	// IMP=0x00000000000d9142
- (int)transportType;	// IMP=0x00000000000d9137
- (id)initWithNavigationSession:(id)arg1;	// IMP=0x00000000000d8d26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

