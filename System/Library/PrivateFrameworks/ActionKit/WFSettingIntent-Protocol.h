//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFSettingsClient;

@protocol WFSettingIntent
@property(readonly, nonatomic) Class settingsClientClass;
- (void)applyWithSettingsClient:(WFSettingsClient *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

