//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CABackdropLayer, CAFilter, NSHashTable, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface AVCABackdropLayerView : UIView
{
    _Bool _forceLowQualityEffect;	// 8 = 0x8
    _Bool _overrideBlurOnlyFilter;	// 9 = 0x9
    double _blurRadius;	// 16 = 0x10
    UIImage *_variableBlurMaskImage;	// 24 = 0x18
    UIColor *_customBackgroundColor;	// 32 = 0x20
    AVCABackdropLayerView *_groupLeader;	// 40 = 0x28
    NSHashTable *_dependents;	// 48 = 0x30
    long long _activeBackdropEffect;	// 56 = 0x38
    CAFilter *_blurFilter;	// 64 = 0x40
    CAFilter *_variableBlurFilter;	// 72 = 0x48
}

+ (id)reducedTransparencyColor;	// IMP=0x006000000003e4ed
+ (id)colorMatrixFilter;	// IMP=0x006000000003e4bd
+ (id)averageFilter;	// IMP=0x006000000003e48d
+ (id)blurFilter;	// IMP=0x006000000003e45d
+ (Class)layerClass;	// IMP=0x006000000003e44c
- (void).cxx_destruct;	// IMP=0x000000000003e343
@property(retain, nonatomic) CAFilter *variableBlurFilter; // @synthesize variableBlurFilter=_variableBlurFilter;
@property(retain, nonatomic) CAFilter *blurFilter; // @synthesize blurFilter=_blurFilter;
@property(nonatomic) long long activeBackdropEffect; // @synthesize activeBackdropEffect=_activeBackdropEffect;
@property(readonly, nonatomic) NSHashTable *dependents; // @synthesize dependents=_dependents;
@property(nonatomic) __weak AVCABackdropLayerView *groupLeader; // @synthesize groupLeader=_groupLeader;
@property(copy, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(retain, nonatomic) UIImage *variableBlurMaskImage; // @synthesize variableBlurMaskImage=_variableBlurMaskImage;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) _Bool overrideBlurOnlyFilter; // @synthesize overrideBlurOnlyFilter=_overrideBlurOnlyFilter;
@property(nonatomic) _Bool forceLowQualityEffect; // @synthesize forceLowQualityEffect=_forceLowQualityEffect;
- (id)_blurRadiusNSNumberValue;	// IMP=0x000000000003e221
- (void)_enumerateDependents:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e0db
- (void)_ensureDependents;	// IMP=0x000000000003e090
- (void)_updateFilters;	// IMP=0x000000000003d341
- (void)_updateVariableBlurFilterMaskImageIfNeeded;	// IMP=0x000000000003d294
- (void)_updateBlurFilterRadiusIfNeeded;	// IMP=0x000000000003d1f8
- (void)_setUpVariableBlurFilterIfNeeded;	// IMP=0x000000000003d131
- (void)_setUpBlurFilterIfNeeded;	// IMP=0x000000000003d001
- (void)removeDependent:(id)arg1;	// IMP=0x000000000003cd75
- (void)addDependent:(id)arg1;	// IMP=0x000000000003ccb4
- (void)updateGroupLeader;	// IMP=0x000000000003cbef
@property(nonatomic, getter=isCaptureOnly) _Bool captureOnly;
- (void)updateActiveBackdropEffectIfGroupLeader;	// IMP=0x000000000003c7cd
- (void)didMoveToSuperview;	// IMP=0x000000000003c78c
- (void)didMoveToWindow;	// IMP=0x000000000003c74b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000003c743
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000003c73b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003c6c7

// Remaining properties
@property(readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

@end

