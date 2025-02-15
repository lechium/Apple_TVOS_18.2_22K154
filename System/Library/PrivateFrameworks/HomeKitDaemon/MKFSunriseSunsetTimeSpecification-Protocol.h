//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinTimeSpecification-Protocol.h>
#import <HomeKitDaemon/MKFSunriseSunsetTimeSpecificationPublicExtensions-Protocol.h>

@class MKFSunriseSunsetTimeSpecificationDatabaseID, NSNumber, NSString;

@protocol MKFSunriseSunsetTimeSpecification <MKFBulletinTimeSpecification, MKFSunriseSunsetTimeSpecificationPublicExtensions>
@property(readonly, copy, nonatomic) MKFSunriseSunsetTimeSpecificationDatabaseID *databaseID;
@property(copy, nonatomic) NSString *significantEvent;
@property(copy, nonatomic) NSNumber *offsetSeconds;
@end

