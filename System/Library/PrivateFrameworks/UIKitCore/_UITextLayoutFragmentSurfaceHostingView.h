//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;
@protocol NSCustomTextSurface;

__attribute__((visibility("hidden")))
@interface _UITextLayoutFragmentSurfaceHostingView
{
    CALayer *_hostedLayer;	// 272 = 0x110
    id <NSCustomTextSurface> _surface;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000000313da4
@property(readonly, nonatomic) id <NSCustomTextSurface> surface; // @synthesize surface=_surface;
- (void)_setNeedsDisplayForWritingTools;	// IMP=0x0000000000313d8d
- (void)setNeedsDisplay;	// IMP=0x0000000000313d70
- (void)teardown;	// IMP=0x0000000000313ca7
- (void)updateWithSurface:(id)arg1;	// IMP=0x0000000000313acf
- (struct CGRect)_activeClipRect;	// IMP=0x0000000000313a61
- (struct CGPoint)_activeContainerOrigin;	// IMP=0x0000000000313a21
- (struct CGRect)_activeLayoutFragmentFrame;	// IMP=0x0000000000313976
- (void)_updateGeometry;	// IMP=0x000000000031381e

@end

