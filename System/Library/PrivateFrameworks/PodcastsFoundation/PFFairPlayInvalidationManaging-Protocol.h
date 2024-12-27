//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSURL, PFFairPlayAsset;

@protocol PFFairPlayInvalidationManaging
- (void)removalAllFairPlayKeysWithCompletion:(void (^)(NSError *))arg1;
- (NSError *)removeKeyFor:(PFFairPlayAsset *)arg1;
- (void)removeKeyFor:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)markKeyForInvalidationAt:(NSURL *)arg1 shouldRemove:(_Bool)arg2;
- (void)invalidateFairPlayKeyFor:(long long)arg1 completion:(void (^)(NSError *))arg2;
@end

