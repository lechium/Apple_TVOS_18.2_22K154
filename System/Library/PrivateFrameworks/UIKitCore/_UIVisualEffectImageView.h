//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView : UIImageView
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;	// 160 = 0xa0
    NSArray *_viewEffects;	// 168 = 0xa8
    NSArray *_filters;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000154c453
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;	// IMP=0x000000000154c356
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000154c2e5
- (void)applyIdentityFilterEffects;	// IMP=0x000000000154c2ce
- (void)applyRequestedFilterEffects;	// IMP=0x000000000154c2b4
- (void)applyIdentityViewEffects;	// IMP=0x000000000154c269
- (void)applyRequestedViewEffects;	// IMP=0x000000000154c24f
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property(nonatomic) _Bool disableGroupFiltering;
@property(nonatomic) __weak id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

