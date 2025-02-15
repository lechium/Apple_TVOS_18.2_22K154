//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIInputWindowController;

__attribute__((visibility("hidden")))
@interface UIInputWindowControllerHosting : NSObject
{
    NSMutableArray *_hostingItems;	// 8 = 0x8
    unsigned long long _currentState;	// 16 = 0x10
    _Bool _requiresConstraintUpdate;	// 24 = 0x18
    int _extraHostsRequired;	// 28 = 0x1c
    UIInputWindowController *_owner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000e0e873
@property(nonatomic) _Bool requiresConstraintUpdate; // @synthesize requiresConstraintUpdate=_requiresConstraintUpdate;
@property(nonatomic) int extraHostsRequired; // @synthesize extraHostsRequired=_extraHostsRequired;
@property(nonatomic) __weak UIInputWindowController *owner; // @synthesize owner=_owner;
- (void)removeMatchMoveAnimationIfNeeded;	// IMP=0x0000000000e0e7ef
- (id)scrollTrackingView;	// IMP=0x0000000000e0e79a
- (unsigned long long)indexOfHost:(id)arg1;	// IMP=0x0000000000e0e784
- (_Bool)host:(id)arg1 isForPurpose:(unsigned long long)arg2;	// IMP=0x0000000000e0e6e3
- (id)expectedPlacementForHost:(id)arg1;	// IMP=0x0000000000e0e5bd
- (id)placementForHost:(id)arg1;	// IMP=0x0000000000e0e525
- (id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2;	// IMP=0x0000000000e0e471
- (struct CGRect)visibleFrame;	// IMP=0x0000000000e0e413
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000000e0e2c0
- (void)updateViewSizingConstraints;	// IMP=0x0000000000e0e2a7
- (void)removeInputAssistantHostView;	// IMP=0x0000000000e0e28e
- (void)clearInputAssistantViewEdgeConstraints;	// IMP=0x0000000000e0e275
- (void)clearInputAccessoryViewEdgeConstraints;	// IMP=0x0000000000e0e25c
- (void)resetInputViewVisibility;	// IMP=0x0000000000e0e243
- (void)clearInputViewEdgeConstraints;	// IMP=0x0000000000e0e22a
- (void)_updateBackdropViews;	// IMP=0x0000000000e0e211
- (void)layoutIfNeeded;	// IMP=0x0000000000e0e058
- (void)performForInputAccessoryBackdropViews:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e0ded5
- (void)setNeedsLayout;	// IMP=0x0000000000e0dd5a
- (void)removeAllAnimations;	// IMP=0x0000000000e0dceb
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;	// IMP=0x0000000000e0db87
- (void)updateEmptyHeightConstraint;	// IMP=0x0000000000e0db6e
- (void)updateConstraintInsets;	// IMP=0x0000000000e0db55
- (void)resetBackdropHeight;	// IMP=0x0000000000e0db3c
- (void)initializeTranslateGestureRecognizerIfNecessary;	// IMP=0x0000000000e0db23
- (void)updateCombinedBackdropViewAnimated:(_Bool)arg1 forKeyboardUp:(_Bool)arg2;	// IMP=0x0000000000e0d9c8
- (void)updateViewConstraints;	// IMP=0x0000000000e0d84e
- (struct UIEdgeInsets)_inputViewPadding;	// IMP=0x0000000000e0d3fd
- (id)itemForPurpose:(unsigned long long)arg1;	// IMP=0x0000000000e0d34c
- (void)reloadForPlacementForInputViewSet:(id)arg1;	// IMP=0x0000000000e0cc5e
- (void)unloadForPlacement;	// IMP=0x0000000000e0cc41
- (_Bool)useCrescendoHostingItem;	// IMP=0x0000000000e0ca6b
@property(readonly, retain, nonatomic) NSArray *allHostingItems;
- (void)updateBackdropViewForSplitKeyboard;	// IMP=0x0000000000e0c9b3
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000e0c876

@end

