//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIALAConfigurationHistory
{
    _Bool _hasEstablishedAlignmentValues;	// 8 = 0x8
    _Bool _inAlignmentLayoutUpdateSection;	// 9 = 0x9
    unsigned long long _alignment;	// 16 = 0x10
}

@property(nonatomic, getter=isInAlignmentLayoutUpdateSection) _Bool inAlignmentLayoutUpdateSection; // @synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection;
@property(nonatomic) _Bool hasEstablishedAlignmentValues; // @synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000015a153c

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(nonatomic) long long axis;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(readonly) Class superclass;

@end

