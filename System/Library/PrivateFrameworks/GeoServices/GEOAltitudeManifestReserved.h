//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAltitudeManifestReserved : NSObject
{
    struct map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> _reservedTriggerData;	// 8 = 0x8
    unsigned int _reservedCurrentRegion;	// 32 = 0x20
    unsigned char _reservedTourServerType;	// 36 = 0x24
    geo_isolater *_reservedIsolater;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000001091837
- (void).cxx_destruct;	// IMP=0x0000000001091814

@end

