//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11PosterBoard28PosterPairCollectionViewCell
{
    MISSING_TYPE *snapshotProvider;	// 40 = 0x28
    MISSING_TYPE *posterPair;	// 56 = 0x38
    MISSING_TYPE *lockPosterSnapshotView;	// 64 = 0x40
    MISSING_TYPE *keyLineView;	// 72 = 0x48
    MISSING_TYPE *isReloadingLockPosterSnapshot;	// 80 = 0x50
    MISSING_TYPE *lockPosterSnapshotImage;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000143b90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000143ad0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001439f0
- (void)posterPairDidUpdateHomePosterAppearance:(id)arg1;	// IMP=0x0000000000143360
- (void)posterPairDidUpdateLockPosterSnapshots:(id)arg1;	// IMP=0x0000000000143300
- (void)posterPairDidUpdateLockPosterAppearance:(id)arg1;	// IMP=0x00000000001432a0
- (void)posterPairDidUpdateConfiguredProperties:(id)arg1;	// IMP=0x0000000000143230
- (void)prepareForReuse;	// IMP=0x0000000000143200
- (void)layoutSubviews;	// IMP=0x0000000000143140

@end

