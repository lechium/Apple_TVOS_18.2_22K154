//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseCollectionViewCell.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI25SportsCanonicalBannerCell : VUIBaseCollectionViewCell
{
    MISSING_TYPE *bannerViewModel;	// 8 = 0x8
    MISSING_TYPE *layout;	// 16 = 0x10
    MISSING_TYPE *isReloadingAfterSwiftUIHeightChange;	// 24 = 0x18
    MISSING_TYPE *newBannerView;	// 32 = 0x20
    MISSING_TYPE *currentBannerWidth;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_bannerPresenter;	// 48 = 0x30
    MISSING_TYPE *containerGuide;	// 56 = 0x38
    MISSING_TYPE *scoreboardUpdateTimer;	// 64 = 0x40
    MISSING_TYPE *scoreboardUpdateRequest;	// 72 = 0x48
    MISSING_TYPE *scoreboardUpdateRequestCancellable;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000094ad44
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000094b041
- (void)vui_cellDidEndDisplaying;	// IMP=0x000000000094aebf
- (void)vui_cellWillBeDisplayed;	// IMP=0x000000000094ae55
- (void)vui_prepareForReuse;	// IMP=0x000000000094ae30
- (void)dealloc;	// IMP=0x000000000094ad27
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000094acd8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000094abcb
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end

