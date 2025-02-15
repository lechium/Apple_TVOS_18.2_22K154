//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SEMDatabaseInsertBuilder
{
    unsigned long long _numberOfColumns;	// 8 = 0x8
    NSArray *_columnNames;	// 16 = 0x10
    NSArray *_columnValues;	// 24 = 0x18
    NSArray *_returningColumns;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000021bf0
- (_Bool)_setError:(id *)arg1 withCode:(long long)arg2;	// IMP=0x0000000000021ba4
- (void)setReturningColumns:(id)arg1;	// IMP=0x0000000000021b70
- (void)setColumnValues:(id)arg1;	// IMP=0x0000000000021b3c
- (id)buildWithError:(id *)arg1;	// IMP=0x00000000000219c0
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2;	// IMP=0x0000000000021889

@end

