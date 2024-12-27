//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOTileDB, NSArray, NSString;

@protocol GEOTileDBObserver <NSObject>

@optional
- (void)tileDB:(GEOTileDB *)arg1 didUpdateSubscriptionWithIdentifier:(NSString *)arg2;
- (void)tileDB:(GEOTileDB *)arg1 didExpireSubscriptions:(NSArray *)arg2 forReason:(long long)arg3;
- (void)tileDBDidDeleteExternalResource:(GEOTileDB *)arg1;
@end

