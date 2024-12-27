//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, NSString, PHPhotoLibrary, VCPDatabaseWriter, VCPProgressReporter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosFullAssetProcessingTask
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    int _status;	// 16 = 0x10
    VCPDatabaseWriter *_analysisDatabase;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    VCPProgressReporter *_progressReporter;	// 40 = 0x28
    long long _mediaType;	// 48 = 0x30
    unsigned long long _mediaSubtype;	// 56 = 0x38
    _Bool _downloadAllowed;	// 64 = 0x40
    double _accumulatedVideoDurations;	// 72 = 0x48
    NSString *_logPrefix;	// 80 = 0x50
    NSObject<OS_dispatch_group> *_computeGroup;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_computeQueue;	// 96 = 0x60
    _Bool _imageOnlyAnalysis;	// 104 = 0x68
    unsigned long long _processingStatusTaskID;	// 112 = 0x70
}

+ (void)publishLivePhotoEffectsAnalysis:(id)arg1 toAsset:(id)arg2;	// IMP=0x004000000008577e
+ (_Bool)canDoFullAnalysis:(id)arg1 withResources:(id)arg2;	// IMP=0x001000000007fb12
+ (id)taskWithAnalysisDatabase:(id)arg1 photoLibrary:(id)arg2 progressReporter:(id)arg3 mediaType:(long long)arg4 mediaSubtype:(unsigned long long)arg5 imageOnlyAnalysis:(_Bool)arg6 downloadAllowed:(_Bool)arg7;	// IMP=0x001000000007df7b
- (void).cxx_destruct;	// IMP=0x0020000000089502
- (void)_reportCoreAnalyticsForSession;	// IMP=0x00100000000890ff
- (void)_reportCoreAnalyticsWithEntry:(id)arg1 analyticManager:(id)arg2;	// IMP=0x0010000000088704
- (void)publish;	// IMP=0x00100000000886d6
- (int)_publish;	// IMP=0x0010000000085784
- (void)process;	// IMP=0x0010000000085750
- (int)_process;	// IMP=0x00100000000850f9
- (unsigned long long)_processAssetsSerially;	// IMP=0x0010000000084d80
- (unsigned long long)_processAssetsConcurrently:(long long)arg1;	// IMP=0x00100000000848d9
- (unsigned long long)concurrentAssetCount;	// IMP=0x00100000000848a9
- (void)processAssetEntry:(id)arg1;	// IMP=0x001000000008329c
- (void)download;	// IMP=0x0010000000081b84
- (void)prepare;	// IMP=0x0010000000081b5d
- (int)_prepare;	// IMP=0x00100000000812f4
- (int)status;	// IMP=0x00100000000812e4
- (id)assetLocalIdentifiers;	// IMP=0x001000000008109d
- (unsigned long long)count;	// IMP=0x0010000000081080
- (void)addPhotosAsset:(id)arg1 priority:(unsigned long long)arg2 previousStatus:(unsigned long long)arg3 attempts:(unsigned long long)arg4 lastAttemptDate:(id)arg5;	// IMP=0x0010000000080212
- (id)downloadResourceForAsset:(id)arg1 fromResources:(id)arg2;	// IMP=0x001000000007fc88
- (_Bool)needDownloadForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x001000000007fc80
- (_Bool)doneFullAnalysis:(id)arg1;	// IMP=0x001000000007fba5
- (unsigned long long)missingAnalysisForAsset:(id)arg1 existingAnalysis:(id *)arg2 resources:(id)arg3 forLocalResourcesOnly:(_Bool)arg4;	// IMP=0x001000000007ef94
- (unsigned long long)missingAnalysisForAsset:(id)arg1 withExistingComputeSyncAnalysis:(id *)arg2 resources:(id)arg3 forLocalResourcesOnly:(_Bool)arg4;	// IMP=0x001000000007e5dd
- (void)increaseProcessedJobCountByOne;	// IMP=0x001000000007e5b9
- (unsigned long long)possibleAnalysisForAsset:(id)arg1 withResources:(id)arg2 forLocalResourcesOnly:(_Bool)arg3;	// IMP=0x001000000007e493
- (_Bool)hasAdequateAssets:(unsigned long long)arg1;	// IMP=0x001000000007e42b
- (void)dealloc;	// IMP=0x001000000007e37b
- (id)initWithAnalysisDatabase:(id)arg1 photoLibrary:(id)arg2 progressReporter:(id)arg3 mediaType:(long long)arg4 mediaSubtype:(unsigned long long)arg5 imageOnlyAnalysis:(_Bool)arg6 downloadAllowed:(_Bool)arg7;	// IMP=0x001000000007e05c

@end

