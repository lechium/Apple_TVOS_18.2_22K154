//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsRemotesFacade;

@interface TVSettingsSelectIRConfigurationViewController : TSKViewController
{
    TVSettingsRemotesFacade *_remotesFacade;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ce56c
@property(retain, nonatomic) TVSettingsRemotesFacade *remotesFacade; // @synthesize remotesFacade=_remotesFacade;
- (void)_confirmCECVolumeControlForConfiguration:(id)arg1;	// IMP=0x00100000000ce1be
- (void)_didSelectEditConfigurations;	// IMP=0x00100000000ce137
- (void)_didSelectAddConfiguration;	// IMP=0x00100000000cde03
- (void)_didSelectConfiguration:(id)arg1;	// IMP=0x00100000000cdc3a
- (id)loadSettingGroups;	// IMP=0x00100000000cd793
- (id)init;	// IMP=0x00100000000cd720

@end

