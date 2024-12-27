//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@interface UIView (AVAdditions)
@property(nonatomic) double avkit_extendedDynamicRangeGain;
- (void)avkit_setFrame:(struct CGRect)arg1 inLayoutDirection:(long long)arg2;	// IMP=0x003000000003fb3e
- (struct CGRect)avkit_portionOfFrameUnobscuredBySuperviews;	// IMP=0x003000000003f910
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;	// IMP=0x003000000003f8a7
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;	// IMP=0x003000000003f83e
- (struct CGRect)avkit_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint)arg1 aspectRatio:(double)arg2;	// IMP=0x003000000003f81f
- (_Bool)avkit_hasFullScreenLayoutClass;	// IMP=0x003000000003f7db
- (void)avkit_makeSubtreeDisallowGroupBlending;	// IMP=0x003000000003f679
- (_Bool)avkit_isDescendantOfNonPagingScrollView;	// IMP=0x003000000003f635
- (_Bool)avkit_wantsAnimatedViewTransitions;	// IMP=0x003000000003f5fe
- (_Bool)avkit_isInAScrollView;	// IMP=0x003000000003f5ba
- (_Bool)avkit_isBeingScrolledQuickly;	// IMP=0x003000000003f576
- (_Bool)avkit_isBeingScrolled;	// IMP=0x003000000003f532
- (_Bool)avkit_isBeingScrollTested;	// IMP=0x003000000003f4ee
- (id)avkit_backdropGroupLeader;	// IMP=0x003000000003f49e
- (void)avkit_needsUpdateBackdropCaptureViewHidden;	// IMP=0x003000000003f461
- (_Bool)avkit_isBeingPresented;	// IMP=0x003000000003f41d
- (_Bool)avkit_isBeingDismissed;	// IMP=0x003000000003f3d9
- (_Bool)avkit_isCounterRotatedForTransition;	// IMP=0x003000000003f395
- (_Bool)avkit_isVideoGravityFrozen;	// IMP=0x003000000003f351
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;	// IMP=0x003000000003f2ae
- (_Bool)avkit_isCompletelyTransparent;	// IMP=0x003000000003f1f7
- (_Bool)avkit_isInAWindowAndVisible;	// IMP=0x003000000003f09b
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;	// IMP=0x003000000003eb5f
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x003000000003eb13
- (_Bool)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000003ea98
- (_Bool)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000003e91b
- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000003e88a
@end

