//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol PXDisplayAsset;

@protocol PXStoryDisplayAssetCroppingContext
- (NSArray *)cropContentRectsForMultipartPanoramaAsset:(id <PXDisplayAsset>)arg1 axis:(long long)arg2 cropContentsRectsApectRatio:(double)arg3;
- (void)requestIndividualFaceRectsInAsset:(id <PXDisplayAsset>)arg1 options:(unsigned long long)arg2 resultHandler:(void (^)(long long, struct CGRect *, long long, id <PXStoryFaceFetchResult>))arg3;
@end

