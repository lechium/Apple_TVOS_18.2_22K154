//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigSubtitleBackdropCALayer.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;	// 24 = 0x18
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000051ecd5
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x000000000051e8c6
- (void)setDefaultFontSize:(double)arg1;	// IMP=0x000000000051e818
- (void)setViewport:(struct CGRect)arg1;	// IMP=0x000000000051e7a2
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;	// IMP=0x000000000051e72f
- (void)setContent:(struct __CFAttributedString *)arg1;	// IMP=0x000000000051e6be
- (struct __CFString *)getContentID;	// IMP=0x000000000051e63b
- (unsigned char)isDirty;	// IMP=0x000000000051e57a
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;	// IMP=0x000000000051e317
- (void)setCuePosition:(struct CGPoint)arg1;	// IMP=0x000000000051e0ec
- (void)dealloc;	// IMP=0x000000000051e056
- (id)init;	// IMP=0x000000000051df33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

