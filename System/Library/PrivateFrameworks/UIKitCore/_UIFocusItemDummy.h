//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusItemDummy : NSObject
{
    id <UIFocusEnvironment> _parentFocusEnvironment;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000014b9eaa
@property(nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment; // @synthesize parentFocusEnvironment=_parentFocusEnvironment;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000014b9e4f
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000014b9e47
- (void)updateFocusIfNeeded;	// IMP=0x00000000014b9e41
- (void)setNeedsFocusUpdate;	// IMP=0x00000000014b9e3b
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) _Bool canBecomeFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
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

@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,W,N

@property(readonly) Class superclass;

@end

