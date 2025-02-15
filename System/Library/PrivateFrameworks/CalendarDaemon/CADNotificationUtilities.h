//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADNotificationUtilities : NSObject
{
}

+ (id)_stringForNotificationType:(int)arg1;	// IMP=0x008000000004eef4
+ (_Bool)_storeIsDelegate:(void *)arg1;	// IMP=0x008000000004eec9
+ (void)_logNotificationCountsForNotifications:(id)arg1;	// IMP=0x008000000004eb20
+ (id)flattenedNotificationsFromNotifications:(id)arg1 expanded:(_Bool)arg2;	// IMP=0x008000000004e8a5
+ (_Bool)storeIsReadOnlyDelegate:(void *)arg1;	// IMP=0x008000000004e876
+ (int)_gatherSuggestionResourceChangeNotification:(void *)arg1 withContext:(id)arg2 database:(struct CalDatabase *)arg3 databaseID:(int)arg4;	// IMP=0x008000000004dbf9
+ (int)_gatherSharedCalendarResourceChangeNotification:(void *)arg1 withContext:(id)arg2 database:(struct CalDatabase *)arg3 databaseID:(int)arg4;	// IMP=0x008000000004d1c9
+ (int)_gatherSharedCalendarInviteReplyNotification:(void *)arg1 withContext:(id)arg2 database:(struct CalDatabase *)arg3 databaseID:(int)arg4;	// IMP=0x008000000004ccd9
+ (int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg1;	// IMP=0x008000000004c91a
+ (int)_gatherSharedCalendarInvitationsWithContext:(id)arg1;	// IMP=0x008000000004c4a8
+ (int)_gatherEventInvitationsAndRepliesWithContext:(id)arg1;	// IMP=0x008000000004b482
+ (int)CADDatabaseGetEventNotificationItemsWithConnection:(id)arg1 afterDate:(id)arg2 forSourceWithExternalIdentifier:(id)arg3 excludingDelegateSources:(_Bool)arg4 excludingUncheckedCalendars:(_Bool)arg5 filteredByShowsNotificationsFlag:(_Bool)arg6 expanded:(_Bool)arg7 earliestExpirationDate:(id *)arg8 notificationTypes:(id *)arg9 objectIDs:(id *)arg10 occurrenceDates:(id *)arg11 attendeeObjectIDs:(id *)arg12;	// IMP=0x008000000004b1da
+ (id)_attendeeObjectIDsFromNotifications:(id)arg1;	// IMP=0x008000000004b043
+ (id)_occurrenceDatesFromNotifications:(id)arg1;	// IMP=0x008000000004af03
+ (id)_objectIDsFromNotifications:(id)arg1;	// IMP=0x008000000004add7
+ (id)_notificationTypesFromNotifications:(id)arg1;	// IMP=0x008000000004ac95

@end

