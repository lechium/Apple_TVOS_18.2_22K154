//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CUINamedTexture
{
    double _scale;	// 56 = 0x38
    struct _cuintproperties {
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isOpaque:1;
        unsigned int _reserved:26;
    } _textureProperties;	// 64 = 0x40
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (struct CGRect)alphaCroppedRect;	// IMP=0x000000000006b22f
- (id)description;	// IMP=0x000000000006b0e5
@property(readonly, nonatomic) _Bool isAlphaCropped;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) int exifOrientation;
- (id)textureWithBufferAllocator:(id)arg1;	// IMP=0x000000000006afee
@property(readonly, nonatomic) struct CGSize size;
- (_Bool)_cacheRenditionProperties;	// IMP=0x000000000006ae88

@end

