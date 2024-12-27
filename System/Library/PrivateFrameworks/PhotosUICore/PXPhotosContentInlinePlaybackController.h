//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXGridInlinePlaybackController.h"

@class MISSING_TYPE, NSString, PXScrollViewSpeedometer;
@protocol PXDisplayAsset, PXPhotosContentInlinePlaybackControllerDelegate;

@interface PXPhotosContentInlinePlaybackController : PXGridInlinePlaybackController
{
    MISSING_TYPE *numberOfItemsToPlay;	// 8 = 0x8
    MISSING_TYPE *scrollViewSpeedometer;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *scrollViewSpeedometerObservation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004d4880
- (id)init;	// IMP=0x00000000004d47d0
@property(nonatomic, readonly) long long maxNumberOfPlayingItems;
- (id)filterSortedRecordsToPlay:(id)arg1;	// IMP=0x00000000004d3d20
- (_Bool)isDisplayAssetEligibleForAutoPlayback:(id)arg1;	// IMP=0x00000000004d3a50
@property(nonatomic, readonly) id <PXDisplayAsset> currentHoveredDisplayAsset;
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(struct CGSize *)arg2;	// IMP=0x00000000004d39a0
@property(nonatomic, readonly) struct UIEdgeInsets criticallyVisibleEdgeInsets;
@property(nonatomic, readonly) struct CGRect currentVisibleRect;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) _Bool shouldEnablePlayback;
- (_Bool)canPlayAsset:(id)arg1;	// IMP=0x00000000004d33e0
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;	// IMP=0x00000000004d3330
@property(nonatomic) _Bool isContentViewVisible;
- (_Bool)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id)arg1;	// IMP=0x00000000004d3150
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;	// IMP=0x00000000004d30b0
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;	// IMP=0x00000000004d2f60
@property(nonatomic) __weak id <PXPhotosContentInlinePlaybackControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, retain) PXScrollViewSpeedometer *scrollViewSpeedometer; // @synthesize scrollViewSpeedometer;
@property(nonatomic) long long numberOfItemsToPlay; // @synthesize numberOfItemsToPlay;

@end

