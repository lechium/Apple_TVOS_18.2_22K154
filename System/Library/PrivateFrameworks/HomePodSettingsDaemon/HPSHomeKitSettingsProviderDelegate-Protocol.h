//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettingsDaemon/NSObject-Protocol.h>

@class CLLocation, HMSettings, HPSSetting, NSString;
@protocol HPSHomeKitSettingsProvider;

@protocol HPSHomeKitSettingsProviderDelegate <NSObject>
- (void)homeKitSettingsProviderHomeKitStatusChanged:(id <HPSHomeKitSettingsProvider>)arg1;
- (void)homeKitSettingsProviderDidFinishSync:(id <HPSHomeKitSettingsProvider>)arg1;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didChangeSelectedLanguage:(NSString *)arg2 recognitionLanguage:(NSString *)arg3 gender:(long long)arg4 name:(NSString *)arg5;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didUpdateHH2State:(_Bool)arg2;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didEnableHKAirplayAccessControlSetting:(_Bool)arg2;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didEnableLocationServices:(_Bool)arg2;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didUpdateSoundCheckEnabled:(_Bool)arg2;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 didUpdateOwnerSettings:(HMSettings *)arg2;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 handleDeviceAttributeChanged:(NSString *)arg2 withContext:(id)arg3;
- (void)homeKitSettingsProvider:(id <HPSHomeKitSettingsProvider>)arg1 handleSettingDidChange:(HPSSetting *)arg2 legacyValue:(id)arg3;
@end

