//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _TtC9appstored6LogKey;

@interface AppInstallEntity
{
    _TtC9appstored6LogKey *_logKey;	// 8 = 0x8
    _Bool _isAutomatic;	// 16 = 0x10
    _Bool _isUpdate;	// 17 = 0x11
    _Bool _isRestore;	// 18 = 0x12
    NSString *_installVerificationToken;	// 24 = 0x18
}

+ (Class)memoryEntityClass;	// IMP=0x0040000000112ce2
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0010000000112b69
+ (id)databaseTable;	// IMP=0x0010000000112b5c
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x0010000000112762
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000001126f2
- (void).cxx_destruct;	// IMP=0x0020000000112cf3
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000111736

@end

