//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@protocol AMSSQLiteEntity <NSObject>
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;
+ (NSString *)databaseTable;
- (_Bool)deleteFromDatabase;
- (void)setObject:(id)arg1 forKeyedSubscript:(NSString *)arg2;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (_Bool)setValuesWithDictionary:(NSDictionary *)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (NSDictionary *)getValuesForProperties:(NSArray *)arg1;
- (id)valueForProperty:(NSString *)arg1;
@end

