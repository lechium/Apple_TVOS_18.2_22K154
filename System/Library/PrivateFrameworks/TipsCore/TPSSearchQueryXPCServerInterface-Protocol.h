//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSObject-Protocol.h>

@class NSArray, NSString, TPSSearchQuery;

@protocol TPSSearchQueryXPCServerInterface <NSObject>
- (void)deleteAllSearchableItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reindexSearchableItemsWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reindexAllSearchableItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (oneway void)cancelQueryWithIdentifier:(NSString *)arg1;
- (void)performQuery:(TPSSearchQuery *)arg1 completion:(void (^)(TPSSearchResult *, NSError *))arg2;
@end

