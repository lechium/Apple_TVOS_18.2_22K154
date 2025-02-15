//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DCMapsLink.h"

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCNewGoogleMapsLink : DCMapsLink
{
    _Bool _showsTransit;	// 8 = 0x8
    _Bool _showsBicycling;	// 9 = 0x9
    _Bool _showsStreetView;	// 10 = 0xa
    _Bool _showsTraffic;	// 11 = 0xb
    _Bool _parsed;	// 12 = 0xc
    int _linkType;	// 16 = 0x10
    unsigned long long _mapType;	// 24 = 0x18
    unsigned long long _directionsMode;	// 32 = 0x20
    long long _zoomLevel;	// 40 = 0x28
    NSURL *_URL;	// 48 = 0x30
    NSArray *_mapsURLComponents;	// 56 = 0x38
    NSString *_location;	// 64 = 0x40
}

+ (id)mapsLinkWithURL:(id)arg1;	// IMP=0x00600000000b011d
+ (_Bool)isMapsURL:(id)arg1;	// IMP=0x00600000000afec1
- (void).cxx_destruct;	// IMP=0x00000000000b1226
@property(readonly, nonatomic) _Bool parsed; // @synthesize parsed=_parsed;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *mapsURLComponents; // @synthesize mapsURLComponents=_mapsURLComponents;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)parseMapsData;	// IMP=0x00000000000b0c52
- (id)dataString;	// IMP=0x00000000000b0ad2
- (void)parse;	// IMP=0x00000000000b0a8c
- (void)parseLatLonZoom;	// IMP=0x00000000000b086c
- (id)latLonZoomString;	// IMP=0x00000000000b081e
- (void)parseLinkType;	// IMP=0x00000000000b0743
@property(readonly, nonatomic) int linkType; // @synthesize linkType=_linkType;
- (id)mapsURLComponentAtIndex:(long long)arg1;	// IMP=0x00000000000b0672
- (id)streetViewLocation;	// IMP=0x00000000000b0570
- (_Bool)showsBicycling;	// IMP=0x00000000000b0535
- (_Bool)showsStreetView;	// IMP=0x00000000000b04fa
- (_Bool)showsTransit;	// IMP=0x00000000000b04bf
- (_Bool)showsTraffic;	// IMP=0x00000000000b0484
- (unsigned long long)mapType;	// IMP=0x00000000000b0448
- (long long)zoomLevel;	// IMP=0x00000000000b040c
- (id)centerLocation;	// IMP=0x00000000000b03cc
- (unsigned long long)directionsMode;	// IMP=0x00000000000b039b
- (id)destinationAddress;	// IMP=0x00000000000b0313
- (id)startAddress;	// IMP=0x00000000000b028b
- (id)searchLocation;	// IMP=0x00000000000b0246
- (id)searchNearQuery;	// IMP=0x00000000000b023e
- (id)searchQuery;	// IMP=0x00000000000b01f2
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000b0182

@end

