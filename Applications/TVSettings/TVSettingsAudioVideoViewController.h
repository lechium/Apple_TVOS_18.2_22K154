//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVPAudioRoutingController;

@interface TVSettingsAudioVideoViewController : TSKViewController
{
    TVPAudioRoutingController *_routingController;	// 8 = 0x8
    TSKSettingItem *_wirelessAudioSyncItem;	// 16 = 0x10
    TSKSettingItem *_displayAdjustmentItem;	// 24 = 0x18
}

+ (_Bool)_hardwareSupportsAC3Decode;	// IMP=0x00400000000529d3
+ (id)_nativeModeSwitchingOptionsFormatter;	// IMP=0x0010000000052535
+ (id)_volumeFormatter;	// IMP=0x00100000000523e1
+ (id)_subtitleOptionFormatter;	// IMP=0x001000000005230b
+ (id)_audioLanguageFormatter;	// IMP=0x001000000005224a
+ (id)_enhanceDialogueLevelsDescriptionFormatter;	// IMP=0x001000000005218d
+ (id)_enhanceDialogueFormatter;	// IMP=0x00100000000520d0
+ (id)_multiChannelAudioFormatter;	// IMP=0x0010000000051e91
- (void).cxx_destruct;	// IMP=0x0020000000053244
@property(retain, nonatomic) TSKSettingItem *displayAdjustmentItem; // @synthesize displayAdjustmentItem=_displayAdjustmentItem;
@property(retain, nonatomic) TSKSettingItem *wirelessAudioSyncItem; // @synthesize wirelessAudioSyncItem=_wirelessAudioSyncItem;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000053143
- (void)_promptResetVideoSettings;	// IMP=0x0010000000052a6c
- (void)_handleEnableWiderAspectRatios;	// IMP=0x0010000000052a1e
- (_Bool)_areDisplayFiltersEnabled;	// IMP=0x0010000000052989
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000525f9
- (id)loadSettingGroups;	// IMP=0x001000000004edd3
- (void)dealloc;	// IMP=0x001000000004ebd2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000004eb64
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000004e8d8

@end

