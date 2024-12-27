//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class MISSING_TYPE;

@interface TVSettingsInternalVPNViewController : TSKViewController
{
    _Bool _loadingProfile;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
}

@property(nonatomic) _Bool loadingProfile; // @synthesize loadingProfile=_loadingProfile;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (id)_URLQueryParameterAllowedCharacters;	// IMP=0x0010000000024112
- (void)_warnAboutBadVPNURL;	// IMP=0x0010000000023ff6
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x0010000000023eda
- (void)_checkVPNConfiguration;	// IMP=0x00100000000238b7
- (void)_VPNProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x00100000000233ac
- (MISSING_TYPE *)_finishLoadingVPNProfileAtURL: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000022c1f
- (void)_loadVPNProfile;	// IMP=0x001000000002294f
- (void)_updateCheckVPNItem:(id)arg1;	// IMP=0x0010000000022774
- (void)_updateLoadVPNItem:(id)arg1;	// IMP=0x001000000002251b
- (id)loadSettingGroups;	// IMP=0x00100000000220e6
- (void)viewDidLoad;	// IMP=0x001000000002208f

@end

