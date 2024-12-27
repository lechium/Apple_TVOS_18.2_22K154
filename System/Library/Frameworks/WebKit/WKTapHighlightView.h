//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKTapHighlightView : UIView
{
    struct RetainPtr<UIColor> _color;	// 8 = 0x8
    float _minimumCornerRadius;	// 16 = 0x10
    struct Radii _cornerRadii;	// 20 = 0x14
    struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _innerFrames;	// 56 = 0x38
    struct Vector<WebCore::FloatQuad, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _innerQuads;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000048970f
- (void).cxx_destruct;	// IMP=0x0000000000489696
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000048968e
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000004892e0
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000489291
- (void)setQuads:(void *)arg1 boundaryRect:(const struct FloatRect *)arg2;	// IMP=0x000000000048906c
- (void)setFrames:(void *)arg1;	// IMP=0x0000000000488e9e
- (void)setCornerRadii:(struct Radii *)arg1;	// IMP=0x0000000000488e81
- (void)setMinimumCornerRadius:(float)arg1;	// IMP=0x0000000000488e6f
- (void)setColor:(id)arg1;	// IMP=0x0000000000488e28
- (void)cleanUp;	// IMP=0x0000000000488df7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000488d80

@end

