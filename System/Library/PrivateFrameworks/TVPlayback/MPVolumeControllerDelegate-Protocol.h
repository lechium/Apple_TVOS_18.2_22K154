//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class MPVolumeController, NSString;

@protocol MPVolumeControllerDelegate <NSObject>

@optional
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeWarningStateDidChange:(long long)arg2;
- (void)volumeController:(MPVolumeController *)arg1 mutedStateDidChange:(_Bool)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeValueDidChange:(float)arg2 silenceVolumeHUD:(_Bool)arg3;
- (void)volumeController:(MPVolumeController *)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlLabelDidChange:(NSString *)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
@end

