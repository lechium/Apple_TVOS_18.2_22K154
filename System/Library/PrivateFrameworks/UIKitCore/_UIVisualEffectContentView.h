//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectSubview.h"

__attribute__((visibility("hidden")))
@interface _UIVisualEffectContentView : _UIVisualEffectSubview
{
    _Bool _disableGroupFiltering;	// 168 = 0xa8
    _Bool _currentlyDisplayingRequestedEffects;	// 169 = 0xa9
}

- (id)description;	// IMP=0x0000000000321964
- (void)_notifyContentViewMonitors;	// IMP=0x0000000000321927
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x00000000003218e6
- (void)_didInvalidateIntrinsicContentSize;	// IMP=0x00000000003218a5
- (void)willRemoveSubview:(id)arg1;	// IMP=0x0000000000321824
- (void)didAddSubview:(id)arg1;	// IMP=0x000000000032173c
- (void)applyIdentityFilterEffects;	// IMP=0x00000000003215bb
- (void)applyRequestedFilterEffects;	// IMP=0x000000000032143a
- (void)setFilters:(id)arg1;	// IMP=0x00000000003211ff
- (void)setDisableGroupFiltering:(_Bool)arg1;	// IMP=0x0000000000320dc0
- (_Bool)disableGroupFiltering;	// IMP=0x0000000000320db0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000320d26

@end

