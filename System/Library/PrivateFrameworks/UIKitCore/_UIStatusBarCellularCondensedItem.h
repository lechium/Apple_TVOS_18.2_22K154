//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarCellularNetworkTypeView, _UIStatusBarDualCellularSignalView, _UIStatusBarEmergencySignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem
{
    _Bool _reducesFontSize;	// 72 = 0x48
    _UIStatusBarDualCellularSignalView *_dualSignalView;	// 80 = 0x50
    _UIStatusBarMultilineStringView *_dualNameView;	// 88 = 0x58
    _UIStatusBarStringView *_dualSingleLineNameView;	// 96 = 0x60
    _UIStatusBarStringView *_dualSingleLineNameAndTypeView;	// 104 = 0x68
    _UIStatusBarEmergencySignalView *_sosSignalView;	// 112 = 0x70
    _UIStatusBarCellularNetworkTypeView *_animatedNetworkTypeView;	// 120 = 0x78
}

+ (id)animatedTypeDisplayIdentifier;	// IMP=0x004000000119ebc9
+ (id)sosSignalStrengthDisplayIdentifier;	// IMP=0x004000000119ebb0
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;	// IMP=0x004000000119eb97
+ (id)dualSingleLineNameDisplayIdentifier;	// IMP=0x004000000119eb7e
+ (id)dualNameDisplayIdentifier;	// IMP=0x004000000119eb65
+ (id)dualSignalStrengthDisplayIdentifier;	// IMP=0x004000000119eb4c
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x00400000011d0b4c
- (void).cxx_destruct;	// IMP=0x00000000011a27dc
@property(retain, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView; // @synthesize animatedNetworkTypeView=_animatedNetworkTypeView;
@property(retain, nonatomic) _UIStatusBarEmergencySignalView *sosSignalView; // @synthesize sosSignalView=_sosSignalView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView; // @synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameView; // @synthesize dualSingleLineNameView=_dualSingleLineNameView;
@property(retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property(retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;
@property(nonatomic) _Bool reducesFontSize; // @synthesize reducesFontSize=_reducesFontSize;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000011a2560
- (void)_create_animatedNetworkTypeView;	// IMP=0x00000000011a2506
- (void)_create_sosSignalView;	// IMP=0x00000000011a242e
- (void)_create_dualSingleLineNameAndTypeView;	// IMP=0x00000000011a2341
- (void)_create_dualSingleLineNameView;	// IMP=0x00000000011a2254
- (void)_create_dualNameView;	// IMP=0x00000000011a20a8
- (void)_create_dualSignalView;	// IMP=0x00000000011a1f9b
- (id)entryForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x00000000011a1c73
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;	// IMP=0x00000000011a1861
- (_Bool)_animateServiceType:(long long)arg1 prefixLength:(long long *)arg2 currentType:(long long)arg3;	// IMP=0x00000000011a1829
- (_Bool)_showCallFowardingForEntry:(id)arg1;	// IMP=0x00000000011a175c
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;	// IMP=0x00000000011a15c8
- (struct _NSRange)_nonCondensedFontRangeForEntry:(id)arg1;	// IMP=0x00000000011a1592
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x00000000011a1491
- (id)_stringForCellularType:(long long)arg1;	// IMP=0x00000000011a137c
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x00000000011a11b5
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000119ed98
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x000000000119ec60
- (id)dependentEntryKeys;	// IMP=0x000000000119ec2e
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x000000000119ebe2

@end

