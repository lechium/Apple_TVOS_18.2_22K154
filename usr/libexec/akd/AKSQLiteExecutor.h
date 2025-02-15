//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AKSQLiteMigration;

@interface AKSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    _Bool _shouldAutomaticallyMigrate;	// 24 = 0x18
    id <AKSQLiteMigration> _migrator;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x004000000009b01d
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000009af31
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000009ae46
- (void).cxx_destruct;	// IMP=0x002000000009c5a5
@property(retain, nonatomic) id <AKSQLiteMigration> migrator; // @synthesize migrator=_migrator;
- (void)setShouldAutomaticallyMigrate:(_Bool)arg1;	// IMP=0x001000000009c581
- (_Bool)shouldAutomaticallyMigrate;	// IMP=0x001000000009c578
- (void)_unsafe_closeDatabase;	// IMP=0x001000000009c4a6
- (void)closeDatabase;	// IMP=0x001000000009c43a
- (void)_unsafe_wipeDatabase:(id *)arg1;	// IMP=0x001000000009c32b
- (void)wipeDatabase:(id *)arg1;	// IMP=0x001000000009c1af
- (int)_unsafe_createDataBase;	// IMP=0x001000000009bf3c
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x001000000009bd50
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x001000000009bb8d
- (id)_currentDataBaseError;	// IMP=0x001000000009ba26
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x001000000009b88f
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x001000000009b809
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009b76b
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000009b6b8
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x001000000009b65d
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009b51d
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009b3c6
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b2d4
- (_Bool)performQuery:(id)arg1;	// IMP=0x001000000009b2c0
- (long long)performInsertQuery:(id)arg1;	// IMP=0x001000000009b264
- (int)_executeQuery:(id)arg1;	// IMP=0x001000000009b166
- (void)rollbackTransaction;	// IMP=0x001000000009b14d
- (void)commitTransaction;	// IMP=0x001000000009b10f
- (void)openTransaction;	// IMP=0x001000000009b0f6
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b09e
@property(readonly, nonatomic) NSString *databasePath;
// Error: Property attributes should begin with the type ('T') attribute, property name: database
// Property attributes: (null)

- (void)dealloc;	// IMP=0x001000000009adf0
- (id)initWithDatabasePath:(id)arg1 migrationController:(id)arg2;	// IMP=0x001000000009ad61

@end

