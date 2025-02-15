//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, PHAsset, VCPDatabaseWriter;
@protocol VCPMADAssetBatchProtocol;

@protocol VCPMADPhotosProcessingTaskProtocol
+ (unsigned long long)taskID;
+ (NSString *)name;
- (NSObject<VCPMADAssetBatchProtocol> *)batchWithAnalysisDatabase:(VCPDatabaseWriter *)arg1 allowDownload:(_Bool)arg2 cancelBlock:(_Bool (^)(void))arg3;
- (_Bool)shouldProcessAsset:(PHAsset *)arg1;
@end

