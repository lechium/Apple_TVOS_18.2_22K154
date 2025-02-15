//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIBarButtonItem;
@protocol _UIButtonBarLayoutMetricsData;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayout : NSObject
{
    id <_UIButtonBarLayoutMetricsData> _layoutMetrics;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000034d445
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
- (id)description;	// IMP=0x000000000034d396
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x000000000034d31c
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x000000000034d316
- (void)addLayoutGuides:(id)arg1;	// IMP=0x000000000034d2c4
- (void)_addLayoutGuides:(id)arg1;	// IMP=0x000000000034d2be
- (void)addLayoutViews:(id)arg1;	// IMP=0x000000000034d26c
- (void)_addLayoutViews:(id)arg1;	// IMP=0x000000000034d266
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;	// IMP=0x000000000034d25d
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;	// IMP=0x000000000034d195
- (void)setUseGroupSizing:(_Bool)arg1;	// IMP=0x000000000034d18f
- (_Bool)useGroupSizing;	// IMP=0x000000000034d187
- (void)setSuppressSpacing:(_Bool)arg1;	// IMP=0x000000000034d181
- (_Bool)suppressSpacing;	// IMP=0x000000000034d179
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;	// IMP=0x000000000034d173
- (_Bool)compact;	// IMP=0x000000000034d14b
- (void)configure;	// IMP=0x000000000034d10d
- (id)_metricsData;	// IMP=0x000000000034d0ff
@property(readonly, nonatomic) NSArray *subLayouts;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property(readonly, nonatomic) _Bool isGroupLayout;
@property(readonly, nonatomic) _Bool isSpaceLayout;
- (void)_configure;	// IMP=0x000000000034d0d9
- (_Bool)_shouldBeDirty;	// IMP=0x000000000034d0d1
- (_Bool)shouldHorizontallyCenterView:(id)arg1;	// IMP=0x000000000034d0c9
- (id)initWithLayoutMetrics:(id)arg1;	// IMP=0x000000000034d051
- (id)init;	// IMP=0x000000000034d026

@end

