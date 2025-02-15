//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class NSString;
@protocol SBKUniversalPlaybackPositionTransactionContext;

@protocol SBKUniversalPlaybackPositionDataSource <NSObject>
- (void)commitUniversalPlaybackPositionTransaction:(id <SBKUniversalPlaybackPositionTransactionContext>)arg1 domainVersion:(NSString *)arg2 metadataEnumerationBlock:(SBKUniversalPlaybackPositionMetadata * (^)(void))arg3;
- (void)cancelUniversalPlaybackPositionTransaction:(id <SBKUniversalPlaybackPositionTransactionContext>)arg1;
- (id <SBKUniversalPlaybackPositionTransactionContext>)beginTransactionWithItemsToSyncEnumerationBlock:(void (^)(id <SBKUniversalPlaybackPositionMediaItem>))arg1;
@end

