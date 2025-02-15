//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (AppleAccountUI)
+ (id)addBackgroundForImage:(id)arg1 withBackgroundColor:(id)arg2 yShift:(double)arg3;	// IMP=0x0080000000016e8d
+ (id)addBackgroundForImage:(id)arg1 withBackgroundColor:(id)arg2;	// IMP=0x0080000000016e78
+ (id)circularImageFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x0080000000016c60
+ (id)_circularImageFromIcon:(id)arg1 size:(double)arg2 scale:(double)arg3;	// IMP=0x0080000000016b80
+ (id)circularImageForBundleID:(id)arg1 size:(double)arg2 scale:(double)arg3;	// IMP=0x0080000000016adf
+ (id)aaui_imageFromColor:(id)arg1;	// IMP=0x008000000001654a
+ (id)imageForTableUIWithType:(id)arg1;	// IMP=0x0080000000025f95
+ (id)descriptorForDataclassWithSize:(double)arg1;	// IMP=0x0080000000025ef6
+ (id)imageForDataclassWithBundleID:(id)arg1;	// IMP=0x0080000000025df8
+ (id)imageForDataclassWithType:(id)arg1;	// IMP=0x0080000000025cfa
- (struct CGRect)_cropRectForRawImageOrientation:(struct CGRect)arg1;	// IMP=0x0010000000016802
- (id)_imageByCroppingCIImageToRect:(struct CGRect)arg1;	// IMP=0x0010000000016737
- (id)_imageByCroppingCGImageToRect:(struct CGRect)arg1;	// IMP=0x001000000001668b
- (id)imageByCroppingToRect:(struct CGRect)arg1;	// IMP=0x00100000000165c7
@end

