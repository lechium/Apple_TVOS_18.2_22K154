//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class TVCSSpatialTutorialStatePublisher, TVNPSpatialAudioTutorialPlayerView, TVSBluetoothDevice, UISegmentedControl;

@interface TVSettingsSpatialAudioTutorialViewController : UIViewController
{
    _Bool _initialSpatialSetting;	// 8 = 0x8
    TVCSSpatialTutorialStatePublisher *_statePublisher;	// 16 = 0x10
    TVNPSpatialAudioTutorialPlayerView *_spatialVideoPlayerView;	// 24 = 0x18
    TVNPSpatialAudioTutorialPlayerView *_stereoVideoPlayerView;	// 32 = 0x20
    UISegmentedControl *_modeSegmentedControl;	// 40 = 0x28
    TVSBluetoothDevice *_bluetoothDevice;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000012c47
@property(nonatomic) _Bool initialSpatialSetting; // @synthesize initialSpatialSetting=_initialSpatialSetting;
@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
@property(retain, nonatomic) UISegmentedControl *modeSegmentedControl; // @synthesize modeSegmentedControl=_modeSegmentedControl;
@property(retain, nonatomic) TVNPSpatialAudioTutorialPlayerView *stereoVideoPlayerView; // @synthesize stereoVideoPlayerView=_stereoVideoPlayerView;
@property(retain, nonatomic) TVNPSpatialAudioTutorialPlayerView *spatialVideoPlayerView; // @synthesize spatialVideoPlayerView=_spatialVideoPlayerView;
@property(retain, nonatomic) TVCSSpatialTutorialStatePublisher *statePublisher; // @synthesize statePublisher=_statePublisher;
- (void)_menuButtonAction;	// IMP=0x0010000000012a87
- (void)_playStereoVideo;	// IMP=0x00100000000129c3
- (void)_playSpatialVideo;	// IMP=0x00100000000128ff
- (void)_toggleMode:(id)arg1;	// IMP=0x00100000000127b0
- (void)_setupAVPlayerForVideoNamed:(id)arg1 playerView:(id)arg2;	// IMP=0x00100000000124b7
- (void)willEnterForeground;	// IMP=0x0010000000012495
- (void)didEnterBackground;	// IMP=0x0010000000012476
- (void)viewDidLoad;	// IMP=0x001000000001102b
- (void)dealloc;	// IMP=0x0010000000010f5f
- (id)initWithBluetoothDevice:(id)arg1;	// IMP=0x0010000000010e1a

@end

