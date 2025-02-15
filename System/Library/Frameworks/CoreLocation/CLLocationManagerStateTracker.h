//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLStateTracker.h"

@interface CLLocationManagerStateTracker : CLStateTracker
{
    struct _CLLocationManagerStateTrackerState _state;	// 16 = 0x10
    void *_identifier;	// 96 = 0x60
    _Bool _inTransaction;	// 104 = 0x68
}

+ (const char *)trackerStateTypeName;	// IMP=0x006000000001368f
+ (unsigned long long)trackerStateSize;	// IMP=0x0060000000013684
- (void *)identifier;	// IMP=0x000000000001369c
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;	// IMP=0x00000000000134d6
- (void)updateState:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013126
@property(nonatomic) _Bool trackRunInfoEnabled;
@property(nonatomic) _Bool isAuthorizedForWidgetUpdates;
@property(nonatomic) _Bool courtesyPromptNeeded;
@property(nonatomic) _Bool fusionInfoEnabled;
@property(nonatomic) _Bool groundAltitudeEnabled;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) _Bool updatingVehicleHeading;
@property(nonatomic) _Bool updatingVehicleSpeed;
@property(nonatomic) _Bool batchingLocation;
@property(nonatomic) _Bool allowsMapCorrection;
@property(nonatomic) _Bool showsBackgroundLocationIndicator;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool paused;
@property int pausesLocationUpdatesAutomatically;
@property(nonatomic) long long activityType;
@property(nonatomic) _Bool limitsPrecision;
@property(nonatomic) int previousAuthorizationStatus;
@property(nonatomic) _Bool previousAuthorizationStatusValid;
@property(nonatomic) _Bool dynamicAccuracyReductionEnabled;
@property(nonatomic) _Bool allowsAlteredAccessoryLocations;
@property(nonatomic) _Bool allowsLocationPrompts;
@property(nonatomic) double headingFilter;
@property(nonatomic) _Bool updatingHeading;
@property(nonatomic) _Bool requestingLocation;
@property(nonatomic) _Bool updatingLocation;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
- (void)dealloc;	// IMP=0x0000000000010b3e
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2 state:(CDUnknownBlockType)arg3;	// IMP=0x00000000000106cb
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2;	// IMP=0x00000000000106b6
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2 state:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010655
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2;	// IMP=0x0000000000010640

@end

