//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SEMDatabaseConnection;

@interface SEMFTSWriter : NSObject
{
    SEMDatabaseConnection *_database;	// 8 = 0x8
    NSMutableDictionary *_commandCache;	// 16 = 0x10
    _Bool _inTransaction;	// 24 = 0x18
}

+ (_Bool)_isIndexedFieldType:(unsigned short)arg1;	// IMP=0x006000000002dd60
+ (unsigned char)capabilityRequirementForItemType:(unsigned short)arg1;	// IMP=0x006000000002dd3e
- (void).cxx_destruct;	// IMP=0x000000000002f5f8
- (_Bool)insertRecordsFromCascadeItem:(id)arg1 originAppId:(id)arg2 externalId:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002ec8d
- (_Bool)deleteExternalIds:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e7e4
- (_Bool)deleteExternalId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e46b
- (_Bool)_deleteAllRecords:(id *)arg1;	// IMP=0x000000000002e2f3
- (_Bool)cleanup:(id *)arg1;	// IMP=0x000000000002e29a
- (_Bool)clearWithError:(id *)arg1;	// IMP=0x000000000002e288
- (_Bool)rollbackChanges:(id *)arg1;	// IMP=0x000000000002e164
- (_Bool)commitChanges:(id *)arg1;	// IMP=0x000000000002e040
- (_Bool)_beginTransactionWithError:(id *)arg1;	// IMP=0x000000000002deb1
- (_Bool)_databaseExists;	// IMP=0x000000000002de9b
- (_Bool)databaseExists;	// IMP=0x000000000002de7f
- (id)initWithDatabase:(id)arg1;	// IMP=0x000000000002dde0
- (id)initWithDatabaseURL:(id)arg1 dataProtectionClass:(int)arg2;	// IMP=0x000000000002dd80

@end

