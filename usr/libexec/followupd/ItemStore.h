//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLSQLiteExecutor;

@interface ItemStore : NSObject
{
    FLSQLiteExecutor *_queryExecutor;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000005886
- (void).cxx_destruct;	// IMP=0x002000000000a1ef
@property(retain, nonatomic) FLSQLiteExecutor *queryExecutor; // @synthesize queryExecutor=_queryExecutor;
- (void)_wipeDatabase;	// IMP=0x001000000000a1be
- (void)_closeDatabase;	// IMP=0x001000000000a1a8
- (void)_openDatabase;	// IMP=0x001000000000a190
- (double)intervalFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a181
- (id)dateFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a13b
- (id)dataFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a0d4
- (id)urlFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a074
- (id)stringFromColumn:(long long)arg1 inStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000000a035
- (void)_unsafeSelectFollowUpActionsForItem:(id)arg1 orActionID:(long long)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009c2a
- (id)_unsafeSelectNotificationForFollowUpItem:(id)arg1;	// IMP=0x00100000000095f4
- (void)_unsafeSelectFollowUpNotificationsWithRowHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000090b1
- (void)_unsafeSelectFollowUpItemsWithUniqueIdentifiers:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008595
- (id)safeSelectFollowUpItemsWithUniqueIdentifiers:(id)arg1;	// IMP=0x00100000000082c6
- (id)safeSelectFollowUpNotifications;	// IMP=0x00100000000080ba
- (id)safeSelectFollowUpActions;	// IMP=0x0010000000007e1b
- (_Bool)_unsafe_deleteActionWithID:(long long)arg1;	// IMP=0x0010000000007cfb
- (_Bool)deleteNotificationForFollowUpItem:(id)arg1;	// IMP=0x0010000000007a17
- (_Bool)updateNotificationForFollowUpItem:(id)arg1;	// IMP=0x00100000000078f1
- (_Bool)deleteFollowUpItem:(id)arg1;	// IMP=0x00100000000075fa
- (long long)_unsafe_insertNotificationForItem:(id)arg1;	// IMP=0x0010000000006bc9
- (long long)_unsafe_insertAction:(id)arg1 item:(id)arg2;	// IMP=0x00100000000067f9
- (long long)_unsafe_insertFollowUpItem:(id)arg1;	// IMP=0x0010000000005df0
- (_Bool)insertFollowUpItem:(id)arg1;	// IMP=0x001000000000597f
- (id)allFollowUpItems;	// IMP=0x001000000000596b

@end

