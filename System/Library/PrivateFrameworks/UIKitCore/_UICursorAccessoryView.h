//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffectView.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, UITapGestureRecognizer, UIView;
@protocol _UICursorAccessoryItemDataSource;

__attribute__((visibility("hidden")))
@interface _UICursorAccessoryView : UIVisualEffectView
{
    UIView *_activeHighlightBackgroundView;	// 160 = 0xa0
    NSMutableOrderedSet *_displayedIdentifiers;	// 168 = 0xa8
    NSMutableDictionary *_itemViewsByIdentifier;	// 176 = 0xb0
    NSMutableArray *_dividerViews;	// 184 = 0xb8
    UITapGestureRecognizer *_accessoryItemTapGestureRecognizer;	// 192 = 0xc0
    _Bool _visionShouldColorSelection;	// 200 = 0xc8
    id <_UICursorAccessoryItemDataSource> _dataSource;	// 208 = 0xd0
    NSArray *_accessoryIdentifiers;	// 216 = 0xd8
}

+ (double)grayscaleLuminance:(id)arg1;	// IMP=0x00400000012023c0
+ (struct CGSize)largeItemSize;	// IMP=0x0040000001202113
+ (struct CGSize)defaultItemSize;	// IMP=0x0040000001201df1
+ (double)glyphHeight;	// IMP=0x0040000001201dd2
+ (double)glyphWidth;	// IMP=0x0040000001201db7
+ (double)baseFontSize;	// IMP=0x0040000001201bdf
- (void).cxx_destruct;	// IMP=0x0000000001202428
@property(retain, nonatomic) NSArray *accessoryIdentifiers; // @synthesize accessoryIdentifiers=_accessoryIdentifiers;
@property(nonatomic) __weak id <_UICursorAccessoryItemDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_didRecognizeAccessoryTapGestureRecognizer:(id)arg1;	// IMP=0x0000000001201764
- (_Bool)_applyCornerMaskToSelf;	// IMP=0x000000000120175c
- (void)layoutSubviews;	// IMP=0x00000000012016c2
- (void)_layoutHighlightView;	// IMP=0x0000000001201598
- (void)_layoutDisplayedAccessoryItemViews;	// IMP=0x0000000001200f36
- (id)_displayedItemViewAtIndex:(long long)arg1;	// IMP=0x0000000001200e9a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000001200a34
- (void)setAccessoryIdentifiers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000011ffd3d
- (void)_reloadAccessoryItemViews;	// IMP=0x00000000011ffac6
- (void)_scheduleRemovedItemViewCleanup;	// IMP=0x00000000011ffaa8
- (void)_cleanupRemovedItemViews;	// IMP=0x00000000011ff7f4
- (void)setTintColor:(id)arg1;	// IMP=0x00000000011ff77e
- (void)_ensureNumberOfReusableViews:(unsigned long long)arg1 inArray:(id)arg2 ofClass:(Class)arg3;	// IMP=0x00000000011ff5d3
@property(readonly, nonatomic) double activeAccessoryXOffset;
- (struct CGRect)_unionRectActiveItems;	// IMP=0x00000000011ff1ac
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000011fed9d

@end

