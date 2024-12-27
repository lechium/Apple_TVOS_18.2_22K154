//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView, UIVisualEffect, _UIVisualEffectEnvironment, _UIVisualEffectHost, _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface UIVisualEffectBackingHost : NSObject
{
    struct {
        unsigned int backgroundNeedsUpdate:1;
        unsigned int contentNeedsUpdate:1;
        unsigned int isUpdatingSubviews:1;
        unsigned int usingPlainViewForBackground:1;
    } _flags;	// 8 = 0x8
    NSString *_captureGroupName;	// 16 = 0x10
    UIVisualEffect *_visualEffect;	// 24 = 0x18
    NSArray *_contentEffects;	// 32 = 0x20
    NSArray *_backgroundEffects;	// 40 = 0x28
    long long _reentrantCount;	// 48 = 0x30
    UIView *_view;	// 56 = 0x38
    _UIVisualEffectEnvironment *_environment;	// 64 = 0x40
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;	// 72 = 0x48
    _UIVisualEffectHost *_backgroundHost;	// 80 = 0x50
    _UIVisualEffectHost *_contentHost;	// 88 = 0x58
    NSArray *_visualEffectSubviews;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000ac0f2e
@property(retain, nonatomic) NSArray *visualEffectSubviews; // @synthesize visualEffectSubviews=_visualEffectSubviews;
@property(retain, nonatomic) _UIVisualEffectHost *contentHost; // @synthesize contentHost=_contentHost;
@property(retain, nonatomic) _UIVisualEffectHost *backgroundHost; // @synthesize backgroundHost=_backgroundHost;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup; // @synthesize captureGroup=_captureGroup;
@property(retain, nonatomic) _UIVisualEffectEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) long long reentrantCount; // @synthesize reentrantCount=_reentrantCount;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(copy, nonatomic) NSArray *contentEffects; // @synthesize contentEffects=_contentEffects;
@property(copy, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;
@property(copy, nonatomic, setter=_setCaptureGroupName:) NSString *_captureGroupName; // @synthesize _captureGroupName;
- (void)dealloc;	// IMP=0x0000000000ac0e06
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000ac0d4c
- (void)willLoseDescendent:(id)arg1;	// IMP=0x0000000000ac0d36
- (void)willGainDescendent:(id)arg1;	// IMP=0x0000000000ac0d20
- (void)_updateContentViewVibrancyTraitOverride:(id)arg1;	// IMP=0x0000000000ac0c95
- (void)_updateSubviews;	// IMP=0x0000000000ac0792
- (void)_ensureContentHost;	// IMP=0x0000000000ac06d6
- (void)_ensureBackgroundHost;	// IMP=0x0000000000ac058c
- (id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2;	// IMP=0x0000000000ac0410
- (void)_configureEffects;	// IMP=0x0000000000ac015b
- (id)_initialValueForKey:(id)arg1;	// IMP=0x0000000000ac00d6
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000ac00ce
- (void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2;	// IMP=0x0000000000abf8e7
- (void)_generateDeferredAnimations:(id)arg1;	// IMP=0x0000000000abf6cd
- (void)_observeSuperviewContainerVibrancy;	// IMP=0x0000000000abf6c7
- (id)_mergedTraitCollection;	// IMP=0x0000000000abf684
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000abf580
- (void)didMoveToWindow;	// IMP=0x0000000000abf56e
- (void)didMoveToSuperview;	// IMP=0x0000000000abf540
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000abf53a
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000000abf534
- (void)_updateEffectForAccessibilityChanges:(id)arg1;	// IMP=0x0000000000abf47b
- (void)_unregisterNotifications;	// IMP=0x0000000000abf41b
- (void)_registerNotifications;	// IMP=0x0000000000abf3b4
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x0000000000abf050
- (_Bool)_hasDeferredAnimations;	// IMP=0x0000000000abefe1
- (void)invalidateCaptureGroupName;	// IMP=0x0000000000abebbc
- (id)initForView:(id)arg1;	// IMP=0x0000000000abea9b

@end

