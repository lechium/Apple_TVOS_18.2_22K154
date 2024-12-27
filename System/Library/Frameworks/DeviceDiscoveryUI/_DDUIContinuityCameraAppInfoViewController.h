//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class BSAuditToken, DDUIInfoPlistService, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _DDUIContinuityCameraAppInfoViewController : UIViewController
{
    _Bool _showDedicatedPickerUI;	// 8 = 0x8
    unsigned int _deviceTypes;	// 12 = 0xc
    UIImageView *_appIconImageView;	// 16 = 0x10
    UILabel *_continueLabel;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
    UILabel *_camMicIconLabel;	// 40 = 0x28
    BSAuditToken *_bundleAuditToken;	// 48 = 0x30
    DDUIInfoPlistService *_infoPlistService;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000018a46
@property(nonatomic) _Bool showDedicatedPickerUI; // @synthesize showDedicatedPickerUI=_showDedicatedPickerUI;
@property(nonatomic) unsigned int deviceTypes; // @synthesize deviceTypes=_deviceTypes;
@property(retain, nonatomic) DDUIInfoPlistService *infoPlistService; // @synthesize infoPlistService=_infoPlistService;
@property(copy, nonatomic) BSAuditToken *bundleAuditToken; // @synthesize bundleAuditToken=_bundleAuditToken;
@property(retain, nonatomic) UILabel *camMicIconLabel; // @synthesize camMicIconLabel=_camMicIconLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *continueLabel; // @synthesize continueLabel=_continueLabel;
@property(retain, nonatomic) UIImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
- (void)viewDidLoad;	// IMP=0x000000000001791d

@end

