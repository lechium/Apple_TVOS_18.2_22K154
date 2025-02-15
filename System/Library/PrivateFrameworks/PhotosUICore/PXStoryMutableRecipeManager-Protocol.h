//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, PXStoryConfiguration, PXStoryRecipeAssetEdits;
@protocol PXAudioAsset, PXDisplayAsset, PXDisplayAssetFetchResult;

@protocol PXStoryMutableRecipeManager
@property(copy, nonatomic) PXStoryConfiguration *configuration;
- (void)ensureAutoEditDecisionListForSong:(id <PXAudioAsset>)arg1;
- (void)didPersistRecipeAssetEdits:(PXStoryRecipeAssetEdits *)arg1;
- (void)applyKeyAsset:(id <PXDisplayAsset>)arg1;
- (void)applyManuallyRemovedAssets:(NSSet *)arg1;
- (void)applyManuallyCuratedAssets:(id <PXDisplayAssetFetchResult>)arg1;
- (void)applyCustomUserAssets:(id <PXDisplayAssetFetchResult>)arg1;
- (void)applyTargetOverallDurationInfo:(CDStruct_9ee4859c)arg1;
@end

