//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11MediaCoreUI21WaveformPlayIndicator : UIView
{
    MISSING_TYPE *isBufferingPulseEnabled;	// 8 = 0x8
    MISSING_TYPE *waitToEnableBufferingPulseTask;	// 16 = 0x10
    MISSING_TYPE *inputMode;	// 24 = 0x18
    MISSING_TYPE *mode;	// 32 = 0x20
    MISSING_TYPE *colorPalette;	// 40 = 0x28
    MISSING_TYPE *sizeSpecs;	// 72 = 0x48
    MISSING_TYPE *barLayout;	// 88 = 0x58
    MISSING_TYPE *customWaveformSubscriber;	// 96 = 0x60
    MISSING_TYPE *defaultWaveformValueSubscriber;	// 104 = 0x68
    MISSING_TYPE *customWaveformValueSubscriber;	// 112 = 0x70
    MISSING_TYPE *waveform;	// 120 = 0x78
    MISSING_TYPE *exclusiveAnimation;	// 176 = 0xb0
    MISSING_TYPE *pulseTask;	// 184 = 0xb8
    MISSING_TYPE *isVisible;	// 192 = 0xc0
    MISSING_TYPE *$__lazy_storage_$_bars;	// 200 = 0xc8
    MISSING_TYPE *cannedAnimationAsset;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000001f420
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000021d10
- (void)didMoveToWindow;	// IMP=0x0000000000021b80
- (void)layoutSubviews;	// IMP=0x0000000000021ad0
- (void)tintColorDidChange;	// IMP=0x0000000000021aa0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021710
- (void)dealloc;	// IMP=0x000000000001f400
- (id)init;	// IMP=0x000000000001c520

@end

