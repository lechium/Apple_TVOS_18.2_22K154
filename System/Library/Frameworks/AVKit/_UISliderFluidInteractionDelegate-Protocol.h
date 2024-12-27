//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class UISlider;

@protocol _UISliderFluidInteractionDelegate <NSObject>
- (void)_sliderFluidInteractionWillEnd:(UISlider *)arg1;
- (void)_sliderFluidInteractionWillExtend:(UISlider *)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)_sliderFluidInteractionWillContinue:(UISlider *)arg1 withLocation:(struct CGPoint)arg2;
- (void)_sliderFluidInteractionWillBegin:(UISlider *)arg1 withLocation:(struct CGPoint)arg2;

@optional
- (void)_sliderFluidInteractionDidEnd:(UISlider *)arg1;
- (_Bool)_slider:(UISlider *)arg1 shouldBeginDragAtPoint:(struct CGPoint)arg2;
@end

