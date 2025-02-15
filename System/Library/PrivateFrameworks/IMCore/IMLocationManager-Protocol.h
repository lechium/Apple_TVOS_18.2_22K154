//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class CLLocation, NSError, NSString;

@protocol IMLocationManager <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) CLLocation *currentLocation;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) _Bool preciseLocationAuthorized;
@property(readonly, nonatomic) _Bool locationAuthorizationDenied;
@property(readonly, nonatomic) _Bool locationAuthorizationDetermined;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(NSString *)arg1 withAuthorizedHandler:(void (^)(void))arg2 updateHandler:(void (^)(CLLocation *, NSError *))arg3;
- (void)startUpdatingCurrentLocationWithAuthorizedHandler:(void (^)(void))arg1 updateHandler:(void (^)(CLLocation *, NSError *))arg2;
@end

