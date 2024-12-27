//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetsDataSource, PXGLayout, PXPhotosLayoutSpec, PXPhotosViewModel;
@protocol PXPhotosGlobalHeader;

@protocol PXPhotosGlobalHeaderLayoutProvider <NSObject>
- (void)configureGlobalHeaderLayout:(PXGLayout<PXPhotosGlobalHeader> *)arg1 dataSource:(PXAssetsDataSource *)arg2 spec:(PXPhotosLayoutSpec *)arg3;
- (PXGLayout<PXPhotosGlobalHeader> *)createGlobalHeaderLayoutForPhotosViewModel:(PXPhotosViewModel *)arg1 dataSource:(PXAssetsDataSource *)arg2 spec:(PXPhotosLayoutSpec *)arg3;
@end

