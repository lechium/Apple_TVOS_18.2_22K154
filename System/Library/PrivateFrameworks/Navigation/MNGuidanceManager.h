//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGuidanceEvent, GEOComposedRoute, MNAnnouncementEngine, MNAnnouncementPlanEvent, MNAudioManager, MNGuidanceSignInfo, MNJunctionViewImageLoader, MNLocation, MNNavigationSessionState, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceManager : NSObject
{
    MNAudioManager *_audioManager;	// 8 = 0x8
    MNAnnouncementEngine *_announcementEngine;	// 16 = 0x10
    NSMutableDictionary *_announcementsSpoken;	// 24 = 0x18
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;	// 32 = 0x20
    NSMutableDictionary *_specialSpokenEvents;	// 40 = 0x28
    NSMutableDictionary *_specialSignEvents;	// 48 = 0x30
    NSMutableDictionary *_specialNavTrayEvents;	// 56 = 0x38
    NSMutableDictionary *_specialAREvents;	// 64 = 0x40
    NSMutableArray *_events;	// 72 = 0x48
    NSDictionary *_eventIndexes;	// 80 = 0x50
    GEOComposedGuidanceEvent *_nextEvent;	// 88 = 0x58
    _Bool _hasBeenOnRouteOnce;	// 96 = 0x60
    _Bool _canSpeakReturnToRouteAnnouncement;	// 97 = 0x61
    double _timeLastAnnouncementStarted;	// 104 = 0x68
    double _timeLastAnnouncementEnded;	// 112 = 0x70
    _Bool _hasPersistentEvents;	// 120 = 0x78
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;	// 128 = 0x80
    NSMutableDictionary *_hapticsTriggered;	// 136 = 0x88
    MNGuidanceSignInfo *_signInfo;	// 144 = 0x90
    NSArray *_arEvents;	// 152 = 0x98
    NSArray *_previousSignEvents;	// 160 = 0xa0
    GEOComposedGuidanceEvent *_activeNavTrayGuidanceEvent;	// 168 = 0xa8
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;	// 176 = 0xb0
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;	// 184 = 0xb8
    MNJunctionViewImageLoader *_junctionViewImageLoader;	// 192 = 0xc0
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;	// 200 = 0xc8
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;	// 208 = 0xd0
    MNLocation *_location;	// 216 = 0xd8
    double _speed;	// 224 = 0xe0
    NSMutableArray *_validEvents;	// 232 = 0xe8
    NSMutableDictionary *_feedback;	// 240 = 0xf0
    _Bool _isInPreArrivalState;	// 248 = 0xf8
    _Bool _shouldShowChargingInfo;	// 249 = 0xf9
    id <MNGuidanceManagerDelegate> _delegate;	// 256 = 0x100
    MNNavigationSessionState *_navigationSessionState;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x000000000007b743
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) _Bool shouldShowChargingInfo; // @synthesize shouldShowChargingInfo=_shouldShowChargingInfo;
@property(nonatomic) _Bool isInPreArrivalState; // @synthesize isInPreArrivalState=_isInPreArrivalState;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timeManagerDidChangeProvider:(id)arg1;	// IMP=0x000000000007b67b
- (unsigned long long)_trafficColorForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x000000000007b4ab
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;	// IMP=0x000000000007aa15
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;	// IMP=0x000000000007a751
- (double)_distanceToEndOfRoute;	// IMP=0x000000000007a6ed
- (double)_distanceToManeuverStart;	// IMP=0x000000000007a659
- (double)_distanceToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x000000000007a5be
- (double)_timeUntilEventTrigger:(id)arg1;	// IMP=0x000000000007a4a5
- (double)timeUntilNextAnnouncement;	// IMP=0x000000000007a477
- (double)timeSinceLastAnnouncement;	// IMP=0x000000000007a44e
- (double)_timeRemainingForEvent:(id)arg1;	// IMP=0x000000000007a3a9
- (int)_indexForEventUUID:(id)arg1;	// IMP=0x000000000007a1cf
- (_Bool)_isEVChargingEvent:(id)arg1;	// IMP=0x000000000007a0d6
- (_Bool)_isValidEvent:(id)arg1;	// IMP=0x0000000000079daa
- (double)_adjustedVehicleSpeed;	// IMP=0x0000000000079d2b
- (void)_markEventSpoken:(id)arg1;	// IMP=0x0000000000079c25
- (_Bool)_eventWasSpoken:(id)arg1;	// IMP=0x0000000000079b47
- (id)_specialSpokenEvents:(int)arg1 forLegIndex:(unsigned long long)arg2;	// IMP=0x00000000000799e0
- (_Bool)_isInArrivalState;	// IMP=0x000000000007994f
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x0000000000079936
- (id)_junctionViewEvents;	// IMP=0x0000000000079762
- (void)_handleJunctionViewInfo:(id)arg1;	// IMP=0x0000000000079415
- (id)_nextJunctionViewGuidanceEvent;	// IMP=0x00000000000792a2
- (void)_considerJunctionViewGuidance;	// IMP=0x0000000000078d0b
- (_Bool)_hasPersistentEvents;	// IMP=0x0000000000078bcd
- (void)_considerPersistence;	// IMP=0x0000000000078b76
- (void)_considerNavTrayGuidance;	// IMP=0x000000000007890d
- (double)_headingForArEvent:(id)arg1;	// IMP=0x0000000000078606
- (int)_maneuverTypeForAREvent:(id)arg1;	// IMP=0x00000000000783dc
- (id)_specialAREvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x000000000007831e
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)arg1;	// IMP=0x000000000007804c
- (id)_closestContinueAREventToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x0000000000077e7c
- (id)_validEventsForARGuidance;	// IMP=0x00000000000775e0
- (id)_createArGuidanceInfosForEvent:(id)arg1 forStep:(id)arg2;	// IMP=0x0000000000076114
- (void)_considerARGuidance;	// IMP=0x0000000000075d56
- (_Bool)_updateDisplayStringArgument:(id)arg1 event:(id)arg2;	// IMP=0x0000000000075927
- (id)_evaluatedStringsForEvent:(id)arg1 signStrings:(id)arg2 shouldUpdateFormatStrings:(_Bool)arg3 argumentHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007549a
- (id)_signForGuidanceEvent:(id)arg1 isPrimary:(_Bool)arg2 shouldOverridePrimaryDistances:(_Bool)arg3 distance:(out double *)arg4;	// IMP=0x0000000000074b27
- (id)_sortedSignEventsFromValidSignEvents:(id)arg1;	// IMP=0x00000000000748c7
- (id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x0000000000074760
- (id)_validEventsForSignGuidance:(out _Bool *)arg1;	// IMP=0x0000000000074201
- (void)_considerSignGuidance;	// IMP=0x0000000000073d7f
- (id)_nextLaneGuidanceEvent;	// IMP=0x0000000000073bdd
- (void)_considerLaneGuidance;	// IMP=0x000000000007358f
- (void)_considerHaptics;	// IMP=0x0000000000073239
- (id)_durationsForEvent:(id)arg1;	// IMP=0x0000000000073025
- (id)_serverStringDictionaryForChargingEvent:(id)arg1;	// IMP=0x0000000000072e70
- (id)_serverStringDictionaryForEvent:(id)arg1 distance:(double)arg2 validDistance:(double)arg3 spoken:(_Bool)arg4 waypoints:(id)arg5;	// IMP=0x0000000000072d21
- (_Bool)_updateSpokenStringArgument:(id)arg1 event:(id)arg2;	// IMP=0x000000000007250e
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 selectedVariantIndex:(out unsigned long long *)arg3;	// IMP=0x0000000000071e9d
- (id)_spokenStringForEvent:(id)arg1 waypointCategory:(int)arg2;	// IMP=0x0000000000071ac9
- (unsigned long long)_announcementStageForEvent:(id)arg1;	// IMP=0x0000000000071a6e
- (void)_notifySpeechEvent:(id)arg1 waypointCategory:(int)arg2 startingVariantIndex:(unsigned long long)arg3;	// IMP=0x00000000000711a2
- (id)_spokenEventsRemainingInStep;	// IMP=0x0000000000070db8
- (void)_planAnnouncements;	// IMP=0x000000000007018b
- (_Bool)_considerOtherSpecialAnnouncements;	// IMP=0x0000000000070050
- (_Bool)_considerArrivalAnnouncements;	// IMP=0x000000000006fef1
- (_Bool)_considerChargingAnnouncements;	// IMP=0x000000000006fcad
- (_Bool)_considerGetOnRouteAnnouncements;	// IMP=0x000000000006fb3f
- (_Bool)_considerStartingAnnouncements;	// IMP=0x000000000006fa18
- (void)_considerAnnouncements;	// IMP=0x000000000006f811
- (id)_specialNavTrayEvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x000000000006f753
- (void)_filterValidEvents;	// IMP=0x000000000006f5b2
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;	// IMP=0x000000000006f394
- (void)updateSessionStateForReroute:(id)arg1 reason:(unsigned long long)arg2 location:(id)arg3;	// IMP=0x000000000006edda
- (void)updateDestination:(id)arg1;	// IMP=0x000000000006ed46
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;	// IMP=0x000000000006e9fa
- (void)stop;	// IMP=0x000000000006e966
@property(readonly, nonatomic) unsigned long long currentLegIndex;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) NSArray *events;
- (void)_resetLastAnnouncementTime;	// IMP=0x000000000006e55d
- (void)reset;	// IMP=0x000000000006e0b7
- (void)dealloc;	// IMP=0x000000000006e042
- (void)_initSpecialGuidanceEventsForRoute:(id)arg1;	// IMP=0x000000000006db24
- (id)initWithNavigationSessionState:(id)arg1 audioManager:(id)arg2 isReconnecting:(_Bool)arg3 announcementsToIgnore:(id)arg4;	// IMP=0x000000000006d5cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

