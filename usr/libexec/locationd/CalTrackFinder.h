//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSMutableArray;

@interface CalTrackFinder : NSObject
{
    int _gpsSource;	// 8 = 0x8
    CDUnknownBlockType _calTrackHandler;	// 16 = 0x10
    NSMutableArray *_gpsLocationBuffer;	// 24 = 0x18
    NSMutableArray *_gpsLocationBufferFiltered;	// 32 = 0x20
    NSMutableArray *_gpsOdometerBuffer;	// 40 = 0x28
    NSMutableArray *_pedometerBuffer;	// 48 = 0x30
    NSDate *_timeStart;	// 56 = 0x38
    NSDate *_timeEnd;	// 64 = 0x40
    NSDate *_timeStartGpsLocationSegment;	// 72 = 0x48
    NSDate *_timeEndGpsLocationSegment;	// 80 = 0x50
    double _distanceGps;	// 88 = 0x58
    double _distanceRawPed;	// 96 = 0x60
    double _steps;	// 104 = 0x68
}

@property int gpsSource; // @synthesize gpsSource=_gpsSource;
@property double steps; // @synthesize steps=_steps;
@property double distanceRawPed; // @synthesize distanceRawPed=_distanceRawPed;
@property double distanceGps; // @synthesize distanceGps=_distanceGps;
@property(retain) NSDate *timeEndGpsLocationSegment; // @synthesize timeEndGpsLocationSegment=_timeEndGpsLocationSegment;
@property(retain) NSDate *timeStartGpsLocationSegment; // @synthesize timeStartGpsLocationSegment=_timeStartGpsLocationSegment;
@property(retain) NSDate *timeEnd; // @synthesize timeEnd=_timeEnd;
@property(retain) NSDate *timeStart; // @synthesize timeStart=_timeStart;
@property(retain) NSMutableArray *pedometerBuffer; // @synthesize pedometerBuffer=_pedometerBuffer;
@property(retain) NSMutableArray *gpsOdometerBuffer; // @synthesize gpsOdometerBuffer=_gpsOdometerBuffer;
@property(retain) NSMutableArray *gpsLocationBufferFiltered; // @synthesize gpsLocationBufferFiltered=_gpsLocationBufferFiltered;
@property(retain) NSMutableArray *gpsLocationBuffer; // @synthesize gpsLocationBuffer=_gpsLocationBuffer;
@property(copy) CDUnknownBlockType calTrackHandler; // @synthesize calTrackHandler=_calTrackHandler;
- (void)_clearBuffers;	// IMP=0x0010000000cbd76a
- (unsigned long long)_removeAdditionalInconsistentSpeedPedometerEntries;	// IMP=0x0010000000cbd540
- (void)_closeCurrentTrack;	// IMP=0x0010000000cbc8b8
- (void)_closeTrackCheckPedometer;	// IMP=0x0010000000cbbcc1
- (MISSING_TYPE *)_closeTrackCheckGpsOdometer;	// IMP=0x0010000000cbb26f
- (void)_closeTrackCheckGpsLocationFiltered;	// IMP=0x0010000000cbad35
- (void)_closeTrackCheckGpsLocation;	// IMP=0x0010000000cbaa9a
- (void)_calculateTimeStartEndDistanceGpsPed;	// IMP=0x0010000000cb9f95
- (double)_extremaRemovedMean:(double [5])arg1;	// IMP=0x0010000000cb9f31
- (id)_filterGpsLocationBuffer;	// IMP=0x0010000000cb98c6
- (void)updatePedometerBuffer:(struct CLExtendedStepCountEntry)arg1;	// IMP=0x0010000000cb9778
- (void)updateGpsOdometerBuffer:(struct CLOdometerEntry)arg1;	// IMP=0x0010000000cb9465
- (void)_updateGpsLocationBufferFiltered:(id)arg1;	// IMP=0x0010000000cb9383
- (void)updateGpsLocationBuffer:(id)arg1 gpsSource:(int)arg2;	// IMP=0x0010000000cb8b64
- (void)stop;	// IMP=0x0010000000cb89c0
- (void)dealloc;	// IMP=0x0010000000cb8945
- (id)init;	// IMP=0x0010000000cb86da

@end

