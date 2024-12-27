//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState
{
    _Bool _isVerticalLayoutAxis;	// 32 = 0x20
    long long _resolvedPresentationStyle;	// 40 = 0x28
}

@property(readonly, nonatomic) long long resolvedPresentationStyle; // @synthesize resolvedPresentationStyle=_resolvedPresentationStyle;
@property(readonly, nonatomic) _Bool isVerticalLayoutAxis; // @synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis;
- (_Bool)_stateEqualToGroupViewState:(id)arg1;	// IMP=0x000000000024dcf3
- (void)_collectStateFromGroupViewState:(id)arg1;	// IMP=0x000000000024dc8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024dc32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024dbe4
- (id)description;	// IMP=0x000000000024daf1
- (id)copyWithResolvedPresentationStyle:(long long)arg1;	// IMP=0x000000000024dac9
- (id)copyWithVerticalLayoutAxis:(_Bool)arg1;	// IMP=0x000000000024daa3
- (id)init;	// IMP=0x000000000024da55

@end

