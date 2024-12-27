//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class MKLocationManager, NSDate, NSError;

@protocol MKLocationManagerObserver <NSObject>
- (void)locationManager:(MKLocationManager *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManager:(MKLocationManager *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManagerDidResumeLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(MKLocationManager *)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(MKLocationManager *)arg1;
- (void)locationManagerDidReset:(MKLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MKLocationManager *)arg1 withError:(NSError *)arg2;
- (void)locationManagerUpdatedLocation:(MKLocationManager *)arg1;
@end

