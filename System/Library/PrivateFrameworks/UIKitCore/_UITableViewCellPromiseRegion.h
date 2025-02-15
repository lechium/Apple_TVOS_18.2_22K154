//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSString, UIFocusEffect, UITableView, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UITableViewCellPromiseRegion : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000135c88b
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x000000000135c65e
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x000000000135c5e4
- (_Bool)_isLazyFocusItemContainer;	// IMP=0x000000000135c5dc
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x000000000135c4f4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000135c4ee
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000135c4e6
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (void)updateFocusIfNeeded;	// IMP=0x000000000135c489
- (void)setNeedsFocusUpdate;	// IMP=0x000000000135c433
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusInteraction

@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool canBecomeFocused;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;	// IMP=0x000000000135c376
- (id)_focusRegionGuides;	// IMP=0x000000000135c36e
- (id)_focusRegionView;	// IMP=0x000000000135c366
- (_Bool)_isTransparentFocusRegion;	// IMP=0x000000000135c35e
- (id)_fulfillPromisedFocusRegion;	// IMP=0x000000000135c2ff
- (_Bool)_isPromiseFocusRegion;	// IMP=0x000000000135c2f7
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000135c2ef
- (_Bool)_legacy_isEligibleForFocusInteraction;	// IMP=0x000000000135c2dd
- (struct CGRect)_focusRegionFrame;	// IMP=0x000000000135c24f
- (id)_focusRegionFocusSystem;	// IMP=0x000000000135c1ff
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusOcclusion

@property(readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) _Bool focusDirectionFlippedHorizontally;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isFocusDirectionFlippedHorizontally

@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIFocusEffect",?,R,C,N

@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) long long focusGroupPriority;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) long long focusItemDeferralMode;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

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

