//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VKTrafficFeature.h"

__attribute__((visibility("hidden")))
@interface VKTrafficSignalFeature : VKTrafficFeature
{
    long long _type;	// 160 = 0xa0
    unsigned int _countryCode;	// 168 = 0xa8
    _Bool _hasCountryCode;	// 172 = 0xac
}

+ (id)stringForTrafficSignalType:(long long)arg1;	// IMP=0x0060000000ffad10
@property(readonly, nonatomic) _Bool hasCountryCode; // @synthesize hasCountryCode=_hasCountryCode;
@property(readonly, nonatomic) unsigned int countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)populateDebugNode:(void *)arg1;	// IMP=0x0000000000ffab30
- (id)initWithTrafficSignal:(id)arg1 onRoute:(id)arg2;	// IMP=0x0000000000ffa9f0
- (id)initWithTrafficSignalType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 onRoute:(id)arg4;	// IMP=0x0000000000ffa980

@end

