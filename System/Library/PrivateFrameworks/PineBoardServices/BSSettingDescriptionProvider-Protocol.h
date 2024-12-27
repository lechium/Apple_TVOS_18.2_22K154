//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class BSDescriptionBuilder, BSSettings, NSString;

@protocol BSSettingDescriptionProvider <NSObject>

@optional
- (NSString *)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned long long)arg1;
- (_Bool)appendDescriptionToBuilder:(BSDescriptionBuilder *)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)settings:(BSSettings *)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)settings:(BSSettings *)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (_Bool)settings:(BSSettings *)arg1 appendDescriptionToBuilder:(BSDescriptionBuilder *)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
@end

