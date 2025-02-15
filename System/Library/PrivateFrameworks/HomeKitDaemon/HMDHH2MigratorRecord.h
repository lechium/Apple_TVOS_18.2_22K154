//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHH2MigratorRecord : HMFObject
{
    _Bool _isMigrationInProgress;	// 8 = 0x8
    _Bool _dryRun;	// 9 = 0x9
    _Bool _shouldSkipKeyRollOperations;	// 10 = 0xa
    _Bool _forceMigrationFailureForTesting;	// 11 = 0xb
    _Bool _migrateFromTestDirectory;	// 12 = 0xc
    unsigned int _currentMigrationAttempt;	// 16 = 0x10
    NSString *_hh2MigratorRecordDataStorePath;	// 24 = 0x18
}

+ (void)removeMigrationFailureRecord;	// IMP=0x00100000007f41e9
+ (id)lastMigrationFailure;	// IMP=0x00100000007f4186
+ (_Bool)recordMigrationFailureWithError:(id)arg1;	// IMP=0x00100000007f3dde
+ (id)unarchiveMigratorDict:(id)arg1;	// IMP=0x00100000007f3b09
+ (id)archiveMigratorDict:(id)arg1;	// IMP=0x00100000007f39ec
+ (id)prepareDictionary:(_Bool)arg1 attempt:(unsigned int)arg2 skipKeyRoll:(_Bool)arg3 forceFailForTesting:(_Bool)arg4 migrateFromTestDirectory:(_Bool)arg5 dryRun:(_Bool)arg6;	// IMP=0x00100000007f3803
+ (id)prepareDictionary:(id)arg1;	// IMP=0x00100000007f3730
+ (id)logCategory;	// IMP=0x00100000007f3700
+ (id)singleRecord;	// IMP=0x00100000007f36d0
- (void).cxx_destruct;	// IMP=0x00000000007f36bd
@property(retain, nonatomic) NSString *hh2MigratorRecordDataStorePath; // @synthesize hh2MigratorRecordDataStorePath=_hh2MigratorRecordDataStorePath;
@property(nonatomic) _Bool migrateFromTestDirectory; // @synthesize migrateFromTestDirectory=_migrateFromTestDirectory;
@property(nonatomic) _Bool forceMigrationFailureForTesting; // @synthesize forceMigrationFailureForTesting=_forceMigrationFailureForTesting;
@property(nonatomic) _Bool shouldSkipKeyRollOperations; // @synthesize shouldSkipKeyRollOperations=_shouldSkipKeyRollOperations;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(nonatomic) unsigned int currentMigrationAttempt; // @synthesize currentMigrationAttempt=_currentMigrationAttempt;
@property(nonatomic) _Bool isMigrationInProgress; // @synthesize isMigrationInProgress=_isMigrationInProgress;
- (_Bool)finishMigration;	// IMP=0x00000000007f342b
- (_Bool)isMaximumMigrationAttemptReached;	// IMP=0x00000000007f3413
- (_Bool)beginMigration;	// IMP=0x00000000007f30e0
- (_Bool)writeToDisk;	// IMP=0x00000000007f2f2a
- (_Bool)writeMigratorRecord:(id)arg1;	// IMP=0x00000000007f2c33
- (_Bool)writeNewMigrationRecord;	// IMP=0x00000000007f2a6b
- (id)attributeDescriptions;	// IMP=0x00000000007f27f0
- (void)updateValuesFromDict:(id)arg1;	// IMP=0x00000000007f25fd
- (void)unarchiveRecordFromData:(id)arg1;	// IMP=0x00000000007f23f3
- (void)readMigratorRecord;	// IMP=0x00000000007f2187
- (id)initWithLocalStorePath:(id)arg1;	// IMP=0x00000000007f20fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

