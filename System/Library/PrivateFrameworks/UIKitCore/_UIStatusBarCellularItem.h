//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarImageView, _UIStatusBarStringView;
@protocol _UIStatusBarCellularItemTypeStringProvider;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularItem : _UIStatusBarItem
{
    _Bool _showsDisabledSignalBars;	// 8 = 0x8
    _Bool _marqueeServiceName;	// 9 = 0x9
    id <_UIStatusBarCellularItemTypeStringProvider> _typeStringProvider;	// 16 = 0x10
    _UIStatusBarStringView *_serviceNameView;	// 24 = 0x18
    _UIStatusBarCellularSignalView *_signalView;	// 32 = 0x20
    _UIStatusBarStringView *_networkTypeView;	// 40 = 0x28
    _UIStatusBarImageView *_warningView;	// 48 = 0x30
    _UIStatusBarImageView *_callForwardingView;	// 56 = 0x38
    _UIStatusBarStringView *_rawStringView;	// 64 = 0x40
}

+ (id)rawDisplayIdentifier;	// IMP=0x004000000119d1a5
+ (id)callForwardingDisplayIdentifier;	// IMP=0x004000000119d18c
+ (id)typeDisplayIdentifier;	// IMP=0x004000000119d173
+ (id)nameDisplayIdentifier;	// IMP=0x004000000119d15a
+ (id)warningDisplayIdentifier;	// IMP=0x004000000119d141
+ (id)signalStrengthDisplayIdentifier;	// IMP=0x004000000119d128
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x00400000011d0697
- (void).cxx_destruct;	// IMP=0x000000000119eac8
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *callForwardingView; // @synthesize callForwardingView=_callForwardingView;
@property(retain, nonatomic) _UIStatusBarImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) _UIStatusBarStringView *networkTypeView; // @synthesize networkTypeView=_networkTypeView;
@property(retain, nonatomic) _UIStatusBarCellularSignalView *signalView; // @synthesize signalView=_signalView;
@property(retain, nonatomic) _UIStatusBarStringView *serviceNameView; // @synthesize serviceNameView=_serviceNameView;
@property(nonatomic) __weak id <_UIStatusBarCellularItemTypeStringProvider> typeStringProvider; // @synthesize typeStringProvider=_typeStringProvider;
@property(nonatomic) _Bool marqueeServiceName; // @synthesize marqueeServiceName=_marqueeServiceName;
@property(nonatomic) _Bool showsDisabledSignalBars; // @synthesize showsDisabledSignalBars=_showsDisabledSignalBars;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x000000000119e7ff
- (void)setmarqueeServiceName:(_Bool)arg1;	// IMP=0x000000000119e77d
- (void)_create_rawStringView;	// IMP=0x000000000119e723
- (void)_create_callForwardingView;	// IMP=0x000000000119e692
- (void)_create_warningView;	// IMP=0x000000000119e601
- (void)_create_networkTypeView;	// IMP=0x000000000119e54f
- (void)_create_serviceNameView;	// IMP=0x000000000119e43d
- (void)_create_signalView;	// IMP=0x000000000119e38b
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;	// IMP=0x000000000119e1c5
- (_Bool)_showCallFowardingForEntry:(id)arg1;	// IMP=0x000000000119e1b0
- (id)_stringForCellularType:(long long)arg1;	// IMP=0x000000000119e03d
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000119d77f
- (id)entryForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000119d6d8
- (_Bool)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3 forceShowingDisabledSignalBars:(_Bool)arg4;	// IMP=0x000000000119d444
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x000000000119d37a
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x000000000119d29f
- (id)dependentEntryKeys;	// IMP=0x000000000119d238
@property(readonly, nonatomic) NSString *cellularDataEntryKey;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x000000000119d1be

@end

