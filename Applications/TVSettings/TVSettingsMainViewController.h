//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class FLTVSettingsController, NSString, NSURL, TSKBundleLoader;

@interface TVSettingsMainViewController : TSKViewController
{
    NSURL *_lastDeepLinkURL;	// 8 = 0x8
    TSKBundleLoader *_developerBundleLoader;	// 16 = 0x10
    FLTVSettingsController *_followUpController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000032e0c
@property(retain, nonatomic) FLTVSettingsController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) TSKBundleLoader *developerBundleLoader; // @synthesize developerBundleLoader=_developerBundleLoader;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURL",?,C,N,V_lastDeepLinkURL

- (id)_accessibilitySettingsBundlePath;	// IMP=0x0010000000032d7f
- (id)_supervisionDescription;	// IMP=0x0010000000032b77
- (void)_updateDeveloperBundleLoader;	// IMP=0x00100000000328f1
- (void)_showAirPlayViewController;	// IMP=0x0010000000032627
- (void)_handleCFUAction:(id)arg1;	// IMP=0x0010000000032607
- (void)_sleepNow:(id)arg1;	// IMP=0x00100000000325b9
- (id)loadSettingGroups;	// IMP=0x0010000000031517
- (id)title;	// IMP=0x0010000000031506
- (void)dealloc;	// IMP=0x00100000000314a3
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000313d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

