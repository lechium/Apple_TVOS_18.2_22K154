//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOTransitLine-Protocol.h>

@class GEOMapRegion, NSArray;
@protocol GEOEncyclopedicInfo, GEOTransitAttribution;

@protocol GEOTransitLineItem <GEOTransitLine>
@property(readonly, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic) _Bool hasIncidentComponent;
@property(readonly, nonatomic) _Bool isIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) id <GEOTransitAttribution> attribution;
@property(readonly, nonatomic) NSArray *labelItems;
@end

