//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface CUIMutableThemeRendition
{
    struct _renditionkeytoken *_renditionKey;	// 216 = 0xd8
    struct CGImage *_image;	// 224 = 0xe0
    CUIRenditionSliceInformation *_sliceInformation;	// 232 = 0xe8
    CUIRenditionMetrics *_renditionMetrics;	// 240 = 0xf0
}

- (id)metrics;	// IMP=0x0000000000091072
- (id)sliceInformation;	// IMP=0x0000000000091061
- (struct CGImage *)unslicedImage;	// IMP=0x0000000000091050
- (const struct _renditionkeytoken *)key;	// IMP=0x000000000009103f
- (void)setName:(id)arg1;	// IMP=0x0000000000091004
- (void)dealloc;	// IMP=0x0000000000090f8c
- (id)initWithCGImage:(struct CGImage *)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken *)arg3;	// IMP=0x00000000000908e4

@end

