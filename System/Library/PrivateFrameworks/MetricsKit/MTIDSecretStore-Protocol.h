//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/NSObject-Protocol.h>

@class MTIDScheme, MTPromise, NSArray, NSDictionary;

@protocol MTIDSecretStore <NSObject>
- (MTPromise *)syncForSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (void)clearLocalData;
- (MTPromise *)resetSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (MTPromise *)secretForScheme:(MTIDScheme *)arg1 options:(NSDictionary *)arg2;

@optional
- (NSDictionary *)debugInfo;
- (MTPromise *)maintainSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;
@end

