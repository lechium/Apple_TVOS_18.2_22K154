//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDatabase, NSRecursiveLock;
@protocol OS_dispatch_source;

@interface IDSDMessageStore : NSObject
{
    NSRecursiveLock *_recursiveLock;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_databaseCloseTimer;	// 16 = 0x10
    double _databaseLastUpdateTime;	// 24 = 0x18
    unsigned int _dataProtectionClass;	// 32 = 0x20
    IDSDatabase *_database;	// 40 = 0x28
}

+ (void)checkpointAndVacuumDBWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x004000000038ff96
+ (void)updateExpirationForIncomingMessageWithGUID:(id)arg1 expirationDate:(long long)arg2;	// IMP=0x001000000038fe0e
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(_Bool)arg5 messageType:(long long)arg6 success:(_Bool *)arg7;	// IMP=0x001000000038fb23
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4;	// IMP=0x001000000038f8b7
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3;	// IMP=0x001000000038f659
+ (id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1;	// IMP=0x001000000038f446
+ (id)allExpiredOutgoingMessages:(long long)arg1;	// IMP=0x001000000038f233
+ (id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2;	// IMP=0x001000000038f022
+ (id)allOutgoingMessagesByGUID:(id)arg1;	// IMP=0x001000000038ee34
+ (void)deleteAllMessagesWithAccountGUID:(id)arg1;	// IMP=0x001000000038ee2e
+ (id)largestEnquedMessagesAccountUUIDOverThreshold:(long long)arg1;	// IMP=0x001000000038ee26
+ (id)largestPayloadSizeAccountUUID;	// IMP=0x001000000038eb7c
+ (_Bool)databaseSizeBiggerThanThreshold:(long long)arg1;	// IMP=0x001000000038ea03
+ (void)markOutgoingMessagesAsUnsentForDestination:(id)arg1;	// IMP=0x001000000038e886
+ (void)markOutgoingMessagesAsUnsentIncludingClassD:(_Bool)arg1;	// IMP=0x001000000038e6ed
+ (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3;	// IMP=0x001000000038e4a5
+ (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(_Bool)arg3 localDestinationDeviceID:(id)arg4;	// IMP=0x001000000038e24e
+ (id)incomingExpiredRestrictedMessages:(double)arg1 success:(_Bool *)arg2;	// IMP=0x001000000038e029
+ (id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(_Bool *)arg3;	// IMP=0x001000000038e008
+ (id)incomingMessagesUpToLimit:(unsigned long long)arg1 controlCategory:(unsigned int)arg2 messageTransportType:(unsigned char)arg3 success:(_Bool *)arg4;	// IMP=0x001000000038dd8b
+ (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2;	// IMP=0x001000000038db7b
+ (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x001000000038da54
+ (id)deleteExpiredIncomingRestrictedMessagesOlderThan:(double)arg1;	// IMP=0x001000000038d87a
+ (void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2;	// IMP=0x001000000038d700
+ (void)clearStatementCache;	// IMP=0x001000000038d4d5
+ (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x001000000038d358
+ (void)deletePostponedMessages;	// IMP=0x001000000038c8a3
+ (id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3;	// IMP=0x001000000038c65b
+ (id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1;	// IMP=0x001000000038c448
+ (void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2;	// IMP=0x001000000038c2ac
+ (void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x001000000038c110
+ (id)unsentUrgentAccountUUIDsWithDataProtectionClass:(unsigned int)arg1 withMessageTypes:(id)arg2;	// IMP=0x001000000038c065
+ (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withMessageTypes:(id)arg4;	// IMP=0x001000000038bfac
+ (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x001000000038bf0c
+ (id)sharedInstanceForDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000038bea8
+ (id)sharedInstance;	// IMP=0x001000000038be53
- (void).cxx_destruct;	// IMP=0x0020000000398ec4
@property(readonly, retain, nonatomic) IDSDatabase *database; // @synthesize database=_database;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x0010000000398d00
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x0010000000398b3e
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000003989b1
- (void)deleteDatabase;	// IMP=0x0010000000398964
- (void)closeDatabase;	// IMP=0x00100000003988e3
- (void)_setDatabaseCloseTimer;	// IMP=0x0010000000398705
- (void)_clearDatabaseCloseTimer;	// IMP=0x00100000003986b4
- (void)__closeDatabase;	// IMP=0x00100000003985ed
- (void)updateExpirationForIncomingMessageWithGUID:(id)arg1 expirationDate:(long long)arg2;	// IMP=0x00100000003984ab
- (id)deleteExpiredIncomingRestrictedMessagesOlderThan:(double)arg1;	// IMP=0x00100000003982fc
- (void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2;	// IMP=0x0010000000398206
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x00100000003980de
- (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 classDDatabase:(id)arg3;	// IMP=0x0010000000397d82
- (void)deletePostponedMessages:(id)arg1 classDDatabase:(id)arg2;	// IMP=0x0010000000397c7c
- (void)markAllOutgoingMessagesAsUnsentForLocalDestination:(id)arg1;	// IMP=0x0010000000397b65
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x0010000000397a98
- (void)markOutgoingMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x0010000000397957
- (void)storeOutgoingMessageWithSendParameters:(id)arg1 guid:(id)arg2 canSend:(_Bool)arg3 canBypassSimilarMessages:(_Bool)arg4 fromQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000039625b
- (void)checkpointAndVacuumDB;	// IMP=0x0010000000396189
- (int)internalMigrationVersionOnDatabase;	// IMP=0x0010000000396052
- (void)updateInternalMigrationVersionOnDatabaseWithValue:(int)arg1;	// IMP=0x0010000000395f78
- (void)deleteAllMessagesWithAccountGUID:(id)arg1;	// IMP=0x0010000000395e50
- (id)largestEnquedMessagesAmountAccountUUID;	// IMP=0x0010000000395ce0
- (id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3;	// IMP=0x0010000000395ab3
- (id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1;	// IMP=0x00100000003958f8
- (void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2;	// IMP=0x001000000039572a
- (void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x001000000039554d
- (id)duetIdentifiersOverrideForAccountWithGUID:(id)arg1 priority:(long long)arg2;	// IMP=0x001000000039514e
- (id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5;	// IMP=0x001000000039511a
- (id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5 messageTypes:(id)arg6;	// IMP=0x00100000003950d8
- (id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(_Bool)arg5 requireDuet:(_Bool)arg6 localDestinationDeviceID:(id)arg7 messageTypes:(id)arg8;	// IMP=0x0010000000394dc9
- (id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(_Bool)arg5 requireDuet:(_Bool)arg6 localDestinationDeviceID:(id)arg7;	// IMP=0x0010000000394ace
- (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(_Bool)arg3 localDestinationDeviceID:(id)arg4;	// IMP=0x0010000000394aa0
- (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3;	// IMP=0x0010000000394a75
- (id)unsentUrgentAccountUUIDsForMessageTypes:(id)arg1;	// IMP=0x00100000003948b8
- (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 messageTypes:(id)arg3;	// IMP=0x00100000003946d3
- (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2;	// IMP=0x001000000039453e
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(_Bool)arg5 messageType:(long long)arg6 success:(_Bool *)arg7;	// IMP=0x00100000003942a0
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 hardLimit:(long long)arg4;	// IMP=0x0010000000394031
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3;	// IMP=0x0010000000393d8c
- (id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1;	// IMP=0x0010000000393c0e
- (id)allExpiredOutgoingMessages:(long long)arg1;	// IMP=0x0010000000393a53
- (id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2;	// IMP=0x001000000039381a
- (id)allOutgoingMessagesByGUID:(id)arg1;	// IMP=0x0010000000393623
- (id)largestPayloadSizeAccountUUID;	// IMP=0x00100000003934b3
- (long long)databaseSizeInMB;	// IMP=0x0010000000393368
- (id)_createOutgoingMessageRecordsFromSQLRecords:(struct __CFArray *)arg1 includeMessagePayloads:(_Bool)arg2;	// IMP=0x00100000003919d7
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 dedupBehavior:(unsigned char)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000003919b3
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 isLocal:(_Bool)arg6 dedupBehavior:(unsigned char)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000391982
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 isLocal:(_Bool)arg6 controlCategory:(unsigned int)arg7 dedupBehavior:(unsigned char)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x0010000000391357
- (id)_incomingMessageIdentifierForMessageUUID:(id)arg1 messagePayload:(id)arg2;	// IMP=0x00100000003912a6
- (id)incomingExpiredRestrictedMessages:(double)arg1 success:(_Bool *)arg2;	// IMP=0x0010000000390d22
- (id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(_Bool *)arg3;	// IMP=0x0010000000390d08
- (id)incomingMessagesUpToLimit:(unsigned long long)arg1 controlCategory:(unsigned int)arg2 messageTransportType:(unsigned char)arg3 success:(_Bool *)arg4;	// IMP=0x0010000000390734
@property(readonly, nonatomic) unsigned int dataProtectionClass;
- (void)_performInitialHousekeeping;	// IMP=0x001000000039062b
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000039007c
- (id)initWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000039001e
- (id)init;	// IMP=0x001000000039000a
- (void)clearStatementCache;	// IMP=0x001000000038d633

@end

