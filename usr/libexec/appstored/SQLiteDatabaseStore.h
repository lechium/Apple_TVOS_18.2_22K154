//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;

@interface SQLiteDatabaseStore : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x002000000022ed84
+ (id)storeDescriptor;	// IMP=0x001000000022ed7c
- (void).cxx_destruct;	// IMP=0x002000000022ede4
@property(readonly) SQLiteDatabase *database; // @synthesize database=_database;
- (void)asyncReadUsingSession:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022edbf
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x001000000022edae
- (void)asyncModifyUsingTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022ed9d
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000022ed8c
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000022ed11

@end

