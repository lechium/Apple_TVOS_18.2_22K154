//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSBundle, NSString, TSKPreviewViewController, TVSettingsItemFactory;

@interface TVSettingsAppBundleViewController : TSKViewController
{
    TSKPreviewViewController *_appPreviewViewController;	// 8 = 0x8
    _Bool _observingCrossAppTrackingAllowedSwitchEnabled;	// 16 = 0x10
    _Bool _root;	// 17 = 0x11
    NSBundle *_settingsBundle;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSString *_containerPath;	// 40 = 0x28
    NSString *_plistName;	// 48 = 0x30
    TVSettingsItemFactory *_itemFactory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001e394
@property(retain, nonatomic) TVSettingsItemFactory *itemFactory; // @synthesize itemFactory=_itemFactory;
@property(nonatomic, getter=isRoot) _Bool root; // @synthesize root=_root;
@property(copy, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
@property(copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSBundle *settingsBundle; // @synthesize settingsBundle=_settingsBundle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000001e27a
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x001000000001e18c
- (id)loadSettingGroups;	// IMP=0x001000000001c4d0
- (void)dealloc;	// IMP=0x001000000001c440

@end

