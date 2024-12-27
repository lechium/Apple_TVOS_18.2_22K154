//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIEditMenuDismissalGestureRecognizer, _UITouchFallbackView;
@protocol _UITextChoiceAccelerationPassthroughDelegate;

__attribute__((visibility("hidden")))
@interface _UITextChoiceAccelerationPassthroughView : UIView
{
    _Bool _didDismissFromGesture;	// 8 = 0x8
    _UITouchFallbackView *_touchFallbackView;	// 16 = 0x10
    id <_UITextChoiceAccelerationPassthroughDelegate> _delegate;	// 24 = 0x18
    _UIEditMenuDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001702d75
@property(readonly, nonatomic) _UIEditMenuDismissalGestureRecognizer *dismissalGestureRecognizer; // @synthesize dismissalGestureRecognizer=_dismissalGestureRecognizer;
@property(nonatomic) __weak id <_UITextChoiceAccelerationPassthroughDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001702c58
- (_Bool)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 withSourceView:(id)arg3;	// IMP=0x0000000001702b26
- (_Bool)dismissalGestureRecognizer:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000001702a32
- (_Bool)touchFallbackView:(id)arg1 shouldHitTestAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000001702a2a
- (void)didRecognizeDismissalGestureRecognizer:(id)arg1;	// IMP=0x00000000017029a6
- (void)didMoveToWindow;	// IMP=0x000000000170286b
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000001702794
- (void)_installDismissalGesture;	// IMP=0x00000000017026f6
@property(readonly, nonatomic) _UITouchFallbackView *touchFallbackView; // @synthesize touchFallbackView=_touchFallbackView;
- (void)_passthroughViewDidChangeSize;	// IMP=0x0000000001702601
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000170256e
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000017024db
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;	// IMP=0x0000000001702453

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

