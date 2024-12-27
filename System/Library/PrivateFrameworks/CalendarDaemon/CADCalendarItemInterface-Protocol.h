//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADObjectID, NSArray, NSDate, NSPredicate, NSString;

@protocol CADCalendarItemInterface
- (void)CADDatabaseExportICSForCalendarItemWithID:(CADObjectID *)arg1 occurrenceDate:(NSDate *)arg2 options:(unsigned long long)arg3 reply:(void (^)(int, NSData *))arg4;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(NSPredicate *)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 synchronous:(_Bool)arg4 reply:(void (^)(int, NSArray *))arg5;
- (void)CADDatabaseGetAlarmWithExternalID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetCalendarItemsWithRecurrenceSet:(NSString *)arg1 inCalendar:(CADObjectID *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(NSString *)arg1 inCalendar:(CADObjectID *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetCalendarItemsWithUUIDs:(NSArray *)arg1 inCalendars:(NSArray *)arg2 propertiesToLoad:(NSArray *)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetCalendarItemWithUUID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
@end

