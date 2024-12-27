//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _LTDAssetModel;

@protocol _LTDAssetServiceProtocol
+ (void)purgeAsset:(_LTDAssetModel *)arg1 completion:(void (^)(_LTDAssetModel *, NSError *))arg2;
+ (void)downloadAsset:(_LTDAssetModel *)arg1 options:(unsigned long long)arg2 progress:(void (^)(_LTDAssetModel *))arg3 completion:(void (^)(NSError *))arg4;

@optional
+ (NSArray *)queryAssetType:(NSString *)arg1 filter:(unsigned long long)arg2 error:(id *)arg3;
+ (void)queryAssetType:(NSString *)arg1 filter:(unsigned long long)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
+ (void)downloadCatalogForAssetType:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

