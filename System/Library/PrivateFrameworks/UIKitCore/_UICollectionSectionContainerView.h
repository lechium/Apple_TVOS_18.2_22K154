//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class _UICollectionViewSubviewRouter;

__attribute__((visibility("hidden")))
@interface _UICollectionSectionContainerView : UIView
{
    _UICollectionViewSubviewRouter *_subviewRouter;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000005b8637
- (void)dealloc;	// IMP=0x00000000005b85f4
- (void)_willRemoveSubview:(id)arg1;	// IMP=0x00000000005b8575
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;	// IMP=0x00000000005b8505
- (void)sendSubviewToBack:(id)arg1;	// IMP=0x00000000005b8490
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x00000000005b841b
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x00000000005b836b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005b8289

@end

