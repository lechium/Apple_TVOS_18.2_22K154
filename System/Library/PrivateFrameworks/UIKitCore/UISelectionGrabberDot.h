//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIImageView
{
    UISelectionGrabber *m_grabber;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000141697d
@property(nonatomic) __weak UISelectionGrabber *grabber; // @synthesize grabber=m_grabber;
- (void)redrawRasterizedImageForScale:(double)arg1;	// IMP=0x00000000014168d6
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000014166ac
- (int)textEffectsVisibilityLevel;	// IMP=0x00000000014166a1
- (int)textEffectsVisibilityLevelInKeyboardWindow;	// IMP=0x0000000001416696
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000014165b8
- (struct CGRect)_extendedHitTestingRectWithPrecision:(unsigned long long)arg1 includingCalloutBarAdjustments:(_Bool)arg2;	// IMP=0x0000000001416402
- (struct CGRect)_extendedHitTestingRectWithEvent:(id)arg1 includingCalloutBarAdjustments:(_Bool)arg2;	// IMP=0x00000000014163b9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001416364
- (id)_rasterizedDotImageForScale:(double)arg1;	// IMP=0x0000000001415d5e
- (id)initWithFrame:(struct CGRect)arg1 container:(id)arg2;	// IMP=0x0000000001415ced

@end

