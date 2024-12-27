//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVSettingsAmbientFacade, TVSettingsAmbientPreviewViewController;

@interface TVSettingsAmbientPortraitClockOptionsViewController : TSKViewController
{
    TVSettingsAmbientFacade *_ambientFacade;	// 8 = 0x8
    TSKSettingItem *_peopleFilterItem;	// 16 = 0x10
    TVSettingsAmbientPreviewViewController *_portraitClockPreviewViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001500a
@property(readonly, nonatomic) TVSettingsAmbientPreviewViewController *portraitClockPreviewViewController; // @synthesize portraitClockPreviewViewController=_portraitClockPreviewViewController;
@property(retain, nonatomic) TSKSettingItem *peopleFilterItem; // @synthesize peopleFilterItem=_peopleFilterItem;
@property(readonly, nonatomic) TVSettingsAmbientFacade *ambientFacade; // @synthesize ambientFacade=_ambientFacade;
- (void)_settingChangedToHidden:(_Bool)arg1 categoryID:(id)arg2;	// IMP=0x0010000000014f0a
- (void)_didSelectOptionItem:(id)arg1;	// IMP=0x0010000000014e16
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000014d1b
- (id)_updateFrequencyGroup;	// IMP=0x001000000001492d
- (id)_categoriesGroup;	// IMP=0x00100000000143ed
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00100000000142f4
- (id)loadSettingGroups;	// IMP=0x0010000000014231
- (void)viewDidLoad;	// IMP=0x00100000000141c9
- (void)setUpPreview;	// IMP=0x0010000000014118
- (id)initWithAmbientFacade:(id)arg1;	// IMP=0x001000000001409a

@end

