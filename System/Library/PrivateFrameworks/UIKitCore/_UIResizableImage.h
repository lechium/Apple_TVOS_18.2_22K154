//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImage.h"

__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage
{
    struct UIEdgeInsets _capInsets;	// 112 = 0x70
    struct UIEdgeInsets _subimageInsets;	// 144 = 0x90
    struct {
        unsigned int alwaysStretches:1;
        unsigned int isSubimage:1;
    } _rImageFlags;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000b26d69
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2772b
- (id)_resizableImageWithCapMask:(int)arg1;	// IMP=0x0000000000b273f1
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;	// IMP=0x0000000000b2735a
- (void)_setAlwaysStretches:(_Bool)arg1;	// IMP=0x0000000000b27342
- (_Bool)_isResizable;	// IMP=0x0000000000b2733a
- (_Bool)_isSubimage;	// IMP=0x0000000000b27326
- (struct CGRect)_contentRectInPixels;	// IMP=0x0000000000b27282
- (struct CGRect)_contentStretchInPixels;	// IMP=0x0000000000b271de
- (struct CGRect)_contentRectInPixelsApplyingInsets:(struct UIEdgeInsets)arg1 emptySizeFallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b270bb
- (long long)resizingMode;	// IMP=0x0000000000b270a7
- (struct UIEdgeInsets)_subimageInsets;	// IMP=0x0000000000b27087
- (void)_setSubimageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000b2700b
- (struct UIEdgeInsets)capInsets;	// IMP=0x0000000000b26feb
- (void)_setCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000b26fcd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b26f19
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b26d71
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000b26d1a
- (void)_configureImage:(id)arg1 assumePreconfigured:(_Bool)arg2;	// IMP=0x0000000000b26c26
- (_Bool)_suppressesAccessibilityHairlineThickening;	// IMP=0x0000000000b26c1e

@end

