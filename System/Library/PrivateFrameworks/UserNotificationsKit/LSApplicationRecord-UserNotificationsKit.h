//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationRecord.h>

@interface LSApplicationRecord (UserNotificationsKit)
+ (void)_unkit_enumerateRecordsWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0020000000010035
+ (id)unkit_applicationRecordIfEligibleToDeliverNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x002000000000feec
+ (void)unkit_enumerateApplicationRecordsEligibleToDeliverNotifications:(CDUnknownBlockType)arg1;	// IMP=0x002000000000fe07
@property(readonly, nonatomic, getter=unkit_isWebAppPlaceholder) _Bool unkit_webAppPlaceholder;
@property(readonly, nonatomic, getter=unkit_isEligibleToDeliverNotifications) _Bool unkit_eligibleToDeliverNotifications;
@end

