//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, nonatomic) NSArray *parameters;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

