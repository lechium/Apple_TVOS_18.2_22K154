//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CUIPSDLayerRef
{
}

- (id)colorFill;	// IMP=0x0000000000034ef0
- (id)layerEffects;	// IMP=0x0000000000034ea7
- (id)gradient;	// IMP=0x0000000000034e5e
- (id)fillSample;	// IMP=0x0000000000034e15
- (id)maskFromSlice:(unsigned int)arg1;	// IMP=0x0000000000034dc9
- (id)patternFromSlice:(unsigned int)arg1 isZeroSizeImage:(_Bool *)arg2;	// IMP=0x0000000000034d6c
- (id)patternFromSlice:(unsigned int)arg1;	// IMP=0x0000000000034d1d
- (id)imageFromSlice:(unsigned int)arg1 isEmptyImage:(_Bool *)arg2;	// IMP=0x0000000000034cc0
- (id)imageFromSlice:(unsigned int)arg1;	// IMP=0x0000000000034c71
- (id)imageIsZeroSizeImage:(_Bool *)arg1;	// IMP=0x0000000000034c23
- (id)image;	// IMP=0x0000000000034bd8
- (struct CGImage *)createCGImage;	// IMP=0x0000000000034b8f
- (void)dealloc;	// IMP=0x0000000000034b4f
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;	// IMP=0x0000000000034adc

@end

