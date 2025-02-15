//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface UISearchDisplayControllerContainerView : UIView
{
    _Bool _collapsedTopView;	// 160 = 0xa0
    NSLayoutConstraint *_topViewHeightConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_topViewAttributeTopConstraint;	// 176 = 0xb0
    UIView *_topView;	// 184 = 0xb8
    UIView *_bottomView;	// 192 = 0xc0
    UIView *_behindView;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000749fad
@property(readonly, nonatomic) UIView *behindView; // @synthesize behindView=_behindView;
@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint; // @synthesize topViewAttributeTopConstraint=_topViewAttributeTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint; // @synthesize topViewHeightConstraint=_topViewHeightConstraint;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000749ec4
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000749e5e
- (void)configureInteractionForContainment:(_Bool)arg1;	// IMP=0x0000000000749e0c
- (void)adjustTopAttributeConstantByDelta:(double)arg1;	// IMP=0x0000000000749dac
- (void)updateTopAttributeConstant:(double)arg1;	// IMP=0x0000000000749ced
- (void)setBottomViewUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000000749cd0
- (void)collapseTopView;	// IMP=0x0000000000749ca5
- (void)updateTopViewHeight:(double)arg1 animateUpdate:(_Bool)arg2;	// IMP=0x0000000000749b3f
- (void)updateTopViewHeight:(double)arg1;	// IMP=0x0000000000749b2b
- (id)initWithFrame:(struct CGRect)arg1 topViewHeight:(double)arg2;	// IMP=0x0000000000749578

@end

