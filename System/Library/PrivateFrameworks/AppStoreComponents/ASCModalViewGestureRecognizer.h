//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

__attribute__((visibility("hidden")))
@interface ASCModalViewGestureRecognizer : UIGestureRecognizer
{
    UIView *_targetView;	// 8 = 0x8
    NSMutableSet *_activeTouches;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003c54b
@property(readonly, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(readonly, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003c45f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003c395
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003c152
- (_Bool)isAnyTouch:(id)arg1 fromEvent:(id)arg2 outsideView:(id)arg3;	// IMP=0x000000000003bf97
- (void)reset;	// IMP=0x000000000003bf2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003bf18
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003beed
- (id)initWithTargetView:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000003be4a

@end

