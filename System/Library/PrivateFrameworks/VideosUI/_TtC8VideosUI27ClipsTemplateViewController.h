//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerViewController, MISSING_TYPE, NSArray;
@protocol TVPMediaItem, VUINowPlayingTabControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI27ClipsTemplateViewController
{
    MISSING_TYPE *pageContext;	// 24 = 0x18
    MISSING_TYPE *previousSubtitle;	// 40 = 0x28
    MISSING_TYPE *previousAlternateSubtitle;	// 72 = 0x48
    MISSING_TYPE *playlistViewController;	// 104 = 0x68
    MISSING_TYPE *collectionTitle;	// 112 = 0x70
    MISSING_TYPE *collectionViewModel;	// 128 = 0x80
    MISSING_TYPE *maxMovieContentRating;	// 136 = 0x88
    MISSING_TYPE *maxTVContentRating;	// 152 = 0x98
    MISSING_TYPE *hudController;	// 168 = 0xa8
    MISSING_TYPE *tabViewController;	// 176 = 0xb0
    MISSING_TYPE *paginateOffset;	// 184 = 0xb8
    MISSING_TYPE *serviceRequest;	// 192 = 0xc0
    MISSING_TYPE *cancellables;	// 200 = 0xc8
    MISSING_TYPE *document;	// 208 = 0xd0
    MISSING_TYPE *clipType;	// 216 = 0xd8
    MISSING_TYPE *disappearPlaybackState;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000006e20db
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000006e1f99
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000006e1f50
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000006e1e20
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x00000000006e1d25
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x00000000006e1670
- (void)vui_viewDidLoad;	// IMP=0x00000000006e15e3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e054b
@property(nonatomic, readonly) _Bool mediaSupportsStartOver;
@property(nonatomic, readonly) id <TVPMediaItem> currentMediaItem;
@property(nonatomic, readonly) id <VUINowPlayingTabControllerDelegate> nowPlayingControllerDelegate;
@property(nonatomic, readonly) AVPlayerViewController *playerViewController;
@property(nonatomic, readonly) NSArray *multiviewIdentifiers;
@property(nonatomic, readonly) long long maxMultiviewPlayerCount;
@property(nonatomic, readonly) long long multiviewPlayerCount;
- (_Bool)dismissOnTVButtonEvent;	// IMP=0x00000000003785a2

@end

