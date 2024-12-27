//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, SQLiteConnectionOptions;
@protocol SQLiteConnectionDelegate;

@interface SQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <SQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    NSMapTable *_preparedStatements;	// 32 = 0x20
    long long _transactionDepth;	// 40 = 0x28
    _Bool _transactionWantsRollback;	// 48 = 0x30
    SQLiteConnectionOptions *_options;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000c27e7
- (void)dealloc;	// IMP=0x00100000000c0eb9

@end

