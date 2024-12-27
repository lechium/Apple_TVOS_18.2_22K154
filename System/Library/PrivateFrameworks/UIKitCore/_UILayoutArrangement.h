//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, UIView, _UILAConfigurationHistory, _UILayoutSpacer;
@protocol _UILAPropertySource;

__attribute__((visibility("hidden")))
@interface _UILayoutArrangement : NSObject
{
    NSMutableSet *_incomingItems;	// 8 = 0x8
    NSMutableSet *_outgoingItems;	// 16 = 0x10
    NSMutableSet *_hiddenItems;	// 24 = 0x18
    NSMutableSet *_newlyHiddenItems;	// 32 = 0x20
    NSMutableSet *_newlyUnhiddenItems;	// 40 = 0x28
    NSMutableSet *_invalidBaselineConstraints;	// 48 = 0x30
    NSMutableArray *_canvasConnectionConstraints;	// 56 = 0x38
    _Bool _awaitingAnimationLayoutPass;	// 64 = 0x40
    _Bool _layoutFillsCanvas;	// 65 = 0x41
    _Bool _layoutUsesCanvasMarginsWhenFilling;	// 66 = 0x42
    _UILAConfigurationHistory *_unanimatedConfigurationTarget;	// 72 = 0x48
    NSMutableArray *_mutableItems;	// 80 = 0x50
    _UILayoutSpacer *_spanningLayoutGuide;	// 88 = 0x58
    _UILAConfigurationHistory *_configurationHistory;	// 96 = 0x60
    UIView *_canvas;	// 104 = 0x68
    long long _axis;	// 112 = 0x70
}

+ (Class)_configurationHistoryClass;	// IMP=0x00100000015a5e27
- (void).cxx_destruct;	// IMP=0x00000000015aa646
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) __weak UIView *canvas; // @synthesize canvas=_canvas;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints; // @synthesize invalidBaselineConstraints=_invalidBaselineConstraints;
@property(readonly, retain, nonatomic) _UILayoutSpacer *_spanningLayoutGuide; // @synthesize _spanningLayoutGuide;
@property(retain, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems; // @synthesize _mutableItems;
@property(readonly, nonatomic) _Bool _awaitingAnimationLayoutPass; // @synthesize _awaitingAnimationLayoutPass;
@property(retain, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget; // @synthesize _unanimatedConfigurationTarget;
@property(readonly, copy) NSString *description;
- (void)_updateCanvasConnectionConstraintsIfNecessary;	// IMP=0x00000000015a9a5d
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;	// IMP=0x00000000015a9a55
- (_Bool)_usesCenteringConnectionConstraint;	// IMP=0x00000000015a9a4d
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;	// IMP=0x00000000015a9a45
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;	// IMP=0x00000000015a9887
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;	// IMP=0x00000000015a8c98
- (void)_removeSpanningLayoutGuide;	// IMP=0x00000000015a8c1f
- (_Bool)_spanningGuideConstraintsNeedUpdate;	// IMP=0x00000000015a8ad3
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;	// IMP=0x00000000015a8acb
- (id)_viewOrGuideForLocationAttribute:(long long)arg1;	// IMP=0x00000000015a8a01
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;	// IMP=0x00000000015a8938
- (void)_updateArrangementConstraints;	// IMP=0x00000000015a88b6
- (void)_clearAllConstraintsArrays;	// IMP=0x00000000015a8888
- (void)_clearCanvasConnectionConstraints;	// IMP=0x00000000015a8843
- (void)_updateConfigurationHistory;	// IMP=0x00000000015a85aa
- (_Bool)_hasStaleConfiguration;	// IMP=0x00000000015a83d2
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;	// IMP=0x00000000015a7e3f
- (void)_didEvaluateMultilineHeightForView:(id)arg1;	// IMP=0x00000000015a7e39
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;	// IMP=0x00000000015a7e33
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;	// IMP=0x00000000015a7e2b
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;	// IMP=0x00000000015a7e25
- (long long)_centerAttributeForCanvasConnections;	// IMP=0x00000000015a7e05
- (long long)_minAttributeForCanvasConnections;	// IMP=0x00000000015a7de2
- (long long)_dimensionAttributeForCurrentAxis;	// IMP=0x00000000015a7dc2
- (id)_baselineDependentConstraints;	// IMP=0x00000000015a7dba
- (void)_hasBaselineChangedNotification:(id)arg1;	// IMP=0x00000000015a76bd
- (void)_invalidateBaselineConstraint:(id)arg1;	// IMP=0x00000000015a7663
- (void)_hasBaselineChangedNotificationRequirementDidChange;	// IMP=0x00000000015a732f
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;	// IMP=0x00000000015a7327
- (_Bool)_itemWantsLayoutAsIfVisible:(id)arg1;	// IMP=0x00000000015a7160
- (void)_visibilityParameterChangedForItem:(id)arg1;	// IMP=0x00000000015a707b
- (void)removeItem:(id)arg1;	// IMP=0x00000000015a6fc5
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000015a6cee
- (void)addItem:(id)arg1;	// IMP=0x00000000015a6c5a
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_hiddenItems;
@property(readonly, nonatomic) NSSet *_outgoingItems;
@property(readonly, nonatomic) NSSet *_incomingItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)init;	// IMP=0x00000000015a6b6a
- (id)initWithItems:(id)arg1;	// IMP=0x00000000015a688a
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;	// IMP=0x00000000015a6864
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x00000000015a67c1
- (void)_setLayoutFillsCanvas:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x00000000015a6707
- (void)_setAxis:(long long)arg1 notify:(_Bool)arg2;	// IMP=0x00000000015a6621
@property(readonly, nonatomic) id <_UILAPropertySource> _propertySource;
- (void)_trackChangesWithConfigBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000015a64f4
- (void)_registerAnimationRequest;	// IMP=0x00000000015a648d
- (void)_createUnanimatedConfigurationTargetIfNecessary;	// IMP=0x00000000015a6422
@property(readonly, retain, nonatomic) _UILAConfigurationHistory *_configurationHistory; // @synthesize _configurationHistory;
- (long long)_axisForSpanningLayoutGuide;	// IMP=0x00000000015a607b
- (_Bool)_spanningLayoutGuideAlwaysUsesFittingConstraint;	// IMP=0x00000000015a6069
- (float)_spanningLayoutGuideFittingPriority;	// IMP=0x00000000015a6040
- (id)_identifierForSpanningLayoutGuide;	// IMP=0x00000000015a6033
- (_Bool)_allItemsHidden;	// IMP=0x00000000015a5f71
- (id)_spanningLayoutGuideCreateIfNecessary;	// IMP=0x00000000015a5f30
- (void)_createSpanningLayoutGuide;	// IMP=0x00000000015a5e2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

