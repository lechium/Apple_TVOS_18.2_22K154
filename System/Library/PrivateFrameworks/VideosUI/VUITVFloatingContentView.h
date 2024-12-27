//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFloatingContentView.h>

@class NSString, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface VUITVFloatingContentView : _UIFloatingContentView
{
    double _shadowAlpha;	// 8 = 0x8
    UIImage *_shadowCardImage;	// 16 = 0x10
    UIView *_shadowView;	// 24 = 0x18
    struct CGSize _shadowCardSize;	// 32 = 0x20
    struct CGRect _shadowViewFrame;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001261c4
@property(nonatomic) struct CGRect shadowViewFrame; // @synthesize shadowViewFrame=_shadowViewFrame;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImage *shadowCardImage; // @synthesize shadowCardImage=_shadowCardImage;
@property(nonatomic) struct CGSize shadowCardSize; // @synthesize shadowCardSize=_shadowCardSize;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000000125f7e
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;	// IMP=0x0000000000125f78
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000125f72
- (void)layoutSubviews;	// IMP=0x0000000000125f10
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000125d03
- (void)computeShadowFrame;	// IMP=0x0000000000125b34
- (void)setBackgroundColorForDefault:(id)arg1 highlight:(id)arg2 focus:(id)arg3;	// IMP=0x00000000001258d1
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000012587f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000012570a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

