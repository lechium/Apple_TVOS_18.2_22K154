//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingsFoundation/NSObject-Protocol.h>

@class HPSSetting, NSString;

@protocol HPSAccessorySettingServiceDelegate <NSObject>

@optional
- (void)didReconnect;
- (void)didUpdateSetting:(HPSSetting *)arg1 forKeyPath:(NSString *)arg2;
@end

