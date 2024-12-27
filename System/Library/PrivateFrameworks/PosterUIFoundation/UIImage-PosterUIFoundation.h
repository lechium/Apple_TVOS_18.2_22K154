//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PosterUIFoundation)
+ (id)pui_thumbnailImageForImage:(id)arg1 thumbnailWidthInPixels:(double)arg2;	// IMP=0x00800000000149d5
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;	// IMP=0x0080000000014917
+ (id)pui_imageFromSceneSnapshot:(id)arg1;	// IMP=0x008000000001307f
+ (id)pui_imageSnapshotFromLayer:(id)arg1 buffer:(struct __IOSurface *)arg2;	// IMP=0x0080000000012f64
+ (id)pui_imageWithIOSurface:(id)arg1;	// IMP=0x0080000000012d9e
+ (id)pui_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0080000000012b50
- (_Bool)pui_isSolidColor:(out id *)arg1;	// IMP=0x0010000000015403
- (id)pui_averageColorForRect:(struct CGRect)arg1;	// IMP=0x00100000000150ce
- (id)pui_averageColor;	// IMP=0x0010000000015068
- (_Bool)pui_canDetermineProminentColor;	// IMP=0x0010000000014fa2
- (long long)pui_EXIFOrientation;	// IMP=0x00100000000148fd
- (id)pui_imageHashData;	// IMP=0x0010000000014894
- (id)pui_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014485
- (struct CGColorSpace *)pui_colorSpace;	// IMP=0x001000000001445a
- (id)pui_resizeImageToSize:(struct CGSize)arg1;	// IMP=0x001000000001415a
- (id)pui_resizeImageToSize:(struct CGSize)arg1 preservingAspectRatio:(_Bool)arg2;	// IMP=0x0010000000014069
- (id)pui_scaleImage:(double)arg1 canUseIOSurface:(_Bool)arg2;	// IMP=0x0010000000013f4d
- (id)pui_scaleImage:(double)arg1;	// IMP=0x0010000000013f36
- (id)pui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3 canUseIOSurface:(_Bool)arg4;	// IMP=0x00100000000137d6
- (id)pui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 canUseIOSurface:(_Bool)arg3;	// IMP=0x00100000000137bd
- (id)pui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3;	// IMP=0x00100000000137a6
- (id)pui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2;	// IMP=0x001000000001378f
- (id)pui_CGImageBackedImageUsingDataProvider;	// IMP=0x00100000000134c1
- (id)pui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(_Bool)arg2;	// IMP=0x00100000000132c6
- (id)pui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;	// IMP=0x00100000000132b2
- (id)pui_CGImageBackedImage;	// IMP=0x0010000000013299
- (id)pui_wrappedIOSurface;	// IMP=0x0010000000012f06
@end

