//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPPlatterController.h>

@class MRNowPlayingAudioFormatController, NSString, PBSSuppressHeadphoneBulletinAssertion, PBSVolumeButtonEventAssertion, PBSVolumeHUDAssertion, TVCSAudioRoutingController, TVSSAudioNowPlayingController, TVSSHeadphonesController, TVSSMenuModeController;
@protocol TVCSAudioRoute;

@interface TVSSHeadphonesPanelPlatterController : TVSPPlatterController
{
    _Bool _didPerformShareAudio;	// 8 = 0x8
    TVCSAudioRoutingController *_routingController;	// 16 = 0x10
    MRNowPlayingAudioFormatController *_audioFormatController;	// 24 = 0x18
    id <TVCSAudioRoute> _primaryRoute;	// 32 = 0x20
    id <TVCSAudioRoute> _secondaryRoute;	// 40 = 0x28
    PBSVolumeButtonEventAssertion *_volumeButtonAssertion;	// 48 = 0x30
    PBSVolumeHUDAssertion *_volumeHUDAssertion;	// 56 = 0x38
    id <TVCSAudioRoute> _focusedVolumeRoute;	// 64 = 0x40
    TVSSAudioNowPlayingController *_audioNowPlayingController;	// 72 = 0x48
    TVSSMenuModeController *_menuModeController;	// 80 = 0x50
    TVSSHeadphonesController *_headphonesController;	// 88 = 0x58
    PBSSuppressHeadphoneBulletinAssertion *_suppressBulletinAssertion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000f5ba0
@property(nonatomic) _Bool didPerformShareAudio; // @synthesize didPerformShareAudio=_didPerformShareAudio;
@property(readonly, nonatomic) PBSSuppressHeadphoneBulletinAssertion *suppressBulletinAssertion; // @synthesize suppressBulletinAssertion=_suppressBulletinAssertion;
@property(retain, nonatomic) TVSSHeadphonesController *headphonesController; // @synthesize headphonesController=_headphonesController;
@property(retain, nonatomic) TVSSMenuModeController *menuModeController; // @synthesize menuModeController=_menuModeController;
@property(retain, nonatomic) TVSSAudioNowPlayingController *audioNowPlayingController; // @synthesize audioNowPlayingController=_audioNowPlayingController;
@property(retain, nonatomic) id <TVCSAudioRoute> focusedVolumeRoute; // @synthesize focusedVolumeRoute=_focusedVolumeRoute;
@property(retain, nonatomic) PBSVolumeHUDAssertion *volumeHUDAssertion; // @synthesize volumeHUDAssertion=_volumeHUDAssertion;
@property(retain, nonatomic) PBSVolumeButtonEventAssertion *volumeButtonAssertion; // @synthesize volumeButtonAssertion=_volumeButtonAssertion;
@property(retain, nonatomic) id <TVCSAudioRoute> secondaryRoute; // @synthesize secondaryRoute=_secondaryRoute;
@property(retain, nonatomic) id <TVCSAudioRoute> primaryRoute; // @synthesize primaryRoute=_primaryRoute;
@property(retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController; // @synthesize audioFormatController=_audioFormatController;
@property(retain, nonatomic) TVCSAudioRoutingController *routingController; // @synthesize routingController=_routingController;
- (id)_routeFromItemIdentifier:(id)arg1;	// IMP=0x00100000000f56e0
- (id)_hierarchicalColorsForMenuOffPersonSymbol;	// IMP=0x00100000000f54e0
- (id)_packageNameForCurrentSpatializeStereoState;	// IMP=0x00100000000f53f0
- (id)_packageNameForCurrentSpatialState;	// IMP=0x00100000000f5350
- (id)_packageNameForListeningMode:(long long)arg1;	// IMP=0x00100000000f5270
- (id)_localizedValueForCurrentSpatializeStereoState;	// IMP=0x00100000000f5120
- (id)_localizedValueForCurrentSpatialState;	// IMP=0x00100000000f5030
- (id)_localizedValueFromConversationDetectState:(_Bool)arg1;	// IMP=0x00100000000f4fc0
- (id)_systemImageForListeningMode:(long long)arg1;	// IMP=0x00100000000f4e20
- (id)_localizedValueFromListeningMode:(long long)arg1;	// IMP=0x00100000000f4d30
- (void)_toggleSpatializeStereoForBothHeadsets;	// IMP=0x00100000000f4b20
- (void)_setHeadTrackingEnabledOnBothHeadsets:(_Bool)arg1;	// IMP=0x00100000000f49d0
- (void)_setSpatialAudioModeOnBothHeadsets:(long long)arg1;	// IMP=0x00100000000f4880
- (_Bool)_bothHeadsetsSupportSpatialWhileSharing;	// IMP=0x00100000000f4750
- (_Bool)_splitterSpatialActive;	// IMP=0x00100000000f4660
- (_Bool)_splitterPreventingSpatial;	// IMP=0x00100000000f4560
- (_Bool)_spatializeStereoEnabledForHeadphone:(id)arg1;	// IMP=0x00100000000f4280
- (_Bool)_spatialAndHeadTrackingEnabled;	// IMP=0x00100000000f4180
- (_Bool)_spatialFixedEnabled;	// IMP=0x00100000000f4080
- (_Bool)_currentModeAllowsSpatialAudio;	// IMP=0x00100000000f3fb0
- (id);	// IMP=0x00100000000f3d70
- (_Bool)_spatialEnabledGlobally;	// IMP=0x00100000000f3b40
- (_Bool)_currentAppCanBeIneligibleForSpatialization;	// IMP=0x00100000000f3ad0
- (_Bool)_headTrackingDisabled;	// IMP=0x00100000000f3ab0
- (_Bool)_spatialUnavailable;	// IMP=0x00100000000f3a20
- (id)_resolvedAudioFormat;	// IMP=0x00100000000f37e0
- (_Bool)_headTrackingCurrentlySupported;	// IMP=0x00100000000f3780
- (_Bool)_currentAppSupportsHeadTracking;	// IMP=0x00100000000f3710
- (_Bool)_deviceSupportsSpatial;	// IMP=0x00100000000f36f0
- (_Bool)_currentAudioContentInfoEligibleForSpatialization;	// IMP=0x00100000000f3540
- (_Bool)_currentAppSupportsSpatial;	// IMP=0x00100000000f3460
- (_Bool)_resolvedSpatialAudioModeIsOff;	// IMP=0x00100000000f33d0
- (_Bool)_resolvedSpatialAudioModeIsFixed;	// IMP=0x00100000000f3320
- (_Bool)_resolvedSpatialAudioModeIsHeadTracked;	// IMP=0x00100000000f3290
- (id)_symbolForBatteryLevel:(id)arg1;	// IMP=0x00100000000f3060
- (_Bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;	// IMP=0x00100000000f2eb0
- (void)_toggleSpatializeStereoForHeadphone:(id)arg1;	// IMP=0x00100000000f2db0
- (void)_updateSpatialModeForHeadphone:(id)arg1 spatialMode:(long long)arg2 headTrackingEnabled:(_Bool)arg3;	// IMP=0x00100000000f2ba0
- (void)_updateListeningModeForHeadphone:(id)arg1 listeningMode:(long long)arg2;	// IMP=0x00100000000f2b00
- (id)_headTrackingRendererForHeadphone:(id)arg1;	// IMP=0x00100000000f2860
- (id)_speechDetectRendererForIdentifier:(id)arg1;	// IMP=0x00100000000f25f0
- (id)_noiseControlRendererForIdentifier:(id)arg1;	// IMP=0x00100000000f2360
- (void)_updateContent:(id)arg1 withBatteryLevel:(id)arg2;	// IMP=0x00100000000f1a80
- (void)_refreshVolumeRenderers;	// IMP=0x00100000000f1540
- (void)_refreshSpatializeStereoRenderer;	// IMP=0x00100000000f11f0
- (void)_refreshHeadTrackingRenderer;	// IMP=0x00100000000f0f30
- (void)_refreshAudioFormatRenderer;	// IMP=0x00100000000f09e0
- (void)_refreshConversationDetectRenderer;	// IMP=0x00100000000f0740
- (void)_refreshNoiseControlRenderers;	// IMP=0x00100000000f0210
- (void)_refreshHeadphoneSettingsRenderers;	// IMP=0x00100000000f01a0
- (void)_updatePanelAnimated:(_Bool)arg1;	// IMP=0x00100000000ef230
- (void)accessorySettingsChanged:(id)arg1;	// IMP=0x00100000000ef1e0
- (void)shareAudioDidComplete:(_Bool)arg1;	// IMP=0x00100000000ef1a0
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeAudioFormatContentInfo:(id)arg2;	// IMP=0x00100000000ef120
- (void)audioRoutingController:(id)arg1 routeDidUpdate:(id)arg2 withChangedProperties:(id)arg3;	// IMP=0x00100000000eef30
- (void)audioRoutingController:(id)arg1 didUpdateAvailableRoutes:(id)arg2;	// IMP=0x00100000000eee10
- (void)didPressMute:(id)arg1;	// IMP=0x00100000000eed10
- (void)handleVolumeDown;	// IMP=0x00100000000eebb0
- (void)handleVolumeUp;	// IMP=0x00100000000eea50
- (void)_willDisplayRendererHostingView:(id)arg1;	// IMP=0x00100000000ee740
- (void)rendererWasUpdated:(id)arg1;	// IMP=0x00100000000ee530
- (id)menuForRenderer:(id)arg1;	// IMP=0x00100000000ed550
- (id)contextMenuConfigurationForRenderer:(id)arg1;	// IMP=0x00100000000ed1f0
- (void)rendererLostFocus:(id)arg1;	// IMP=0x00100000000ed0c0
- (void)rendererGainedFocus:(id)arg1;	// IMP=0x00100000000ecec0
- (void)rendererWasSelected:(id)arg1 context:(id)arg2;	// IMP=0x00100000000ecb90
- (void)_platterControllerWillDisappear:(_Bool)arg1;	// IMP=0x00100000000ecb50
- (void)platterControllerDidActivate;	// IMP=0x00100000000eca90
- (void)dealloc;	// IMP=0x00100000000ec910
- (id)initWithAudioNowPlayingController:(id)arg1 menuModeController:(id)arg2 headphonesController:(id)arg3;	// IMP=0x00100000000ea900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

