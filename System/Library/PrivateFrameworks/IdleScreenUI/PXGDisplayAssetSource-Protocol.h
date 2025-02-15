//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdleScreenUI/PXGLayoutContentSource-Protocol.h>

@class PXGDisplayAssetVideoPresentationController, PXGLayout, PXMediaProvider;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult, PXGDisplayAssetAdjustment, PXGDisplayAssetPixelBufferSourcesProvider, PXGDisplayAssetRequestObserver;

@protocol PXGDisplayAssetSource <PXGLayoutContentSource>
- (unsigned long long)desiredPlaceholderStyleInLayout:(PXGLayout *)arg1;
- (id <PXDisplayAssetFetchResult>)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(PXGLayout *)arg2;

@optional
- (_Bool)shouldApplyCleanApertureCropToStillImagesInLayout:(PXGLayout *)arg1;
- (_Bool)useLowMemoryDecodeInLayout:(PXGLayout *)arg1;
- (id <PXGDisplayAssetPixelBufferSourcesProvider>)customPixelBufferSourcesProviderForDisplayAssetsInLayout:(PXGLayout *)arg1;
- (PXMediaProvider *)customMediaProviderForDisplayAssetsInLayout:(PXGLayout *)arg1;
- (unsigned long long)presentationIntentForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(PXGLayout *)arg2;
- (id <PXGDisplayAssetAdjustment>)adjustmentForDisplayAsset:(id <PXDisplayAsset>)arg1 spriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (PXGDisplayAssetVideoPresentationController *)videoPresentationControllerForDisplayAsset:(id <PXDisplayAsset>)arg1 spriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (id <PXGDisplayAssetRequestObserver>)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(PXGLayout *)arg2;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(PXGLayout *)arg1;
@end

