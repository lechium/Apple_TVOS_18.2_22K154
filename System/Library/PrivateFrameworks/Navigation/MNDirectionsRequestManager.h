//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsService, NSMutableDictionary, geo_isolater;

__attribute__((visibility("hidden")))
@interface MNDirectionsRequestManager : NSObject
{
    NSMutableDictionary *_pendingRequests;	// 8 = 0x8
    geo_isolater *_pendingRequestsIsolater;	// 16 = 0x10
    GEODirectionsService *_directionsService;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000086ee7
- (void)_logRoutes:(id)arg1 error:(id)arg2;	// IMP=0x0000000000086ba3
- (void)_requestDirectionsFromTraceWithPath:(id)arg1 feedback:(id)arg2 auditToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000008623c
- (void)_requestServerDirections:(id)arg1 preferredRoute:(id)arg2 withIdentifier:(id)arg3 auditToken:(id)arg4 finishedHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000084c83
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;	// IMP=0x0000000000084aee
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000845c5
- (id)init;	// IMP=0x0000000000084539

@end

