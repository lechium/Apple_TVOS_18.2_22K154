//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotosAssetDebugOverlayView, UIImage;

@protocol PUPhotosAssetDebugOverlayViewDelegate <NSObject>
- (void)photosAssetDebugOverlayView:(PUPhotosAssetDebugOverlayView *)arg1 didRequestPreferredImageDynamicRange:(long long)arg2;
- (long long)photosAssetDebugOverlayViewEffectivePreferredImageDynamicRange:(PUPhotosAssetDebugOverlayView *)arg1;
- (_Bool)photosAssetDebugOverlayViewHasEffectivePreferredImageDynamicRange:(PUPhotosAssetDebugOverlayView *)arg1;
- (long long)photosAssetDebugOverlayViewPreferredImageDynamicRange:(PUPhotosAssetDebugOverlayView *)arg1;
- (UIImage *)photosAssetDebugOverlayViewCurrentlyDisplayedImage:(PUPhotosAssetDebugOverlayView *)arg1;
@end

