//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI24MultiPlayerContainerView : UIView
{
    MISSING_TYPE *floatingView;	// 8 = 0x8
    MISSING_TYPE *layout;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_volumeIndicator;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_dimmingView;	// 32 = 0x20
    MISSING_TYPE *isOutlined;	// 40 = 0x28
    MISSING_TYPE *showsHintText;	// 41 = 0x29
    MISSING_TYPE *hintText;	// 48 = 0x30
    MISSING_TYPE *hintTextTimer;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_editView;	// 64 = 0x40
    MISSING_TYPE *isDimmed;	// 72 = 0x48
    MISSING_TYPE *isPlayerInset;	// 73 = 0x49
    MISSING_TYPE *snapshotView;	// 80 = 0x50
    MISSING_TYPE *isFocusSizeIncreaseEnabled;	// 88 = 0x58
    MISSING_TYPE *isFocusable;	// 89 = 0x59
    MISSING_TYPE *onSelect;	// 96 = 0x60
    MISSING_TYPE *onEditVisibilityChanged;	// 112 = 0x70
    MISSING_TYPE *onEditAction;	// 128 = 0x80
    MISSING_TYPE *isEditing;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_longPressGesture;	// 152 = 0x98
    MISSING_TYPE *playerViewController;	// 160 = 0xa0
    MISSING_TYPE *volumeObserver;	// 168 = 0xa8
    MISSING_TYPE *statusObserver;	// 176 = 0xb0
    MISSING_TYPE *isReadyForDisplayObserver;	// 184 = 0xb8
    MISSING_TYPE *$__lazy_storage_$_singlePressGesture;	// 192 = 0xc0
    MISSING_TYPE *$__lazy_storage_$_tvGestureRecognizer;	// 200 = 0xc8
    MISSING_TYPE *$__lazy_storage_$_menuGestureRecognizer;	// 208 = 0xd0
    MISSING_TYPE *$__lazy_storage_$_playPauseGestureRecognizer;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000085f2d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000086297f
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000862886
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008627c7
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008626eb
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000086263f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000086245c
- (void)singlePressWithGesture:(id)arg1;	// IMP=0x0000000000861ac6
- (void)layoutSubviews;	// IMP=0x0000000000861a39
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008611eb
- (void)longPressWithGesture:(id)arg1;	// IMP=0x000000000085fda0
- (void)playPauseButton:(id)arg1;	// IMP=0x000000000085fca3
- (void)menuButton:(id)arg1;	// IMP=0x000000000085fc1c
- (void)tvButton:(id)arg1;	// IMP=0x000000000085fb81
- (void)dealloc;	// IMP=0x000000000085f2bb
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)accessibilityNotifySnapshotRemoval;	// IMP=0x0000000000862988

@end

