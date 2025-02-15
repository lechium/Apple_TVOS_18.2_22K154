//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILocalNotification.h"

@class CLRegion, NSCalendar, NSData, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification
{
    NSDate *fireDate;	// 8 = 0x8
    NSTimeZone *timeZone;	// 16 = 0x10
    unsigned long long repeatInterval;	// 24 = 0x18
    NSCalendar *repeatCalendar;	// 32 = 0x20
    CLRegion *region;	// 40 = 0x28
    _Bool regionTriggersOnce;	// 48 = 0x30
    NSString *alertBody;	// 56 = 0x38
    _Bool hasAction;	// 64 = 0x40
    NSString *alertAction;	// 72 = 0x48
    NSString *alertLaunchImage;	// 80 = 0x50
    NSString *alertTitle;	// 88 = 0x58
    NSString *soundName;	// 96 = 0x60
    long long applicationIconBadgeNumber;	// 104 = 0x68
    NSData *userInfoData;	// 112 = 0x70
    NSString *category;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000fa1775
- (void).cxx_destruct;	// IMP=0x0000000000fa3f5c
- (void)setAlertTitle:(id)arg1;	// IMP=0x0000000000fa3f4b
- (id)alertTitle;	// IMP=0x0000000000fa3f3a
- (void)setRegionTriggersOnce:(_Bool)arg1;	// IMP=0x0000000000fa3f2a
- (_Bool)regionTriggersOnce;	// IMP=0x0000000000fa3f1a
- (void)setRegion:(id)arg1;	// IMP=0x0000000000fa3f09
- (id)region;	// IMP=0x0000000000fa3ef8
- (void)setCategory:(id)arg1;	// IMP=0x0000000000fa3ee7
- (id)category;	// IMP=0x0000000000fa3ed6
- (void)setApplicationIconBadgeNumber:(long long)arg1;	// IMP=0x0000000000fa3ec5
- (long long)applicationIconBadgeNumber;	// IMP=0x0000000000fa3eb4
- (void)setSoundName:(id)arg1;	// IMP=0x0000000000fa3ea3
- (id)soundName;	// IMP=0x0000000000fa3e92
- (void)setAlertLaunchImage:(id)arg1;	// IMP=0x0000000000fa3e81
- (id)alertLaunchImage;	// IMP=0x0000000000fa3e70
- (void)setAlertAction:(id)arg1;	// IMP=0x0000000000fa3e5f
- (id)alertAction;	// IMP=0x0000000000fa3e4e
- (void)setHasAction:(_Bool)arg1;	// IMP=0x0000000000fa3e3e
- (_Bool)hasAction;	// IMP=0x0000000000fa3e2e
- (void)setAlertBody:(id)arg1;	// IMP=0x0000000000fa3e1d
- (id)alertBody;	// IMP=0x0000000000fa3e0c
- (void)setRepeatCalendar:(id)arg1;	// IMP=0x0000000000fa3dfb
- (id)repeatCalendar;	// IMP=0x0000000000fa3dea
- (void)setRepeatInterval:(unsigned long long)arg1;	// IMP=0x0000000000fa3dd9
- (unsigned long long)repeatInterval;	// IMP=0x0000000000fa3dc8
- (void)setTimeZone:(id)arg1;	// IMP=0x0000000000fa3db7
- (id)timeZone;	// IMP=0x0000000000fa3da6
- (void)setFireDate:(id)arg1;	// IMP=0x0000000000fa3d95
- (id)fireDate;	// IMP=0x0000000000fa3d84
- (_Bool)isTriggeredByRegion;	// IMP=0x0000000000fa3d6f
- (_Bool)isTriggeredByDate;	// IMP=0x0000000000fa3d5a
- (void)validate;	// IMP=0x0000000000fa3c72
- (_Bool)isValid;	// IMP=0x0000000000fa3bf3
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;	// IMP=0x0000000000fa2f95
- (id)nextFireDateForLastFireDate:(id)arg1;	// IMP=0x0000000000fa2e68
- (id)description;	// IMP=0x0000000000fa2a0e
- (id)userInfo;	// IMP=0x0000000000fa299d
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000000fa27fa
- (void)_setUserInfoData:(id)arg1;	// IMP=0x0000000000fa27e6
- (long long)compareFireDates:(id)arg1;	// IMP=0x0000000000fa263d
- (unsigned long long)hash;	// IMP=0x0000000000fa25a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fa201b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fa1e81
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fa1c96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fa1815
- (id)init;	// IMP=0x0000000000fa177d

@end

