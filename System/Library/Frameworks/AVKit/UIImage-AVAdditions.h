//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (AVAdditions)
+ (id)_avkit_textImageCache;	// IMP=0x0080000000133588
+ (id)_avkit_imageLoadingQueue;	// IMP=0x0080000000133558
+ (id)_avkit_imageWithSize:(struct CGSize)arg1 ofText:(id)arg2 font:(id)arg3 scaleFactor:(double)arg4;	// IMP=0x00800000001332b4
+ (void)avkit_imageWithSize:(struct CGSize)arg1 ofText:(id)arg2 font:(id)arg3 scaleFactor:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0080000000133045
+ (id)avkit_imageWithSymbolNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x0080000000132fae
+ (void)avkit_imageWithSymbolNamed:(id)arg1 font:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0080000000132b0c
+ (void)avkit_imageNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0080000000132910
+ (id)avkit_flatWhiteResizableTemplateImage;	// IMP=0x00800000001328e0
+ (id)avkit_loadedImageConfigurations;	// IMP=0x00800000001328b0
- (id)imageScaledToAspectFill:(struct CGSize)arg1;	// IMP=0x00100000000cbdf8
- (id)imageScaledDownToFit:(struct CGSize)arg1;	// IMP=0x00100000000cbc33
- (_Bool)isSolidColor;	// IMP=0x00100000000cb9e3
- (id)imageWithBoxBlur:(double)arg1;	// IMP=0x00100000000cb63a
- (id)imageWithShadow:(id)arg1;	// IMP=0x00100000000cb4a0
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;	// IMP=0x00100000000cb38a
@end

