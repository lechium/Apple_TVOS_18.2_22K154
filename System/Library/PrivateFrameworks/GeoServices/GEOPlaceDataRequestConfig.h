//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOServiceRequestDefaultConfig.h"

@class GEOPDPlaceRequest, NSNumber;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig
{
    double _timeout;	// 8 = 0x8
    unsigned long long _urlType;	// 16 = 0x10
    NSNumber *_requestPriority;	// 24 = 0x18
    unsigned long long _multipathServiceType;	// 32 = 0x20
    GEOPDPlaceRequest *_placeRequest;	// 40 = 0x28
    _Bool _usesBackgroundURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000d4cba1
- (_Bool)usesBackgroundURL;	// IMP=0x0000000000d4cb91
- (id)additionalStatesForNetworkEvent;	// IMP=0x0000000000d4ca7c
- (unsigned long long)multipathServiceType;	// IMP=0x0000000000d4ca6b
- (double)timeout;	// IMP=0x0000000000d4ca59
- (CDStruct_026435ec)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;	// IMP=0x0000000000d4c952
- (id)serviceTypeNumber;	// IMP=0x0000000000d4c934
- (unsigned long long)urlType;	// IMP=0x0000000000d4c923
- (id)additionalHTTPHeaders;	// IMP=0x0000000000d4c851
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;	// IMP=0x0000000000d4c555

@end

