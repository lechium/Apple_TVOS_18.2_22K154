//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarDisplayableContainerView, _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillBackgroundActivityItem
{
    _UIStatusBarPillView *_combinedView;	// 40 = 0x28
    _UIStatusBarDisplayableContainerView *_iconsView;	// 48 = 0x30
    struct CGSize _pillSize;	// 56 = 0x38
}

+ (_Bool)shouldKeepIconVisibleForActivityType:(long long)arg1;	// IMP=0x0040000001199042
+ (_Bool)_identifierContainsSecondaryItemImage:(id)arg1;	// IMP=0x00400000011984b6
+ (_Bool)_identifierContainsItemImage:(id)arg1;	// IMP=0x004000000119842c
+ (id)pillCombinedDisplayIdentifier;	// IMP=0x0040000001198413
- (void).cxx_destruct;	// IMP=0x000000000119930f
@property(retain, nonatomic) _UIStatusBarDisplayableContainerView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) _UIStatusBarPillView *combinedView; // @synthesize combinedView=_combinedView;
@property(nonatomic) struct CGSize pillSize; // @synthesize pillSize=_pillSize;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;	// IMP=0x000000000119922c
- (id)viewForIdentifier:(id)arg1;	// IMP=0x000000000119917e
- (void)_create_iconsView;	// IMP=0x0000000001199124
- (void)_create_combinedView;	// IMP=0x0000000001199093
- (_Bool)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2;	// IMP=0x000000000119902e
- (id)_backgroundColorForActivityType:(long long)arg1;	// IMP=0x0000000001198f86
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000001198d56
- (id)_backgroundActivityViewForIdentifier:(id)arg1;	// IMP=0x0000000001198ca8
- (id)_textLabelForActivityType:(long long)arg1;	// IMP=0x0000000001198c58
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000001198540

@end

