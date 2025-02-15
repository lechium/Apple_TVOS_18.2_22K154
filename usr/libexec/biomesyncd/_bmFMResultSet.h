//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, _bmFMDatabase, _bmFMStatement;

@interface _bmFMResultSet : NSObject
{
    NSMutableDictionary *_columnNameToIndexMap;	// 8 = 0x8
    _Bool _shouldAutoClose;	// 16 = 0x10
    _bmFMDatabase *_parentDB;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
    _bmFMStatement *_statement;	// 40 = 0x28
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 shouldAutoClose:(_Bool)arg3;	// IMP=0x004000000004ecf0
- (void).cxx_destruct;	// IMP=0x00100000000503e4
@property(nonatomic) _Bool shouldAutoClose; // @synthesize shouldAutoClose=_shouldAutoClose;
@property(retain) _bmFMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) _bmFMDatabase *parentDB; // @synthesize parentDB=_parentDB;
- (void)_tryLogSqliteColumnError:(int)arg1;	// IMP=0x0010000000050228
- (_Bool)bindWithDictionary:(id)arg1;	// IMP=0x001000000005020e
- (_Bool)bindWithArray:(id)arg1;	// IMP=0x00100000000501f7
- (_Bool)bindWithArray:(id)arg1 orDictionary:(id)arg2 orVAList:(struct __va_list_tag [1])arg3;	// IMP=0x001000000005015f
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000005014d
- (id)objectAtIndexedSubscript:(int)arg1;	// IMP=0x001000000005013b
- (id)columnNameForIndex:(int)arg1;	// IMP=0x00100000000500ed
- (id)objectForColumn:(id)arg1;	// IMP=0x00100000000500bd
- (id)objectForColumnName:(id)arg1;	// IMP=0x00100000000500ab
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x001000000004ff80
- (const char *)UTF8StringForColumnName:(id)arg1;	// IMP=0x001000000004ff6e
- (const char *)UTF8StringForColumn:(id)arg1;	// IMP=0x001000000004ff3e
- (const char *)UTF8StringForColumnIndex:(int)arg1;	// IMP=0x001000000004feb0
- (_Bool)columnIsNull:(id)arg1;	// IMP=0x001000000004fe80
- (_Bool)columnIndexIsNull:(int)arg1;	// IMP=0x001000000004fe50
- (id)dataNoCopyForColumnIndex:(int)arg1;	// IMP=0x001000000004fd6b
- (id)dataNoCopyForColumn:(id)arg1;	// IMP=0x001000000004fd3b
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x001000000004fc59
- (id)dataForColumn:(id)arg1;	// IMP=0x001000000004fc29
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x001000000004fb24
- (id)dateForColumn:(id)arg1;	// IMP=0x001000000004faf4
- (id)stringForColumn:(id)arg1;	// IMP=0x001000000004fac4
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x001000000004fa10
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x001000000004f9e7
- (double)doubleForColumn:(id)arg1;	// IMP=0x001000000004f9b7
- (_Bool)boolForColumnIndex:(int)arg1;	// IMP=0x001000000004f99f
- (_Bool)boolForColumn:(id)arg1;	// IMP=0x001000000004f96f
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;	// IMP=0x001000000004f95d
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;	// IMP=0x001000000004f92d
- (long long)longLongIntForColumnIndex:(int)arg1;	// IMP=0x001000000004f904
- (long long)longLongIntForColumn:(id)arg1;	// IMP=0x001000000004f8d4
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x001000000004f8ab
- (long long)longForColumn:(id)arg1;	// IMP=0x001000000004f87b
- (int)intForColumnIndex:(int)arg1;	// IMP=0x001000000004f852
- (int)intForColumn:(id)arg1;	// IMP=0x001000000004f822
- (int)columnIndexForName:(id)arg1;	// IMP=0x001000000004f769
- (_Bool)hasAnotherRow;	// IMP=0x001000000004f744
- (int)internalStepWithError:(id *)arg1;	// IMP=0x001000000004f4fa
- (_Bool)stepWithError:(id *)arg1;	// IMP=0x001000000004f4e1
- (_Bool)step;	// IMP=0x001000000004f4cd
- (_Bool)nextWithError:(id *)arg1;	// IMP=0x001000000004f4b4
- (_Bool)next;	// IMP=0x001000000004f4a0
@property(readonly, nonatomic) NSDictionary *resultDictionary;
- (id)resultDict;	// IMP=0x001000000004f1c1
- (void)kvcMagic:(id)arg1;	// IMP=0x001000000004f06f
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
@property(readonly, nonatomic) int columnCount;
- (void)close;	// IMP=0x001000000004ee89
- (void)dealloc;	// IMP=0x001000000004ee23
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021407

@end

