//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

@protocol GEOTransitLine <NSObject>
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) _Bool showVehicleNumber;
@property(readonly, nonatomic) NSString *lineColorString;
@property(readonly, nonatomic) _Bool hasLineColorString;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> headerArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> alternateArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> modeArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork;
@property(readonly, nonatomic) _Bool isBus;
@property(readonly, nonatomic) _Bool departuresAreVehicleSpecific;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) id <GEOTransitSystem> system;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
@end

