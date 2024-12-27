//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOPlaceDataLocalProxy, NSMapTable, geo_isolater;

@interface GEOPlaceDataServer : GEOServer
{
    geo_isolater *_peerToRequestUUIDIsolater;	// 8 = 0x8
    NSMapTable *_peerToRequestUUID;	// 16 = 0x10
    GEOPlaceDataLocalProxy *_placeDataProxy;	// 24 = 0x18
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000013b70
+ (id)identifier;	// IMP=0x0010000000013b63
- (void).cxx_destruct;	// IMP=0x0020000000003f27
- (void)clearCacheWithRequest:(id)arg1;	// IMP=0x0010000000003f0a
- (void)shrinkBySizeSyncWithRequest:(id)arg1;	// IMP=0x0010000000003e59
- (void)shrinkBySizeWithRequest:(id)arg1;	// IMP=0x0010000000003d43
- (void)calculateFreeableSpaceSyncWithRequest:(id)arg1;	// IMP=0x0010000000003ca8
- (void)calculateFreeableSpaceWithRequest:(id)arg1;	// IMP=0x0010000000003ba6
- (void)cancelPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x0010000000003aa3
- (void)performPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x00100000000034eb
- (void)preservePlaceDataWithRequest:(id)arg1;	// IMP=0x0010000000003318
- (void)fetchAllCacheEntriesWithRequest:(id)arg1;	// IMP=0x00100000000031d9
- (void)requestPhoneNumbersWithRequest:(id)arg1;	// IMP=0x0010000000002b29
- (void)requestMUIDsWithRequest:(id)arg1;	// IMP=0x00100000000026dd
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000000237d
- (void)_removeRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x001000000000225b
- (void)_addRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000002098
- (id)initWithDaemon:(id)arg1 proxy:(id)arg2;	// IMP=0x0010000000001f7d
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000001efc
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x0010000000013b7b

@end

