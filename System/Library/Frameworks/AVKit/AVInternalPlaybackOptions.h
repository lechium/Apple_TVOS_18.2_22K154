//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVControlItem, AVPlaybackSpeedCollection, AVTransportBarViewController, NSArray, UIMenuElement, UIViewController;

__attribute__((visibility("hidden")))
@interface AVInternalPlaybackOptions : NSObject
{
    _Bool _includeTransportBar;	// 8 = 0x8
    _Bool _includeInfoViews;	// 9 = 0x9
    _Bool _includeInteractiveOverlay;	// 10 = 0xa
    _Bool _includeTitleView;	// 11 = 0xb
    _Bool _includeFullScreenSpinner;	// 12 = 0xc
    _Bool _requiresLinearPlayback;	// 13 = 0xd
    _Bool _requiresFullSubtitles;	// 14 = 0xe
    _Bool _disableScrubbingThumbnails;	// 15 = 0xf
    _Bool _appliesPreferredDisplayCriteriaAutomatically;	// 16 = 0x10
    _Bool _skipForwardEnabled;	// 17 = 0x11
    _Bool _skipBackwardEnabled;	// 18 = 0x12
    _Bool _allowInfoMetadataSubpanel;	// 19 = 0x13
    _Bool _allowsPictureInPicturePlayback;	// 20 = 0x14
    _Bool _waitingForNextStream;	// 21 = 0x15
    _Bool _includeProResBadge;	// 22 = 0x16
    _Bool _includeHDRBadge;	// 23 = 0x17
    NSArray *_infoViewActions;	// 24 = 0x18
    NSArray *_allowedSubtitleOptionLanguages;	// 32 = 0x20
    AVTransportBarViewController *_clientTransportBarViewController;	// 40 = 0x28
    UIViewController *_customOverlayViewController;	// 48 = 0x30
    NSArray *_transportBarCustomMenuItems;	// 56 = 0x38
    UIMenuElement *_transportBarCustomAudioMenu;	// 64 = 0x40
    long long _skippingBehavior;	// 72 = 0x48
    CDUnknownBlockType _skipToNextItem;	// 80 = 0x50
    CDUnknownBlockType _skipToPreviousItem;	// 88 = 0x58
    AVControlItem *_interactiveOverlayItem;	// 96 = 0x60
    NSArray *_contextualActions;	// 104 = 0x68
    AVPlaybackSpeedCollection *_playbackSpeedCollection;	// 112 = 0x70
    struct UIEdgeInsets _clientLegibleContentInsets;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000041db8
@property(nonatomic) struct UIEdgeInsets clientLegibleContentInsets; // @synthesize clientLegibleContentInsets=_clientLegibleContentInsets;
@property(retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // @synthesize playbackSpeedCollection=_playbackSpeedCollection;
@property(nonatomic) _Bool includeHDRBadge; // @synthesize includeHDRBadge=_includeHDRBadge;
@property(nonatomic) _Bool includeProResBadge; // @synthesize includeProResBadge=_includeProResBadge;
@property(copy, nonatomic) NSArray *contextualActions; // @synthesize contextualActions=_contextualActions;
@property(retain, nonatomic) AVControlItem *interactiveOverlayItem; // @synthesize interactiveOverlayItem=_interactiveOverlayItem;
@property(nonatomic) _Bool waitingForNextStream; // @synthesize waitingForNextStream=_waitingForNextStream;
@property(nonatomic) _Bool allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(nonatomic) _Bool allowInfoMetadataSubpanel; // @synthesize allowInfoMetadataSubpanel=_allowInfoMetadataSubpanel;
@property(copy, nonatomic) CDUnknownBlockType skipToPreviousItem; // @synthesize skipToPreviousItem=_skipToPreviousItem;
@property(copy, nonatomic) CDUnknownBlockType skipToNextItem; // @synthesize skipToNextItem=_skipToNextItem;
@property(nonatomic, getter=isSkipBackwardEnabled) _Bool skipBackwardEnabled; // @synthesize skipBackwardEnabled=_skipBackwardEnabled;
@property(nonatomic, getter=isSkipForwardEnabled) _Bool skipForwardEnabled; // @synthesize skipForwardEnabled=_skipForwardEnabled;
@property(nonatomic) long long skippingBehavior; // @synthesize skippingBehavior=_skippingBehavior;
@property(retain, nonatomic) UIMenuElement *transportBarCustomAudioMenu; // @synthesize transportBarCustomAudioMenu=_transportBarCustomAudioMenu;
@property(copy, nonatomic) NSArray *transportBarCustomMenuItems; // @synthesize transportBarCustomMenuItems=_transportBarCustomMenuItems;
@property(retain, nonatomic) UIViewController *customOverlayViewController; // @synthesize customOverlayViewController=_customOverlayViewController;
@property(nonatomic) _Bool appliesPreferredDisplayCriteriaAutomatically; // @synthesize appliesPreferredDisplayCriteriaAutomatically=_appliesPreferredDisplayCriteriaAutomatically;
@property(retain, nonatomic) AVTransportBarViewController *clientTransportBarViewController; // @synthesize clientTransportBarViewController=_clientTransportBarViewController;
@property(nonatomic) _Bool disableScrubbingThumbnails; // @synthesize disableScrubbingThumbnails=_disableScrubbingThumbnails;
@property(nonatomic) _Bool requiresFullSubtitles; // @synthesize requiresFullSubtitles=_requiresFullSubtitles;
@property(copy, nonatomic) NSArray *allowedSubtitleOptionLanguages; // @synthesize allowedSubtitleOptionLanguages=_allowedSubtitleOptionLanguages;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic) _Bool includeFullScreenSpinner; // @synthesize includeFullScreenSpinner=_includeFullScreenSpinner;
@property(nonatomic) _Bool includeTitleView; // @synthesize includeTitleView=_includeTitleView;
@property(nonatomic) _Bool includeInteractiveOverlay; // @synthesize includeInteractiveOverlay=_includeInteractiveOverlay;
@property(nonatomic) _Bool includeInfoViews; // @synthesize includeInfoViews=_includeInfoViews;
@property(nonatomic) _Bool includeTransportBar; // @synthesize includeTransportBar=_includeTransportBar;
@property(copy, nonatomic) NSArray *infoViewActions; // @synthesize infoViewActions=_infoViewActions;
- (id)debugDescription;	// IMP=0x0000000000041983
- (id)_descriptionOfBooleanProperty:(id)arg1;	// IMP=0x00000000000418df
- (id)_descriptionOfTrueBooleanProperty:(id)arg1;	// IMP=0x0000000000041840
@property(readonly, getter=isOffOptionAvailableForSubtitles) _Bool offOptionAvailableForSubtitles;
- (id)init;	// IMP=0x0000000000041716

@end

