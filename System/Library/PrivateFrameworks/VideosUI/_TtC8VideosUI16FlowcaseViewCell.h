//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI16FlowcaseViewCell
{
    MISSING_TYPE *flowcaseLayout;	// 64 = 0x40
    MISSING_TYPE *backgroundMediaController;	// 72 = 0x48
    MISSING_TYPE *scrollViewMonitor;	// 80 = 0x50
    MISSING_TYPE *playbackDidStartObserver;	// 88 = 0x58
    MISSING_TYPE *playbackDidStopObserver;	// 96 = 0x60
    MISSING_TYPE *playbackDidPlayToEndObserver;	// 104 = 0x68
    MISSING_TYPE *userInterfaceStyleToRestore;	// 112 = 0x70
    MISSING_TYPE *waitingToShowImageWhilePaused;	// 121 = 0x79
    MISSING_TYPE *ignorePlaybackStop;	// 122 = 0x7a
}

- (void).cxx_destruct;	// IMP=0x000000000073b538
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000073b47f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000073b394
- (void)onImageDidLoad:(id)arg1;	// IMP=0x0000000000739aff
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000073996c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000739675
- (void)vui_prepareForReuse;	// IMP=0x0000000000739288
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)vui_cellDidEndDisplaying;	// IMP=0x000000000073bb43
- (void)vui_cellWillBeDisplayed;	// IMP=0x000000000073ba9f

@end

