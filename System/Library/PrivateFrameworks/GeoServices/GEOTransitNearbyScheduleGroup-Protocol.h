//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol GEOTransitNearbyScheduleGroup <NSObject>
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) long long groupType;
@property(readonly, nonatomic) unsigned long long maxWalkingDistance;
@property(readonly, nonatomic) unsigned long long minWalkingDistance;
@property(readonly, nonatomic) unsigned long long maxWalkingTime;
@property(readonly, nonatomic) unsigned long long minWalkingTime;
@property(readonly, nonatomic) _Bool hasWalkingDetails;
@property(readonly, nonatomic) NSArray *lineCells;
@property(readonly, nonatomic) NSString *pinnedDisplayName;
@property(readonly, nonatomic) NSString *displayName;
@end

