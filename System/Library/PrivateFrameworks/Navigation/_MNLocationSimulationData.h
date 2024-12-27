//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedRoute, MNActiveRouteInfo, MNLocation, NSString;

__attribute__((visibility("hidden")))
@interface _MNLocationSimulationData : NSObject
{
    _Bool _isChinaShifted;	// 8 = 0x8
    _Bool _endAtFinalDestination;	// 9 = 0x9
    long long _simulationType;	// 16 = 0x10
    MNActiveRouteInfo *_routeInfo;	// 24 = 0x18
    MNActiveRouteInfo *_initialRouteInfo;	// 32 = 0x20
    MNLocation *_lastLocation;	// 40 = 0x28
    CDStruct_3f2a7a20 _lastRouteCoordinate;	// 48 = 0x30
    double _currentTime;	// 56 = 0x38
    unsigned long long _currentLegIndex;	// 64 = 0x40
    GEOApplicationAuditToken *_auditToken;	// 72 = 0x48
    NSString *_requestingAppIdentifier;	// 80 = 0x50
    double _speedOverride;	// 88 = 0x58
    double _speedMultiplier;	// 96 = 0x60
    double _minimumSpeed;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000096fbf
@property(nonatomic) _Bool endAtFinalDestination; // @synthesize endAtFinalDestination=_endAtFinalDestination;
@property(nonatomic) double minimumSpeed; // @synthesize minimumSpeed=_minimumSpeed;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(nonatomic) double speedOverride; // @synthesize speedOverride=_speedOverride;
@property(retain, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) _Bool isChinaShifted; // @synthesize isChinaShifted=_isChinaShifted;
@property(nonatomic) unsigned long long currentLegIndex; // @synthesize currentLegIndex=_currentLegIndex;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) CDStruct_3f2a7a20 lastRouteCoordinate; // @synthesize lastRouteCoordinate=_lastRouteCoordinate;
@property(retain, nonatomic) MNLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) MNActiveRouteInfo *initialRouteInfo; // @synthesize initialRouteInfo=_initialRouteInfo;
@property(retain, nonatomic) MNActiveRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property(nonatomic) long long simulationType; // @synthesize simulationType=_simulationType;
@property(readonly, nonatomic) GEOComposedRoute *routeToFollow;

@end

