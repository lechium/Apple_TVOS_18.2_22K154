//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView;

__attribute__((visibility("hidden")))
@interface _TtC5UIKit33_UISwipeDownDismissSubInteraction : NSObject
{
    MISSING_TYPE *parent;	// 8 = 0x8
    MISSING_TYPE *view;	// 16 = 0x10
    MISSING_TYPE *axis;	// 24 = 0x18
    MISSING_TYPE *gesture;	// 32 = 0x20
    MISSING_TYPE *conflictingScrollViews;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000146800
- (void)handlePan:(id)arg1;	// IMP=0x00000000001467a0
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000146010
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000145fb0
- (id)init;	// IMP=0x0000000000145e90
@property(nonatomic) __weak UIView *view; // @synthesize view;
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000146b30
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000146a20
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000001469b0
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000146940
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000001468d0

@end

