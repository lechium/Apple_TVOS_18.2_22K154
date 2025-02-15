//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIColor, UIFont, UIImageSymbolConfiguration;
@protocol AVUnifiedPlayerContextMenuTheme, AVUnifiedPlayerInfoPanelDescriptionTheme, AVUnifiedPlayerInfoPanelNavigationTheme, AVUnifiedPlayerInteractiveOverlayTheme, AVUnifiedPlayerPlaybackMetadataTheme;

__attribute__((visibility("hidden")))
@interface AVTheme : NSObject
{
    unsigned long long _style;	// 8 = 0x8
    UIFont *_fontMedium;	// 16 = 0x10
    UIFont *_fontForTransportBarNeedleText;	// 24 = 0x18
    UIFont *_fontForTransportBarTimeLabels;	// 32 = 0x20
    UIFont *_infoPanelListItemFont;	// 40 = 0x28
    UIFont *_infoPanelAudioPanelHeadingFont;	// 48 = 0x30
    UIColor *_infoPanelTextColor;	// 56 = 0x38
    UIColor *_infoPanelHighlightedTextColor;	// 64 = 0x40
    UIColor *_infoPanelHighlightedDescriptionTextColor;	// 72 = 0x48
    UIColor *_infoPanelBackdropColor;	// 80 = 0x50
    long long _infoPanelBlurEffectStyle;	// 88 = 0x58
    UIFont *_infoMenuFont;	// 96 = 0x60
    UIColor *_infoMenuElementFocusViewColor;	// 104 = 0x68
    UIColor *_infoMenuElementSelectedBackgroundColor;	// 112 = 0x70
    UIColor *_infoMenuElementNormalColor;	// 120 = 0x78
    UIColor *_infoMenuElementFocusColor;	// 128 = 0x80
    UIColor *_infoMenuElementSelectedTextColor;	// 136 = 0x88
    UIColor *_infoMenuDividerLineColor;	// 144 = 0x90
    UIColor *_primaryTextColor;	// 152 = 0x98
    UIColor *_secondaryTextColor;	// 160 = 0xa0
    id <AVUnifiedPlayerInteractiveOverlayTheme> _interactiveOverlayTheme;	// 168 = 0xa8
    double _nowPlayingDimmingGradientHeight;	// 176 = 0xb0
    NSArray *_nowPlayingDimmingGradientColors;	// 184 = 0xb8
    NSArray *_nowPlayingDimmingGradientLocations;	// 192 = 0xc0
    double _unifiedPlayerReducedDimmingGradientHeight;	// 200 = 0xc8
    NSArray *_unifiedPlayerReducedDimmingGradientColors;	// 208 = 0xd0
    NSArray *_unifiedPlayerReducedDimmingGradientLocations;	// 216 = 0xd8
    double _transportBarHeight;	// 224 = 0xe0
    double _transportBarBottomMargin;	// 232 = 0xe8
    double _transportBarSideMargin;	// 240 = 0xf0
    UIColor *_transportBarInterstitialColor;	// 248 = 0xf8
    UIColor *_transportBarLivePlaybackColor;	// 256 = 0x100
    UIColor *_transportBarNeedleColor;	// 264 = 0x108
    id <AVUnifiedPlayerInfoPanelDescriptionTheme> _infoPanelDescriptionTheme;	// 272 = 0x110
    id <AVUnifiedPlayerInfoPanelNavigationTheme> _infoPanelNavigationTheme;	// 280 = 0x118
    id <AVUnifiedPlayerContextMenuTheme> _contextMenuTheme;	// 288 = 0x120
    id <AVUnifiedPlayerPlaybackMetadataTheme> _playbackMetadataTheme;	// 296 = 0x128
    UIImageSymbolConfiguration *_imageSymbolConfigurationForTransportBar;	// 304 = 0x130
    UIFont *_unifiedPlayerMessagingFont;	// 312 = 0x138
    UIColor *_unifiedPlayerMessagingTextColor;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x000000000007a048
@property(readonly, nonatomic) UIColor *unifiedPlayerMessagingTextColor; // @synthesize unifiedPlayerMessagingTextColor=_unifiedPlayerMessagingTextColor;
@property(readonly, nonatomic) UIFont *unifiedPlayerMessagingFont; // @synthesize unifiedPlayerMessagingFont=_unifiedPlayerMessagingFont;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfigurationForTransportBar; // @synthesize imageSymbolConfigurationForTransportBar=_imageSymbolConfigurationForTransportBar;
@property(readonly, nonatomic) id <AVUnifiedPlayerPlaybackMetadataTheme> playbackMetadataTheme; // @synthesize playbackMetadataTheme=_playbackMetadataTheme;
@property(readonly, nonatomic) id <AVUnifiedPlayerContextMenuTheme> contextMenuTheme; // @synthesize contextMenuTheme=_contextMenuTheme;
@property(readonly, nonatomic) id <AVUnifiedPlayerInfoPanelNavigationTheme> infoPanelNavigationTheme; // @synthesize infoPanelNavigationTheme=_infoPanelNavigationTheme;
@property(readonly, nonatomic) id <AVUnifiedPlayerInfoPanelDescriptionTheme> infoPanelDescriptionTheme; // @synthesize infoPanelDescriptionTheme=_infoPanelDescriptionTheme;
@property(readonly, nonatomic) UIColor *transportBarNeedleColor; // @synthesize transportBarNeedleColor=_transportBarNeedleColor;
@property(readonly, nonatomic) UIColor *transportBarLivePlaybackColor; // @synthesize transportBarLivePlaybackColor=_transportBarLivePlaybackColor;
@property(readonly, nonatomic) UIColor *transportBarInterstitialColor; // @synthesize transportBarInterstitialColor=_transportBarInterstitialColor;
@property(readonly, nonatomic) double transportBarSideMargin; // @synthesize transportBarSideMargin=_transportBarSideMargin;
@property(readonly, nonatomic) double transportBarBottomMargin; // @synthesize transportBarBottomMargin=_transportBarBottomMargin;
@property(readonly, nonatomic) double transportBarHeight; // @synthesize transportBarHeight=_transportBarHeight;
@property(readonly, nonatomic) NSArray *unifiedPlayerReducedDimmingGradientLocations; // @synthesize unifiedPlayerReducedDimmingGradientLocations=_unifiedPlayerReducedDimmingGradientLocations;
@property(readonly, nonatomic) NSArray *unifiedPlayerReducedDimmingGradientColors; // @synthesize unifiedPlayerReducedDimmingGradientColors=_unifiedPlayerReducedDimmingGradientColors;
@property(readonly, nonatomic) double unifiedPlayerReducedDimmingGradientHeight; // @synthesize unifiedPlayerReducedDimmingGradientHeight=_unifiedPlayerReducedDimmingGradientHeight;
@property(readonly, nonatomic) NSArray *nowPlayingDimmingGradientLocations; // @synthesize nowPlayingDimmingGradientLocations=_nowPlayingDimmingGradientLocations;
@property(readonly, nonatomic) NSArray *nowPlayingDimmingGradientColors; // @synthesize nowPlayingDimmingGradientColors=_nowPlayingDimmingGradientColors;
@property(readonly, nonatomic) double nowPlayingDimmingGradientHeight; // @synthesize nowPlayingDimmingGradientHeight=_nowPlayingDimmingGradientHeight;
@property(readonly, nonatomic) id <AVUnifiedPlayerInteractiveOverlayTheme> interactiveOverlayTheme; // @synthesize interactiveOverlayTheme=_interactiveOverlayTheme;
@property(readonly, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(readonly, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(readonly, nonatomic) UIColor *infoMenuDividerLineColor; // @synthesize infoMenuDividerLineColor=_infoMenuDividerLineColor;
@property(readonly, nonatomic) UIColor *infoMenuElementSelectedTextColor; // @synthesize infoMenuElementSelectedTextColor=_infoMenuElementSelectedTextColor;
@property(readonly, nonatomic) UIColor *infoMenuElementFocusColor; // @synthesize infoMenuElementFocusColor=_infoMenuElementFocusColor;
@property(readonly, nonatomic) UIColor *infoMenuElementNormalColor; // @synthesize infoMenuElementNormalColor=_infoMenuElementNormalColor;
@property(readonly, nonatomic) UIColor *infoMenuElementSelectedBackgroundColor; // @synthesize infoMenuElementSelectedBackgroundColor=_infoMenuElementSelectedBackgroundColor;
@property(readonly, nonatomic) UIColor *infoMenuElementFocusViewColor; // @synthesize infoMenuElementFocusViewColor=_infoMenuElementFocusViewColor;
@property(readonly, nonatomic) UIFont *infoMenuFont; // @synthesize infoMenuFont=_infoMenuFont;
@property(readonly, nonatomic) long long infoPanelBlurEffectStyle; // @synthesize infoPanelBlurEffectStyle=_infoPanelBlurEffectStyle;
@property(readonly, nonatomic) UIColor *infoPanelBackdropColor; // @synthesize infoPanelBackdropColor=_infoPanelBackdropColor;
@property(readonly, nonatomic) UIColor *infoPanelHighlightedDescriptionTextColor; // @synthesize infoPanelHighlightedDescriptionTextColor=_infoPanelHighlightedDescriptionTextColor;
@property(readonly, nonatomic) UIColor *infoPanelHighlightedTextColor; // @synthesize infoPanelHighlightedTextColor=_infoPanelHighlightedTextColor;
@property(readonly, nonatomic) UIColor *infoPanelTextColor; // @synthesize infoPanelTextColor=_infoPanelTextColor;
@property(readonly, nonatomic) UIFont *infoPanelAudioPanelHeadingFont; // @synthesize infoPanelAudioPanelHeadingFont=_infoPanelAudioPanelHeadingFont;
@property(readonly, nonatomic) UIFont *infoPanelListItemFont; // @synthesize infoPanelListItemFont=_infoPanelListItemFont;
@property(readonly, nonatomic) UIFont *fontForTransportBarTimeLabels; // @synthesize fontForTransportBarTimeLabels=_fontForTransportBarTimeLabels;
@property(readonly, nonatomic) UIFont *fontForTransportBarNeedleText; // @synthesize fontForTransportBarNeedleText=_fontForTransportBarNeedleText;
@property(readonly, nonatomic) UIFont *fontMedium; // @synthesize fontMedium=_fontMedium;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)transportBarSystemImage:(id)arg1;	// IMP=0x0000000000079ddb
@property(readonly, nonatomic) UIFont *infoPanelImageListItemFont;
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x0000000000079573

@end

