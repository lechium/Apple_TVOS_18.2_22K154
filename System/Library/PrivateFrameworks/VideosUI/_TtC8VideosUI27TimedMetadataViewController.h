//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI27TimedMetadataViewController
{
    MISSING_TYPE *templateController;	// 8 = 0x8
    MISSING_TYPE *shouldUseVerticalLayout;	// 16 = 0x10
    MISSING_TYPE *existingCellViewModels;	// 24 = 0x18
    MISSING_TYPE *document;	// 32 = 0x20
    MISSING_TYPE *currentTimedEntityMapping;	// 3507879911 = 0xd115ffe7
    MISSING_TYPE *timedEntityMappingsTask;	// 2303585669 = 0x894ded85
    MISSING_TYPE *timedMetadataVendor;	// 2336812937 = 0x8b48ef89
    MISSING_TYPE *logger;	// 1221852928 = 0x48d3ff00
    MISSING_TYPE *$__lazy_storage_$_emptyStateViewModel;	// 1224777083 = 0x49009d7b
    MISSING_TYPE *$__lazy_storage_$_emptyStatePresenter;	// 2370308223 = 0x8d48087f
    MISSING_TYPE *emptyStateView;	// 143345664 = 0x88b4800
    MISSING_TYPE *nowPlayingTabDelegate;	// 1275122051 = 0x4c00d183
    MISSING_TYPE *hostedType;	// 2106149888 = 0x7d894c00
    MISSING_TYPE *cancellables;	// 4294412620 = 0xfff7894c
}

- (void).cxx_destruct;	// IMP=0x000000000050f7e1
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000050f91d
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000050f8e0
- (void)dealloc;	// IMP=0x000000000050f7c4
- (void)viewDidLoad;	// IMP=0x000000000050f622
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000050ef34
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000050ee1e
- (double)nowPlayingTabHeight;	// IMP=0x00000000005128ea
- (void)setNowPlayingTabContextData:(id)arg1;	// IMP=0x00000000005127f8
- (id)getNowPlayingTabContextData;	// IMP=0x00000000005127ea
- (void)setNowPlayingTabDelegate:(id)arg1;	// IMP=0x00000000005127a3
- (void)updatePlaybackInfo:(id)arg1;	// IMP=0x00000000005133fd
- (void)updatePlaybackRate:(double)arg1 elapsedTime:(id)arg2 elapsedTimeTimestamp:(id)arg3;	// IMP=0x0000000000512d69

@end

