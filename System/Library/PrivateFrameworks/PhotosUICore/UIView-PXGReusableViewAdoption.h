//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, PXViewSpec, UIScrollView;

@interface UIView (PXGReusableViewAdoption)
+ (struct CGSize)px_videoOverlayButtonSizeWithConfiguration:(id)arg1;	// IMP=0x00100000006e24a6
+ (struct CGSize)px_videoOverlayButtonSize;	// IMP=0x00100000006e2440
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1;	// IMP=0x00100000006e2429
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;	// IMP=0x00100000006e23a4
+ (id)px_videoOverlayButtonWithConfiguration:(id)arg1;	// IMP=0x00100000006e22e5
+ (void)px_preloadResourcesForVideoOverlayButtonWithStyle:(long long)arg1;	// IMP=0x00100000006e2211
+ (id)px_contentLoadingView;	// IMP=0x0010000000e8890c
+ (id)px_circularGlyphViewWithName:(id)arg1 prefersMulticolor:(_Bool)arg2 backgroundColor:(id)arg3;	// IMP=0x0010000000e88691
+ (id)px_circularGlyphViewWithName:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0010000000e88673
+ (void)px_animateUsingDefaultDampedEaseInEaseOutWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000e88542
+ (void)_px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withInitialVelocity:(struct PXDisplayVelocity)arg5 usingSpringAnimation:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000e877fb
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PXDisplayVelocity)arg6 options:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000e87763
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PXDisplayVelocity)arg8 options:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0010000000e876c1
@property(readonly, nonatomic) _Bool isFloating;
- (_Bool)shouldReloadForUserData:(id)arg1;	// IMP=0x00100000005b9276
@property(readonly, nonatomic) _Bool canUnloadWhenInvisible;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;	// IMP=0x00100000005b91fa
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_4f725fed *)arg2 info:(CDStruct_12471299 *)arg3 style:(CDStruct_a79e78a9 *)arg4 textureInfo:(CDStruct_37a3040a *)arg5 resizableCapInsets:(CDStruct_818bb265)arg6 reusableViewInfo:(id)arg7 screenScale:(double)arg8 separateLayers:(_Bool)arg9;	// IMP=0x00100000005b86cf
- (void)pxg_prepareForReuse;	// IMP=0x00100000005b869f
- (void)pxg_becomeReusable;	// IMP=0x00100000005b860e
- (void)pxg_removeFromSuperview;	// IMP=0x00100000005b85fc
- (_Bool)pxg_hasSuperview;	// IMP=0x00100000005b85c9
- (_Bool)pxg_isChildOfView:(id)arg1;	// IMP=0x00100000005b856b
- (void)pxg_insertIntoView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00100000005b8550
- (void)pxg_addToHostingView:(id)arg1;	// IMP=0x00100000005b84c4
- (_Bool)pxg_isChildOfScrollViewController:(id)arg1;	// IMP=0x00100000005b84a9
- (void)pxg_addToScrollViewController:(id)arg1;	// IMP=0x00100000005b841d
@property(readonly, nonatomic) UIScrollView *px_rootScrollView;
@property(readonly, nonatomic) unsigned long long px_containerScrollViewsScrollableAxes;
- (unsigned long long)px_scrollableAxesAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000073190b
- (_Bool)px_areAllContainerScrollViewsScrolledAtEdge:(unsigned int)arg1;	// IMP=0x0010000000731826
- (id)_px_leafScrollViewAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000007315d5
- (_Bool)px_areAllScrollViewsContainingPoint:(struct CGPoint)arg1 scrolledAtEdge:(unsigned int)arg2;	// IMP=0x001000000073150e
@property(retain, nonatomic, setter=px_setSpec:) PXViewSpec *px_spec;
- (void)px_transferToSuperview:(id)arg1;	// IMP=0x0010000000e8728a
- (struct CGAffineTransform)px_convertTransform:(struct CGAffineTransform)arg1 toView:(id)arg2;	// IMP=0x0010000000e8722a
- (struct CGAffineTransform)px_convertTransform:(struct CGAffineTransform)arg1 fromView:(id)arg2;	// IMP=0x0010000000e86ec8
- (id)px_ancestorViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e86e50
- (id)px_ancestorViewOfClass:(Class)arg1;	// IMP=0x0010000000e86df2
@property(readonly, nonatomic) UIView *px_rootView;
@property(readonly, nonatomic) _Bool px_hasHiddenAncestor;
- (void)px_addFullBoundsSubview:(id)arg1;	// IMP=0x0010000000e86a34
@property(readonly, nonatomic) struct UIEdgeInsets px_peripheryInsets;
@property(readonly, nonatomic) _Bool px_intersectsWindowBounds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

