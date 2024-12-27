//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray;

@interface DownloadAssetEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x00400000000a56c5
+ (Class)memoryEntityClass;	// IMP=0x00100000000a55e5
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00100000000a5591
+ (id)databaseTable;	// IMP=0x00100000000a5584
+ (id)databasePropertyToSetClientProperty:(id)arg1;	// IMP=0x00100000000a5542
+ (id)databasePropertyToGetClientProperty:(id)arg1;	// IMP=0x00100000000a5529
+ (id)newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;	// IMP=0x00100000000a4b8e
+ (id)copyDatabaseDictionaryWithRequestProperties:(id)arg1;	// IMP=0x00100000000a4900
- (_Bool)deleteFromDatabase;	// IMP=0x00200000000a55f6
@property(readonly, nonatomic) NSArray *sinfs;
- (id)copyURLRequestProperties;	// IMP=0x00100000000a4e1a
- (id)copyStoreDownloadKeyCookie;	// IMP=0x00100000000a4cb1

@end

