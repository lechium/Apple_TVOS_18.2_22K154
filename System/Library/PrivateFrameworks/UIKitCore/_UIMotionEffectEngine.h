//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMapTable, NSMutableSet, NSString, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEvent, _UIMotionEffectEventProvider;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject
{
    _UIAssociationTable *_effectViewAssociationTable;	// 8 = 0x8
    _UILazyMapTable *_analyzerSettingsToAnalyzers;	// 16 = 0x10
    NSMapTable *_analyzersToEffects;	// 24 = 0x18
    NSMapTable *_suspendedViewsToEffectSets;	// 32 = 0x20
    _UIMotionEffectEventProvider *_eventProvider;	// 40 = 0x28
    _Bool _hasReceivedAtLeastOneEventSinceStarting;	// 48 = 0x30
    _UIMotionEffectEvent *_pendingEvent;	// 56 = 0x38
    struct os_unfair_lock_s _pendingEventLock;	// 64 = 0x40
    CADisplayLink *_displayLink;	// 72 = 0x48
    _Bool _generatingUpdates;	// 80 = 0x50
    NSMutableSet *_suspendReasons;	// 88 = 0x58
    _UIMotionEffectEvent *_lastEvent;	// 96 = 0x60
    _Bool _slowUpdatesEnabled;	// 104 = 0x68
    _Bool _pendingSlowDown;	// 105 = 0x69
    long long _eventProviderStatus;	// 112 = 0x70
    _Bool _allAnalyzersAreCentered;	// 120 = 0x78
    _Bool _hasAppliedAtLeastOneUpdateSinceStarting;	// 121 = 0x79
    _Bool _isPendingReset;	// 122 = 0x7a
    int _thermalNotificationToken;	// 124 = 0x7c
    int _screenDimmingNotificationToken;	// 128 = 0x80
    long long _targetInterfaceOrientation;	// 136 = 0x88
}

+ (Class)_analyzerClass;	// IMP=0x0010000000f91e29
+ (Class)_eventProviderClass;	// IMP=0x0010000000f91e18
+ (_Bool)_motionEffectsSupported;	// IMP=0x0010000000f91ded
+ (_Bool)_motionEffectsEnabled;	// IMP=0x0010000000f91ba9
- (void).cxx_destruct;	// IMP=0x0000000000f9466e
@property(nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)_unapplyAllEffects;	// IMP=0x0000000000f94385
- (_Bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;	// IMP=0x0000000000f942fa
- (_Bool)_hasMotionEffectsForView:(id)arg1;	// IMP=0x0000000000f9426f
- (id)_motionEffectsForView:(id)arg1;	// IMP=0x0000000000f941b3
- (void)_unregisterAllMotionEffectsForView:(id)arg1;	// IMP=0x0000000000f9400c
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000f93ed1
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;	// IMP=0x0000000000f93d40
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000f939bb
@property(readonly, nonatomic) NSArray *suspensionReasons;
- (_Bool)_motionEffectsAreSuspendedForView:(id)arg1;	// IMP=0x0000000000f9396e
- (void)endSuspendingMotionEffectsForView:(id)arg1;	// IMP=0x0000000000f9378b
- (void)beginSuspendingMotionEffectsForView:(id)arg1;	// IMP=0x0000000000f9351e
- (_Bool)_isSuspended;	// IMP=0x0000000000f93501
- (void)_updateDisplayLinkInterval;	// IMP=0x0000000000f933f5
- (void)_stopGeneratingUpdates;	// IMP=0x0000000000f933ac
- (void)_startGeneratingUpdates;	// IMP=0x0000000000f9318c
- (void)_startOrStopGeneratingUpdates;	// IMP=0x0000000000f9313e
- (_Bool)_shouldGenerateUpdates;	// IMP=0x0000000000f930ea
- (void)endSuspendingForReason:(id)arg1;	// IMP=0x0000000000f930b8
- (void)beginSuspendingForReason:(id)arg1;	// IMP=0x0000000000f93086
- (void)updateEventProviderStatus:(long long)arg1;	// IMP=0x0000000000f93068
- (void)updateWithEvent:(id)arg1;	// IMP=0x0000000000f92f68
- (void)resetMotionAnalysis;	// IMP=0x0000000000f92dd5
- (void)_applyEffectsFromAnalyzer:(id)arg1;	// IMP=0x0000000000f92bb9
- (void)_handleLatestDeviceMotion;	// IMP=0x0000000000f925ff
- (void)_toggleSlowUpdates;	// IMP=0x0000000000f925ba
- (void)dealloc;	// IMP=0x0000000000f924fe
- (id)init;	// IMP=0x0000000000f91e3a

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

