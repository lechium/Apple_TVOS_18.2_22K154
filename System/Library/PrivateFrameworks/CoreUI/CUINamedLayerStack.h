//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIThemeRendition, NSArray, NSString;

@interface CUINamedLayerStack
{
    NSArray *_layers;	// 56 = 0x38
    CUIThemeRendition *_flattenedImageRendition;	// 64 = 0x40
    CUIThemeRendition *_radiosityImageRendition;	// 72 = 0x48
}

+ (void)radiosityImageWithImage:(struct CGImage *)arg1 displayScale:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007f2c8
+ (struct CGImage *)createRadiosityImageWithImage:(struct CGImage *)arg1 displayScale:(long long)arg2;	// IMP=0x001000000007efe1
+ (struct vImage_Buffer)_doRadiosityBlurOnPixelBuffer:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(_Bool *)arg7 adjustedSize:(struct CGSize *)arg8;	// IMP=0x001000000007e81e
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void)dealloc;	// IMP=0x000000000007f425
@property(readonly, nonatomic) struct CGImage *radiosityImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
- (id)layerImageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007ef76
@property(readonly, nonatomic) struct CGSize size;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e5dd
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000007dec2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

