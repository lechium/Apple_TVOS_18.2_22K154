//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKeyboardDockItem;
@protocol UIKeyboardDockViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockView : UIView
{
    id <UIKeyboardDockViewDelegate> _delegate;	// 8 = 0x8
    UIKeyboardDockItem *_leftDockItem;	// 16 = 0x10
    UIKeyboardDockItem *_rightDockItem;	// 24 = 0x18
    UIKeyboardDockItem *_centerDockItem;	// 32 = 0x20
}

+ (id)dockViewHomeGestureExclusionZones;	// IMP=0x0010000000e3b550
+ (CDStruct_b7523c42)_itemFramesForBoundingSize:(struct CGSize)arg1;	// IMP=0x0010000000e3b13d
+ (long long)_currentInterfaceOrientation;	// IMP=0x0010000000e3b0db
- (void).cxx_destruct;	// IMP=0x0000000000e3ca53
@property(retain, nonatomic) UIKeyboardDockItem *centerDockItem; // @synthesize centerDockItem=_centerDockItem;
@property(retain, nonatomic) UIKeyboardDockItem *rightDockItem; // @synthesize rightDockItem=_rightDockItem;
@property(retain, nonatomic) UIKeyboardDockItem *leftDockItem; // @synthesize leftDockItem=_leftDockItem;
@property(nonatomic) __weak id <UIKeyboardDockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_keyboardLongPressInteractionRegions;	// IMP=0x0000000000e3c80a
- (id)_keyboardLayoutView;	// IMP=0x0000000000e3c765
- (void)layoutSubviews;	// IMP=0x0000000000e3bd49
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000e3bd11
- (void)_didReceiveHandBiasChangeNotification:(id)arg1;	// IMP=0x0000000000e3bcff
- (id)_dockItemWithButton:(id)arg1;	// IMP=0x0000000000e3b990
- (void)_configureDockItem:(id)arg1;	// IMP=0x0000000000e3b8d3
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e3b807
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e3b762
- (void)dealloc;	// IMP=0x0000000000e3b6e0

@end

