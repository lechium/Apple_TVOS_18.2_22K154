//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDPlaceCache, NSMutableDictionary, _GEOPlaceDataPendingRequestManager, geo_reentrant_isolater;
@protocol GEOPlaceDataRequester, OS_dispatch_source;

@interface GEOPlaceDataLocalProxy : NSObject
{
    geo_reentrant_isolater *_accessIsolater;	// 8 = 0x8
    NSMutableDictionary *_requestUUIDToRequesters;	// 16 = 0x10
    NSMutableDictionary *_requestUUIDToRequests;	// 24 = 0x18
    id <GEOPlaceDataRequester> _serviceRequester;	// 32 = 0x20
    _GEOPlaceDataPendingRequestManager *_pendingRequestManager;	// 40 = 0x28
    GEOPDPlaceCache *_pdPlaceCache;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x002000000003b9f4
- (void).cxx_destruct;	// IMP=0x0020000000041cfb
- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;	// IMP=0x0010000000041c33
- (void)_callHistoryRecentsClearedObserver:(id)arg1;	// IMP=0x0010000000041b7f
- (void)clearCache;	// IMP=0x0010000000041b42
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x0010000000041aef
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x0010000000041aab
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041a2e
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000419b6
- (void)performPlaceDataRequest:(id)arg1 requestUUID:(id)arg2 traits:(id)arg3 cachePolicy:(unsigned long long)arg4 timeout:(double)arg5 auditToken:(id)arg6 throttleToken:(id)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000004094d
- (void)trackPlaceData:(id)arg1;	// IMP=0x0010000000040831
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040629
- (void)requestPhoneNumbers:(id)arg1 requestUUID:(id)arg2 allowCellularDataForLookup:(_Bool)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000003f60f
- (void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 requestUUID:(id)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 finished:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;	// IMP=0x001000000003f2c7
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 requestUUID:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 throttleToken:(id)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000003d324
- (void)cancelRequest:(id)arg1;	// IMP=0x001000000003c69e
- (void)startRequest:(id)arg1 requestUUID:(id)arg2 traits:(id)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 finished:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;	// IMP=0x001000000003c2ad
- (void)_resetRequestTimeout;	// IMP=0x001000000003c0cf
- (void)_cleanupPendingRequestMananger;	// IMP=0x001000000003c058
- (void)registerCacheResult:(unsigned char)arg1 forMapItem:(id)arg2 cachedByteCount:(unsigned long long)arg3 forRequestType:(int)arg4 auditToken:(id)arg5;	// IMP=0x001000000003bf8f
- (id)pdPlaceCache;	// IMP=0x001000000003bec5
- (void)dealloc;	// IMP=0x001000000003bccb
- (id)init;	// IMP=0x001000000003bab3
- (id)serviceRequester;	// IMP=0x001000000003ba79

@end

