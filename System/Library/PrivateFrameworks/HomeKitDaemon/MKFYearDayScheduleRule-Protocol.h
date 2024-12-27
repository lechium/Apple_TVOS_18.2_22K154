//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFModel-Protocol.h>
#import <HomeKitDaemon/MKFYearDayScheduleRulePublicExtensions-Protocol.h>

@class MKFYearDayScheduleRuleDatabaseID, NSDate;
@protocol MKFGuest, MKFInvitation;

@protocol MKFYearDayScheduleRule <MKFModel, MKFYearDayScheduleRulePublicExtensions>
@property(readonly, copy, nonatomic) MKFYearDayScheduleRuleDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFInvitation> invitation;
@property(retain, nonatomic) id <MKFGuest> guest;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSDate *endDate;
@end

