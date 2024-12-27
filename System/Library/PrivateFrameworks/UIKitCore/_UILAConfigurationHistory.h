//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UILAConfigurationHistory : NSObject
{
    NSMutableSet *_newlyHiddenItems;	// 8 = 0x8
    NSMutableSet *_newlyUnhiddenItems;	// 16 = 0x10
    NSMutableSet *_invalidBaselineConstraints;	// 24 = 0x18
    _Bool _layoutFillsCanvas;	// 32 = 0x20
    _Bool _layoutUsesCanvasMarginsWhenFilling;	// 33 = 0x21
    _Bool _hasEstablishedBaseValues;	// 34 = 0x22
    _Bool _inLayoutArrangementUpdateSection;	// 35 = 0x23
    long long _axis;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000015a5df4
@property(nonatomic, getter=isInLayoutArrangementUpdateSection) _Bool inLayoutArrangementUpdateSection; // @synthesize inLayoutArrangementUpdateSection=_inLayoutArrangementUpdateSection;
@property(nonatomic) _Bool hasEstablishedBaseValues; // @synthesize hasEstablishedBaseValues=_hasEstablishedBaseValues;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints; // @synthesize invalidBaselineConstraints=_invalidBaselineConstraints;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems; // @synthesize _newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems; // @synthesize _newlyHiddenItems;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void)_invalidateBaselineConstraint:(id)arg1;	// IMP=0x00000000015a5d20
- (id)init;	// IMP=0x00000000015a5cab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000015a5bcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

