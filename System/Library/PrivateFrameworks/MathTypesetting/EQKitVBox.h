//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EQKitVBox
{
    unsigned long long _pivotIndex;	// 80 = 0x50
}

@property(readonly, nonatomic) unsigned long long pivotIndex; // @synthesize pivotIndex=_pivotIndex;
- (struct CGRect)p_cacheErasableBounds;	// IMP=0x000000000005bcbd
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;	// IMP=0x000000000005badb
- (id)description;	// IMP=0x000000000005b9e3
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;	// IMP=0x000000000005b715
- (id)hitTest:(struct CGPoint)arg1;	// IMP=0x000000000005b479
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000005b1fb
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000005af6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005aead
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ae16
- (id)initWithChildBoxes:(id)arg1;	// IMP=0x000000000005ae02
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;	// IMP=0x000000000005ad4f

@end

