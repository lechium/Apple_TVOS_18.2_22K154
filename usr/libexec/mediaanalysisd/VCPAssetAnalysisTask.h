//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PHAsset, VCPPhotosAssetChangeManager;

@interface VCPAssetAnalysisTask
{
    NSDictionary *_existingAnalysis;	// 8 = 0x8
    _Bool _allowStreaming;	// 16 = 0x10
    unsigned long long _types;	// 24 = 0x18
    PHAsset *_asset;	// 32 = 0x20
    NSDictionary *_analysisResults;	// 40 = 0x28
    VCPPhotosAssetChangeManager *_photosChangeManager;	// 48 = 0x30
}

+ (id)taskWithAnalysisTypes:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3;	// IMP=0x00400000000b4dfe
- (void).cxx_destruct;	// IMP=0x00200000000b6e37
@property(retain, nonatomic) VCPPhotosAssetChangeManager *photosChangeManager; // @synthesize photosChangeManager=_photosChangeManager;
@property(nonatomic) _Bool allowStreaming; // @synthesize allowStreaming=_allowStreaming;
@property(readonly, nonatomic) NSDictionary *analysisResults; // @synthesize analysisResults=_analysisResults;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (int)mainInternal;	// IMP=0x00100000000b55a1
- (void)_reportCoreAnalyticsWithAsset:(id)arg1 analysis:(id)arg2 analysisStatus:(long long)arg3 processingInterval:(double)arg4 extendedAnalysisStatus:(id)arg5;	// IMP=0x00100000000b4f3c
- (void)publishLivePhotoEffectsAnalysis:(id)arg1 toAsset:(id)arg2;	// IMP=0x00100000000b4f36
@property(readonly, nonatomic) double cost;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3;	// IMP=0x00100000000b4cc1

@end

