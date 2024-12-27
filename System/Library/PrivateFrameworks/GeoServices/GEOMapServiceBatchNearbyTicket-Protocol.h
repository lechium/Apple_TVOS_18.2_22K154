//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>
#import <GeoServices/GEOMapServiceThrottlableTicket-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, GEOSearchCategory, NSString;

@protocol GEOMapServiceBatchNearbyTicket <GEOMapServiceCancellableTicket, GEOMapServiceThrottlableTicket>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSMapTable *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(NSMapTable *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
- (NSString *)resultSectionHeaderForCategory:(GEOSearchCategory *)arg1;
@end

