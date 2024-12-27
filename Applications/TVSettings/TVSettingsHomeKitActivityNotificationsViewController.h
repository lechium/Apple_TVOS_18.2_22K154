//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsHomeKitCameraProfile;

@interface TVSettingsHomeKitActivityNotificationsViewController : TSKViewController
{
    TVSettingsHomeKitCameraProfile *_cameraProfile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003fb09
@property(readonly, nonatomic) TVSettingsHomeKitCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)alertTitleForEventType:(unsigned long long)arg1;	// IMP=0x001000000003faab
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003fa58
- (void)_toggledSignificantEventType:(id)arg1;	// IMP=0x001000000003f7ef
- (void)_selectedTime:(id)arg1;	// IMP=0x001000000003f764
- (void)_selectedItem:(id)arg1;	// IMP=0x001000000003f4c2
- (id)loadSettingGroups;	// IMP=0x001000000003e944
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000003e8bc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000003e82e
- (id)title;	// IMP=0x001000000003e81d
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x001000000003e7af

@end

