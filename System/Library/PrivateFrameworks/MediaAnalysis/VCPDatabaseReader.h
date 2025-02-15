//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface VCPDatabaseReader : NSObject
{
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;	// 8 = 0x8
    NSString *_filepath;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
}

+ (id)databaseWithURL:(id)arg1;	// IMP=0x0060000000157efe
+ (id)databaseForPhotoLibraryURL:(id)arg1;	// IMP=0x0060000000157e99
+ (id)databaseForPhotoLibrary:(id)arg1;	// IMP=0x0060000000157e34
+ (_Bool)shouldQueryInternalFields;	// IMP=0x0060000000157acd
- (void).cxx_destruct;	// IMP=0x0000000000160cfa
- (int)queryProgressHistoryRecords:(id *)arg1 sinceDate:(id)arg2;	// IMP=0x00000000001606ea
- (int)querySchedulingHistoryRecords:(id *)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000015ffd5
- (int)querySchedulingHistoryRecords:(id *)arg1 forActivityID:(unsigned long long)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x000000000015f86a
- (id)loadKeyValues;	// IMP=0x000000000015f3d0
- (long long)valueForKey:(id)arg1;	// IMP=0x000000000015f1e8
- (int)_queryValue:(long long *)arg1 forKey:(id)arg2;	// IMP=0x000000000015eed2
- (unsigned long long)countForTaskID:(unsigned long long)arg1 withProcessingStatus:(unsigned long long)arg2;	// IMP=0x000000000015ebc8
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2;	// IMP=0x000000000015e729
- (id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x000000000015dcaa
- (id)queryAssetsAnalyzedSince:(id)arg1;	// IMP=0x000000000015d6e6
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;	// IMP=0x000000000015ceb6
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;	// IMP=0x000000000015ca4c
- (id)queryAnalysisPropertiesForAssets:(id)arg1;	// IMP=0x000000000015c26b
- (id)queryAnalysisPropertiesForAsset:(id)arg1;	// IMP=0x000000000015bf4c
- (id)queryAnalysisForAsset:(id)arg1;	// IMP=0x000000000015bbf4
- (id)queryBlacklistedLocalIdentifiers;	// IMP=0x000000000015b7af
- (id)blacklistedLocalIdentifiersFromAssets:(id)arg1;	// IMP=0x000000000015afab
- (_Bool)isAssetBlacklisted:(id)arg1 blacklistDate:(id *)arg2;	// IMP=0x000000000015ab3f
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015a891
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;	// IMP=0x0000000000159f9a
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;	// IMP=0x00000000001598f4
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;	// IMP=0x0000000000159309
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;	// IMP=0x000000000015901e
- (int)queryHeaderForAsset:(id)arg1 analysis:(id *)arg2 assetId:(long long *)arg3;	// IMP=0x0000000000158c84
- (int)parseResults:(struct sqlite3_stmt *)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;	// IMP=0x000000000015897f
- (int)parseHeader:(struct sqlite3_stmt *)arg1 startColumn:(int)arg2 analysis:(id)arg3;	// IMP=0x0000000000158445
- (void)closeDatabase;	// IMP=0x0000000000158424
- (int)openDatabase;	// IMP=0x0000000000158057
- (id)databaseDirectoryPath;	// IMP=0x0000000000158041
- (_Bool)exists;	// IMP=0x0000000000157fd2
- (void)dealloc;	// IMP=0x0000000000157f63
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x0000000000157d69
- (id)initWithPhotoLibraryURL:(id)arg1;	// IMP=0x0000000000157bde
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000157ad5

@end

