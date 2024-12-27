//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKImageSequence, CAKeyframeAnimation;

@interface BKDisplayRenderOverlaySpinny
{
    unsigned long long _background;	// 8 = 0x8
    BKImageSequence *_imageSequence;	// 16 = 0x10
    CAKeyframeAnimation *_animation;	// 24 = 0x18
}

+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x00400000000038ff
- (void).cxx_destruct;	// IMP=0x00200000000038ce
@property(nonatomic) unsigned long long background; // @synthesize background=_background;
- (id)_assetPrefix;	// IMP=0x001000000000389f
- (_Bool)_useLightBackground;	// IMP=0x0010000000003847
- (void)_unloadSpinnyImageSequence;	// IMP=0x0010000000003793
- (id)_spinnyImageSequence;	// IMP=0x0010000000003627
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000035b6
- (void)_setScale:(double)arg1;	// IMP=0x00100000000034ff
- (void)_cleanUpContentLayer;	// IMP=0x00100000000034a7
- (id)_prepareContentLayerForPresentation:(id)arg1;	// IMP=0x0010000000003309
- (void)_stopAnimating;	// IMP=0x0010000000003303
- (void)_startAnimating;	// IMP=0x00100000000031d7
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0010000000003177

@end

