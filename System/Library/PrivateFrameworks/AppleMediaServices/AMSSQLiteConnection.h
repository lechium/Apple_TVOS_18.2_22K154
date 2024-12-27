//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;
@protocol AMSSQLiteConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <AMSSQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    AMSSQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004c2468
@property(readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c22b7
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c20fb
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c1fe6
- (_Bool)_resetAfterIOError;	// IMP=0x00000000004c1e06
- (_Bool)_resetAfterCorruptionError;	// IMP=0x00000000004c1da6
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c1bc5
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00000000004c18ae
- (_Bool)_openAndAllowRetry:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000004c1477
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x00000000004c145d
- (void)_flushAfterTransactionBlocks;	// IMP=0x00000000004c128d
- (void)_finalizeAllStatements;	// IMP=0x00000000004c1108
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c0d18
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c0c52
- (_Bool)_close;	// IMP=0x00000000004c0ae4
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c0ad2
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;	// IMP=0x00000000004c0a19
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c08e3
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c07e9
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00000000004c07d7
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c06a0
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000004c0505
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c04f0
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c0356
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000004c0229
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c0214
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c00e8
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c003b
- (_Bool)close;	// IMP=0x00000000004c0029
- (void)dealloc;	// IMP=0x00000000004bffeb
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000004bff44

@end

