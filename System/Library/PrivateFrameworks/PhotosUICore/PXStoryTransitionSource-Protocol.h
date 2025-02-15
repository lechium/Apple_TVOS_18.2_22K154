//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGEffect, PXStoryClipLayout;

@protocol PXStoryTransitionSource
@property(readonly, nonatomic) struct CGRect transitionViewport;
- (void)applyTransitionEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;
- (void)didEndTransitionWithEffect:(PXGEffect *)arg1 auxiliaryEffect:(PXGEffect *)arg2;
- (void)didBeginTransitionWithEffect:(PXGEffect *)arg1 auxiliaryEffect:(PXGEffect *)arg2;
- (PXStoryClipLayout *)layoutForClipWithIdentifier:(long long)arg1;
@end

