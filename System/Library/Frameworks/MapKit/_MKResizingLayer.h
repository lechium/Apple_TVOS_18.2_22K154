//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKResizingLayer : CALayer
{
    NSMutableArray *_sizedLayers;	// 8 = 0x8
    _Bool _needsLayoutOnBoundsChange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006b378
@property(nonatomic) _Bool needsLayoutOnBoundsChange; // @synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange;
- (void)setContentsScale:(double)arg1;	// IMP=0x000000000006b1c7
- (void)setMask:(id)arg1;	// IMP=0x000000000006b0a5
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000006adff
- (void)sizeSublayerToBounds:(id)arg1;	// IMP=0x000000000006ada6
@property(readonly, copy, nonatomic) NSArray *sizeToBoundsLayers;

@end

