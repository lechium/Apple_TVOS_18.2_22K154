//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView, _UIFocusEnvironmentContainerTuple;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContainerProxy : NSObject
{
    _Bool _allowsLazyLoading;	// 8 = 0x8
    _Bool _shouldCreateRegionForOwningItem;	// 9 = 0x9
    _Bool _shouldCreateRegionForGuideBehavior;	// 10 = 0xa
    _UIFocusEnvironmentContainerTuple *_environmentContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000960a76
@property(retain, nonatomic) _UIFocusEnvironmentContainerTuple *environmentContainer; // @synthesize environmentContainer=_environmentContainer;
@property(nonatomic) _Bool shouldCreateRegionForGuideBehavior; // @synthesize shouldCreateRegionForGuideBehavior=_shouldCreateRegionForGuideBehavior;
@property(nonatomic) _Bool shouldCreateRegionForOwningItem; // @synthesize shouldCreateRegionForOwningItem=_shouldCreateRegionForOwningItem;
@property(nonatomic) _Bool allowsLazyLoading; // @synthesize allowsLazyLoading=_allowsLazyLoading;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000960972
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x00000000009608ba
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusOcclusion

@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusInteraction

- (struct CGRect)_clippingRectInCoordinateSpace:(id)arg1;	// IMP=0x000000000096079f
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000960712
- (void)updateFocusIfNeeded;	// IMP=0x00000000009606d5
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000960665
- (void)_didUpdateFocusInContext:(id)arg1;	// IMP=0x00000000009605d4
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000960555
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009602d9
- (id)_itemContainer;	// IMP=0x00000000009602c3
@property(readonly, nonatomic) id <UIFocusEnvironment> owningEnvironment;
- (id)_focusSystem;	// IMP=0x0000000000960291
- (_Bool)_ui_isUIFocusRegionContainerProxy;	// IMP=0x0000000000960289
- (id)initWithEnvironmentContainer:(id)arg1;	// IMP=0x0000000000960197
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;	// IMP=0x000000000096013d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) _Bool focusDirectionFlippedHorizontally;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isFocusDirectionFlippedHorizontally

@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N,G_linearFocusMovementSequences

@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N,G_preferredFocusMovementStyle

@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,W,N

@property(readonly) Class superclass;

@end

