//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMutableSet, geo_isolater;

@interface GEOTransitUpdateServer : GEOServer
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSMutableSet *_originalRequests;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x0020000000015b29
- (void).cxx_destruct;	// IMP=0x002000000001e700
- (void)cancelTransitRouteUpdateRequestWithRequest:(id)arg1;	// IMP=0x001000000001e465
- (void)startTransitRouteUpdateRequestWithRequest:(id)arg1;	// IMP=0x001000000001e07a
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000001dfe5
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x0010000000015b36

@end

