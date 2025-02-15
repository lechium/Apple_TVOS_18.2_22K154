//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface SLReplicatorView : UIView
{
    UIView *_targetView;	// 8 = 0x8
    long long _instanceCount;	// 16 = 0x10
    double _replicationPaddingX;	// 24 = 0x18
    NSLayoutConstraint *_widthConstraint;	// 32 = 0x20
    NSLayoutConstraint *_heightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_targetViewLeadingConstraint;	// 48 = 0x30
    NSLayoutConstraint *_targetViewTopConstraint;	// 56 = 0x38
}

+ (Class)layerClass;	// IMP=0x006000000001189a
- (void).cxx_destruct;	// IMP=0x000000000001245b
@property(retain, nonatomic) NSLayoutConstraint *targetViewTopConstraint; // @synthesize targetViewTopConstraint=_targetViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *targetViewLeadingConstraint; // @synthesize targetViewLeadingConstraint=_targetViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) double replicationPaddingX; // @synthesize replicationPaddingX=_replicationPaddingX;
@property(nonatomic) long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void)updateConstraints;	// IMP=0x0000000000011c0a
- (void)_updateReplicatorLayer;	// IMP=0x0000000000011a9c
- (void)updateInstanceCount:(unsigned long long)arg1 replicationPaddingX:(double)arg2;	// IMP=0x00000000000119a3
- (id)initWithFrame:(struct CGRect)arg1 targetView:(id)arg2;	// IMP=0x00000000000118ab

@end

