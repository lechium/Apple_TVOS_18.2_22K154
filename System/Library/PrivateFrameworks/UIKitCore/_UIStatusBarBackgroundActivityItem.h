//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarActivityIconView, _UIStatusBarImageView, _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem
{
    _UIStatusBarPillView *_backgroundView;	// 8 = 0x8
    _UIStatusBarActivityIconView *_iconView;	// 16 = 0x10
    _UIStatusBarImageView *_secondaryIconView;	// 24 = 0x18
    long long _previousType;	// 32 = 0x20
}

+ (double)_fontSizeAdjustmentForActivityType:(long long)arg1;	// IMP=0x0040000001197bfc
+ (double)_verticalOffsetForActivityType:(long long)arg1;	// IMP=0x0040000001197b8f
+ (_Bool)_identifierContainsSecondaryItemImage:(id)arg1;	// IMP=0x0040000001196af3
+ (_Bool)_identifierContainsItemImage:(id)arg1;	// IMP=0x0040000001196a95
+ (id)secondaryIconDisplayIdentifier;	// IMP=0x00400000011968e9
+ (id)backgroundDisplayIdentifier;	// IMP=0x00400000011968d0
- (void).cxx_destruct;	// IMP=0x00000000011983d1
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // @synthesize secondaryIconView=_secondaryIconView;
@property(retain, nonatomic) _UIStatusBarActivityIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) _UIStatusBarPillView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (_Bool)crossfadeForUpdate:(id)arg1;	// IMP=0x00000000011982b6
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x00000000011981ff
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000001198148
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000001198060
- (id)imageView;	// IMP=0x000000000119804e
- (void)_create_secondaryIconView;	// IMP=0x0000000001197ff4
- (void)_create_iconView;	// IMP=0x0000000001197f63
- (void)_create_backgroundView;	// IMP=0x0000000001197ed2
- (id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001197e41
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001197e04
- (_Bool)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001197dd0
- (id)_backgroundColorForActivityType:(long long)arg1;	// IMP=0x0000000001197c1f
- (id)secondaryImageForUpdate:(id)arg1;	// IMP=0x0000000001197aca
- (id)_secondarySystemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000001197ac2
- (id)imageForUpdate:(id)arg1;	// IMP=0x00000000011977da
- (id)_textLabelForActivityType:(long long)arg1;	// IMP=0x00000000011977c3
- (id)_imageNameForActivityType:(long long)arg1;	// IMP=0x0000000001197776
- (id)_systemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000001197757
- (id)imageNameForUpdate:(id)arg1;	// IMP=0x00000000011976c7
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000001197637
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000001197575
- (void)updatedDisplayItemsWithData:(id)arg1;	// IMP=0x00000000011974d6
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000001196c2b
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000001196b51
- (id)_backgroundActivityViewForIdentifier:(id)arg1;	// IMP=0x0000000001196a14
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000001196959
- (id)indicatorEntryKey;	// IMP=0x0000000001196945
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000001196902

@end

