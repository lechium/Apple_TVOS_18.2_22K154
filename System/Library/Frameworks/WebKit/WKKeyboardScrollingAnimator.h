//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WKKeyboardScrollableInternal;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollingAnimator : NSObject
{
    id <WKKeyboardScrollableInternal> _scrollable;	// 8 = 0x8
    struct RetainPtr<CADisplayLink> _displayLink;	// 16 = 0x10
    struct RetainPtr<UIView> _viewForTrackingScrollToExtentAnimation;	// 24 = 0x18
    optional_383df22c _currentScroll;	// 32 = 0x20
    _Bool _scrollTriggeringKeyIsPressed;	// 64 = 0x40
    struct FloatSize _velocity;	// 68 = 0x44
    struct FloatPoint _idealPosition;	// 76 = 0x4c
    struct FloatPoint _currentPosition;	// 84 = 0x54
    struct FloatPoint _idealPositionForMinimumTravel;	// 92 = 0x5c
}

- (id).cxx_construct;	// IMP=0x0000000000481151
- (void).cxx_destruct;	// IMP=0x0000000000481113
- (void)displayLinkFired:(id)arg1;	// IMP=0x0000000000480de2
- (void)stopScrollingImmediately;	// IMP=0x0000000000480d9f
- (void)stopDisplayLink;	// IMP=0x0000000000480d66
- (void)resetViewForScrollToExtentAnimation;	// IMP=0x0000000000480d0d
- (void)startDisplayLinkIfNeeded;	// IMP=0x0000000000480bfc
- (void)willStartInteractiveScroll;	// IMP=0x0000000000480bb9
- (_Bool)scrollTriggeringKeyIsPressed;	// IMP=0x0000000000480bb0
- (void)stopAnimatedScroll;	// IMP=0x0000000000480aac
- (void)handleKeyEvent:(id)arg1;	// IMP=0x0000000000480a28
- (_Bool)beginWithEvent:(id)arg1;	// IMP=0x00000000004805fc
- (optional_383df22c)keyboardScrollForEvent:(id)arg1;	// IMP=0x0000000000480328
- (void)invalidate;	// IMP=0x00000000004802e6
- (id)initWithScrollable:(id)arg1;	// IMP=0x00000000004802a9
- (id)init;	// IMP=0x00000000004802a1

@end

