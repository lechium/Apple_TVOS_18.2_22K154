//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSString, TVPStateMachine, TVPTransportBarView, TVPlaybackProgressAnimation;
@protocol TVPPlaybackProgressAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface TVPPlaybackProgressAnimator : NSObject
{
    double _targetTime;	// 8 = 0x8
    double _playbackDuration;	// 16 = 0x10
    double _effectivePlaybackRate;	// 24 = 0x18
    _Bool _dragging;	// 32 = 0x20
    TVPTransportBarView *_transportBarView;	// 40 = 0x28
    id <TVPPlaybackProgressAnimatorDelegate> _delegate;	// 48 = 0x30
    CADisplayLink *_displayLink;	// 56 = 0x38
    TVPlaybackProgressAnimation *_animation;	// 64 = 0x40
    TVPStateMachine *_stateMachine;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000018cfc
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) TVPlaybackProgressAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double effectivePlaybackRate; // @synthesize effectivePlaybackRate=_effectivePlaybackRate;
@property(nonatomic) __weak id <TVPPlaybackProgressAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVPTransportBarView *transportBarView; // @synthesize transportBarView=_transportBarView;
- (void)invalidate;	// IMP=0x0000000000018bd8
- (void)moveModeratelyToElapsedTime:(double)arg1;	// IMP=0x0000000000018b8b
- (void)moveQuicklyToElapsedTime:(double)arg1;	// IMP=0x0000000000018b67
- (void)moveInstantaneouslyToElapsedTime:(double)arg1;	// IMP=0x0000000000018b50
@property(readonly, nonatomic) double moderateAnimationDuration;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)endDragging;	// IMP=0x0000000000018a9f
- (void)beginDragging;	// IMP=0x00000000000189ed
- (double)presentedTime;	// IMP=0x00000000000189db
- (_Bool)getTargetElapsedTime:(double *)arg1;	// IMP=0x00000000000189c9
- (void)setPlaybackDuration:(double)arg1;	// IMP=0x000000000001888e
- (void)_moveToElapsedTime:(double)arg1 withAnimationDuration:(double)arg2 timingFunctionName:(id)arg3;	// IMP=0x0000000000018652
- (void)_setTargetTime:(double)arg1;	// IMP=0x000000000001863a
- (void)_hidePlayhead;	// IMP=0x00000000000185da
- (void)_showPlayhead;	// IMP=0x0000000000018580
- (void)_updatePlaybackProgressForTransportBarView:(id)arg1 withElapsedTime:(double)arg2 playbackDuration:(double)arg3;	// IMP=0x00000000000184f7
- (double)_presentedTime;	// IMP=0x0000000000018483
- (_Bool)_getActualTime:(double *)arg1;	// IMP=0x0000000000018405
- (void)_displayLinkFired:(id)arg1;	// IMP=0x000000000001821a
- (void)_cancelAnimations;	// IMP=0x00000000000181c6
- (void)_updateTransportBarViewWithAnimation:(id)arg1;	// IMP=0x000000000001813a
- (_Bool)_getPlaybackDuration:(double *)arg1;	// IMP=0x000000000001811a
- (_Bool)_validatePlaybackDuration:(double)arg1;	// IMP=0x00000000000180de
- (_Bool)_getTargetTime:(double *)arg1;	// IMP=0x00000000000180be
- (_Bool)_validateCurrentTime:(double)arg1;	// IMP=0x0000000000018068
- (void)_setupStateMachine;	// IMP=0x0000000000016d24
- (id)_nextStateByUpdatingWithAnimation:(id)arg1;	// IMP=0x0000000000016c09
- (void)_updateTransportBarView:(id)arg1 withElapsedTime:(double)arg2 playbackDuration:(double)arg3;	// IMP=0x0000000000016b59
- (id)_nextStateByDragging;	// IMP=0x0000000000016af0
- (id)_nextStateByAnimatingLinearly;	// IMP=0x0000000000016956
- (void)dealloc;	// IMP=0x0000000000016927
- (id)init;	// IMP=0x00000000000168fc
- (id)initWithTransportBarView:(id)arg1;	// IMP=0x00000000000167c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

