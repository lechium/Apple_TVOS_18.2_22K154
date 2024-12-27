//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettingsDaemon/NSObject-Protocol.h>

@class HPSHomeAccessorySettingsProvider, HPSSetting, HPSettingSessionClient, NSString, NSUUID;

@protocol HPSHomeAccessorySettingsProviderDelegate <NSObject>
- (void)connectionProvider:(HPSHomeAccessorySettingsProvider *)arg1 notifyConnectionSessionDelegate:(HPSettingSessionClient *)arg2 didUpdateValueForEndpointIdentifier:(NSUUID *)arg3 keyPath:(NSString *)arg4 value:(HPSSetting *)arg5;
@end

