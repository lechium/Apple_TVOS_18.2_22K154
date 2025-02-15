//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SQLiteConnection;

@interface SQLiteStatement : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    SQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008a172
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x001000000008a144
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008a0f2
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008a0a0
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000008a02e
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089f25
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089e38
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x0010000000089dfb
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089dbe
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089d81
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089d40
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089d03
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089ca8
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089c6a
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089bb9
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089b0c
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000089ab1
- (int)step;	// IMP=0x0010000000089a70
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00100000000899ec
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x0010000000089970
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x00100000000897a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

