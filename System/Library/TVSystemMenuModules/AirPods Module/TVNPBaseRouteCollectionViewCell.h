//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, NSNumber, NSString, TVNPFloatingContentControl, TVNPNowPlayingProgressView, TVNPNowPlayingSliderView, TVNPRoutingMusicBarsView, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UILayoutGuide, UIView;

@interface TVNPBaseRouteCollectionViewCell : UICollectionViewCell
{
    _Bool _isAccessoryFocused;	// 8 = 0x8
    _Bool _isRouteFocused;	// 9 = 0x9
    _Bool _allowsGrouping;	// 10 = 0xa
    _Bool _shareAudio;	// 11 = 0xb
    _Bool _groupLeader;	// 12 = 0xc
    _Bool _displayAsSelected;	// 13 = 0xd
    _Bool _pendingSelection;	// 14 = 0xe
    NSString *_titleText;	// 16 = 0x10
    NSString *_subtitleText;	// 24 = 0x18
    UIImage *_deviceImage;	// 32 = 0x20
    unsigned long long _deviceType;	// 40 = 0x28
    unsigned long long _musicBarState;	// 48 = 0x30
    NSNumber *_volumeLevel;	// 56 = 0x38
    TVNPFloatingContentControl *_accessoryView;	// 64 = 0x40
    UIView *_accessoryBackgroundColorView;	// 72 = 0x48
    UIImageView *_accessoryImageView;	// 80 = 0x50
    TVNPFloatingContentControl *_routeView;	// 88 = 0x58
    UIView *_backgroundColorView;	// 96 = 0x60
    UIImageView *_iconView;	// 104 = 0x68
    UIImageView *_symbolImageView;	// 112 = 0x70
    UIImageView *_checkmarkView;	// 120 = 0x78
    UIActivityIndicatorView *_pendingSelectView;	// 128 = 0x80
    TVNPRoutingMusicBarsView *_musicBarsView;	// 136 = 0x88
    UILabel *_titleLabel;	// 144 = 0x90
    UILabel *_subtitleLabel;	// 152 = 0x98
    TVNPNowPlayingProgressView *_volumeProgressView;	// 160 = 0xa0
    TVNPNowPlayingSliderView *_volumeSliderView;	// 168 = 0xa8
    UILayoutGuide *_layoutGuide;	// 176 = 0xb0
    unsigned long long _cellState;	// 184 = 0xb8
    NSMutableArray *_volatileContraints;	// 192 = 0xc0
}

+ (id)_volumeImage:(_Bool)arg1;	// IMP=0x004000000003e7d0
+ (void)_configureFloatingContentViewAppearance;	// IMP=0x004000000003c330
+ (_Bool)shouldUpdateMusicBars;	// IMP=0x0040000000037a40
+ (_Bool)allowsSelection;	// IMP=0x0040000000037a20
- (void).cxx_destruct;	// IMP=0x000000000003ecb0
@property(readonly, nonatomic) NSMutableArray *volatileContraints; // @synthesize volatileContraints=_volatileContraints;
@property(nonatomic) unsigned long long cellState; // @synthesize cellState=_cellState;
@property(readonly, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(readonly, nonatomic) TVNPNowPlayingSliderView *volumeSliderView; // @synthesize volumeSliderView=_volumeSliderView;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *volumeProgressView; // @synthesize volumeProgressView=_volumeProgressView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) TVNPRoutingMusicBarsView *musicBarsView; // @synthesize musicBarsView=_musicBarsView;
@property(readonly, nonatomic) UIActivityIndicatorView *pendingSelectView; // @synthesize pendingSelectView=_pendingSelectView;
@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(readonly, nonatomic) TVNPFloatingContentControl *routeView; // @synthesize routeView=_routeView;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(readonly, nonatomic) UIView *accessoryBackgroundColorView; // @synthesize accessoryBackgroundColorView=_accessoryBackgroundColorView;
@property(readonly, nonatomic) TVNPFloatingContentControl *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) unsigned long long musicBarState; // @synthesize musicBarState=_musicBarState;
@property(nonatomic) _Bool pendingSelection; // @synthesize pendingSelection=_pendingSelection;
@property(nonatomic) _Bool displayAsSelected; // @synthesize displayAsSelected=_displayAsSelected;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic, getter=isGroupLeader) _Bool groupLeader; // @synthesize groupLeader=_groupLeader;
@property(nonatomic) _Bool shareAudio; // @synthesize shareAudio=_shareAudio;
@property(nonatomic) _Bool allowsGrouping; // @synthesize allowsGrouping=_allowsGrouping;
@property(copy, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)_checkmarkImage:(_Bool)arg1;	// IMP=0x000000000003e5c0
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003d720
- (unsigned long long)_controlStateForCell;	// IMP=0x000000000003d650
- (void)_addInitialConstraints;	// IMP=0x000000000003c4e0
- (void)accessoryViewSelected;	// IMP=0x000000000003c320
- (void)routeViewSelected;	// IMP=0x000000000003c310
- (void)volumeSliderValueChanged:(id)arg1;	// IMP=0x000000000003c2d0
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000003b8b0
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x000000000003b780
- (void)updateConstraints;	// IMP=0x0000000000039940
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000039810
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000000397f0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000396b0
- (void)prepareForReuse;	// IMP=0x0000000000039610
- (id)preferredFocusEnvironments;	// IMP=0x0000000000039490
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000037a60

@end

