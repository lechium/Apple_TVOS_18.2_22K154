//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectViewEntry.h"

__attribute__((visibility("hidden")))
@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry
{
    double _zoomAmount;	// 8 = 0x8
}

@property(nonatomic) double zoomAmount; // @synthesize zoomAmount=_zoomAmount;
- (id)description;	// IMP=0x00000000003115f1
- (void)convertToIdentity;	// IMP=0x00000000003115dc
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x00000000003115d4
- (void)removeEffectFromView:(id)arg1;	// IMP=0x0000000000311555
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000003114d6
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x000000000031143c
- (_Bool)shouldAnimateProperty:(id)arg1;	// IMP=0x0000000000311423

@end

