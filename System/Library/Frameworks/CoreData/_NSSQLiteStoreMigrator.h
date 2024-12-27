//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMappingModel, NSMutableArray, NSMutableDictionary, NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface _NSSQLiteStoreMigrator : NSObject
{
    NSSQLCore *_store;	// 8 = 0x8
    NSSQLModel *_dstModel;	// 16 = 0x10
    NSSQLModel *_srcModel;	// 24 = 0x18
    NSSQLiteAdapter *_adapter;	// 32 = 0x20
    NSMappingModel *_mappingModel;	// 40 = 0x28
    NSSQLiteConnection *_connection;	// 48 = 0x30
    NSArray *_tableGenerationSQL;	// 56 = 0x38
    NSArray *_existingTableNames;	// 64 = 0x40
    NSMutableDictionary *_reindexedEntities;	// 72 = 0x48
    NSMutableDictionary *_reindexedPropertiesByEntity;	// 80 = 0x50
    NSMutableDictionary *_sourceToDestinationEntityMap;	// 88 = 0x58
    NSMutableDictionary *_addedEntityMigrations;	// 96 = 0x60
    NSMutableDictionary *_removedEntityMigrations;	// 104 = 0x68
    NSMutableDictionary *_transformedEntityMigrations;	// 112 = 0x70
    NSMutableDictionary *_copiedEntityMigrations;	// 120 = 0x78
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;	// 128 = 0x80
    _Bool _hasPKTableChanges;	// 136 = 0x88
    NSMutableArray *_pkTableUpdateStatements;	// 144 = 0x90
    NSMutableDictionary *_attributeExtensionsToUpdate;	// 152 = 0x98
    NSMutableArray *_indexesToCreate;	// 160 = 0xa0
    NSMutableArray *_indexesToDrop;	// 168 = 0xa8
    NSMutableArray *_defaultValueStatements;	// 176 = 0xb0
    NSMutableArray *_derivationsToDrop;	// 184 = 0xb8
    NSMutableArray *_derivationsToRun;	// 192 = 0xc0
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;	// 200 = 0xc8
    NSMutableArray *_cloudKitUpdateStatements;	// 208 = 0xd0
    _Bool _hasCloudKitTables;	// 216 = 0xd8
    _Bool _hasDeferredLightweightMigration;	// 217 = 0xd9
    _Bool _forcedMigration;	// 218 = 0xda
    NSString *_destinationConfigurationForCloudKitValidation;	// 224 = 0xe0
    NSString *_stageLabel;	// 232 = 0xe8
}

+ (void)_setAnnotatesMigrationMetadata:(_Bool)arg1;	// IMP=0x006000000022d4d6
+ (_Bool)_annotatesMigrationMetadata;	// IMP=0x006000000022d4ac
@property(retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation; // @synthesize destinationConfigurationForCloudKitValidation=_destinationConfigurationForCloudKitValidation;
- (void)dealloc;	// IMP=0x000000000022d83c

@end

