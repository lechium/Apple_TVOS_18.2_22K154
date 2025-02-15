//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFLatLng;

@protocol SFBeginMapsRoutingCommand <SFCommand>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int directionsMode;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) _Bool shouldSearchDirectionsAlongCurrentRoute;
@property(copy, nonatomic) NSData *mapsData;
@property(retain, nonatomic) SFLatLng *location;
@end

