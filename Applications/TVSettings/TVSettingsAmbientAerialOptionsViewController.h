//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKScreenSaverThemePreviewViewController, TVSettingsAmbientFacade;

@interface TVSettingsAmbientAerialOptionsViewController : TSKViewController
{
    TVSettingsAmbientFacade *_ambientFacade;	// 8 = 0x8
    TSKScreenSaverThemePreviewViewController *_frequencePreviewViewController;	// 16 = 0x10
    TSKScreenSaverThemePreviewViewController *_themePreviewViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000098bba
@property(retain, nonatomic) TSKScreenSaverThemePreviewViewController *themePreviewViewController; // @synthesize themePreviewViewController=_themePreviewViewController;
@property(retain, nonatomic) TSKScreenSaverThemePreviewViewController *frequencePreviewViewController; // @synthesize frequencePreviewViewController=_frequencePreviewViewController;
@property(readonly, nonatomic) TVSettingsAmbientFacade *ambientFacade; // @synthesize ambientFacade=_ambientFacade;
- (void)_didSelectThemeItem:(id)arg1;	// IMP=0x0010000000098aae
- (id)_downloadFrequencyItem;	// IMP=0x00100000000988a0
- (id)_previewForTheme:(id)arg1;	// IMP=0x0010000000098750
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000098629
- (id)loadSettingGroups;	// IMP=0x001000000009825b
- (void)viewDidLoad;	// IMP=0x00100000000981f3
- (id)initWithAmbientFacade:(id)arg1;	// IMP=0x00100000000980cc

@end

