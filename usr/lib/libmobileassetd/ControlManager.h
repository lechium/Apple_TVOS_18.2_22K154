//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadManager, MADAnalyticsManager, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ControlManager : NSObject
{
    _Bool _allowSTExtractorPluginLoadFromDownloadedMABrain;	// 8 = 0x8
    _Bool _reclaimSpace;	// 9 = 0x9
    int _reclaimUrgency;	// 12 = 0xc
    DownloadManager *_downloadManager;	// 16 = 0x10
    MADAnalyticsManager *_analytics;	// 24 = 0x18
    NSMutableDictionary *_assetTypeDescriptors;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_metaDataQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_assetQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_cachedeleteQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 64 = 0x40
    long long _targetingPurgeAmount;	// 72 = 0x48
    NSString *_targetingAmountString;	// 80 = 0x50
    NSString *_reclaimUrgencyName;	// 88 = 0x58
    NSString *_reclaimVolume;	// 96 = 0x60
    NSString *_cacheDeleteOperationName;	// 104 = 0x68
    double _currentTimeInSeconds;	// 112 = 0x70
    double _preciousNumberOfSeconds;	// 120 = 0x78
    double _defaultNumberOfSeconds;	// 128 = 0x80
    double _deltaToCurrentTimeSeconds;	// 136 = 0x88
    NSString *_garbageCollectionAlterAssetType;	// 144 = 0x90
    NSString *_garbageCollectionAlterBehavior;	// 152 = 0x98
    NSDictionary *_unlockedUnreferencedDescriptors;	// 160 = 0xa0
    NSDictionary *_unlockedReferencedDescriptors;	// 168 = 0xa8
    NSDictionary *_lockedOverridableAutoAssetDescriptors;	// 176 = 0xb0
    NSDictionary *_lockedNeverRemoveAutoAssetDescriptors;	// 184 = 0xb8
    NSDictionary *_stagedAutoAssetDescriptors;	// 192 = 0xc0
}

+ (id)getStringFromXpcMessage:(id)arg1 forKey:(const char *)arg2;	// IMP=0x0060000000266165
- (void).cxx_destruct;	// IMP=0x00000000002664ba
@property(retain, nonatomic) NSDictionary *stagedAutoAssetDescriptors; // @synthesize stagedAutoAssetDescriptors=_stagedAutoAssetDescriptors;
@property(retain, nonatomic) NSDictionary *lockedNeverRemoveAutoAssetDescriptors; // @synthesize lockedNeverRemoveAutoAssetDescriptors=_lockedNeverRemoveAutoAssetDescriptors;
@property(retain, nonatomic) NSDictionary *lockedOverridableAutoAssetDescriptors; // @synthesize lockedOverridableAutoAssetDescriptors=_lockedOverridableAutoAssetDescriptors;
@property(retain, nonatomic) NSDictionary *unlockedReferencedDescriptors; // @synthesize unlockedReferencedDescriptors=_unlockedReferencedDescriptors;
@property(retain, nonatomic) NSDictionary *unlockedUnreferencedDescriptors; // @synthesize unlockedUnreferencedDescriptors=_unlockedUnreferencedDescriptors;
@property(retain, nonatomic) NSString *garbageCollectionAlterBehavior; // @synthesize garbageCollectionAlterBehavior=_garbageCollectionAlterBehavior;
@property(retain, nonatomic) NSString *garbageCollectionAlterAssetType; // @synthesize garbageCollectionAlterAssetType=_garbageCollectionAlterAssetType;
@property(nonatomic) double deltaToCurrentTimeSeconds; // @synthesize deltaToCurrentTimeSeconds=_deltaToCurrentTimeSeconds;
@property(nonatomic) double defaultNumberOfSeconds; // @synthesize defaultNumberOfSeconds=_defaultNumberOfSeconds;
@property(nonatomic) double preciousNumberOfSeconds; // @synthesize preciousNumberOfSeconds=_preciousNumberOfSeconds;
@property(nonatomic) double currentTimeInSeconds; // @synthesize currentTimeInSeconds=_currentTimeInSeconds;
@property(retain, nonatomic) NSString *cacheDeleteOperationName; // @synthesize cacheDeleteOperationName=_cacheDeleteOperationName;
@property(retain, nonatomic) NSString *reclaimVolume; // @synthesize reclaimVolume=_reclaimVolume;
@property(retain, nonatomic) NSString *reclaimUrgencyName; // @synthesize reclaimUrgencyName=_reclaimUrgencyName;
@property(nonatomic) int reclaimUrgency; // @synthesize reclaimUrgency=_reclaimUrgency;
@property(retain, nonatomic) NSString *targetingAmountString; // @synthesize targetingAmountString=_targetingAmountString;
@property(nonatomic) long long targetingPurgeAmount; // @synthesize targetingPurgeAmount=_targetingPurgeAmount;
@property(nonatomic) _Bool reclaimSpace; // @synthesize reclaimSpace=_reclaimSpace;
@property(nonatomic) _Bool allowSTExtractorPluginLoadFromDownloadedMABrain; // @synthesize allowSTExtractorPluginLoadFromDownloadedMABrain=_allowSTExtractorPluginLoadFromDownloadedMABrain;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedeleteQueue; // @synthesize cachedeleteQueue=_cachedeleteQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assetQueue; // @synthesize assetQueue=_assetQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metaDataQueue; // @synthesize metaDataQueue=_metaDataQueue;
@property(readonly, nonatomic) NSMutableDictionary *assetTypeDescriptors; // @synthesize assetTypeDescriptors=_assetTypeDescriptors;
@property(readonly, nonatomic) MADAnalyticsManager *analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)activityNotification:(id)arg1 ofStatusChange:(unsigned long long)arg2 withReason:(id)arg3;	// IMP=0x00000000002661a5
- (void)handleSecureMABundleCommand:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x0000000000266150
- (long long)handleInstallAsset:(id)arg1 forType:(id)arg2;	// IMP=0x00000000002656ae
- (void)handleUpdateMABrain:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x0000000000265699
- (void)handleGetMABrainInfo:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x0000000000265684
- (void)moveAssetIntoRepo:(id)arg1 forType:(id)arg2 forAsset:(id)arg3 cleanUp:(id)arg4 with:(id)arg5;	// IMP=0x000000000026504e
- (void)writeJsonDictionaryToFile:(id)arg1 to:(id)arg2 with:(id)arg3;	// IMP=0x000000000026484f
- (void)writeDictionaryToFile:(id)arg1 to:(id)arg2 with:(id)arg3;	// IMP=0x0000000000264339
- (long long)updateLastFetchedDate:(id)arg1 assetType:(id)arg2 withPurpose:(id)arg3 with:(id)arg4;	// IMP=0x00000000002640ab
- (void)setServerConnectionHandler:(id)arg1 with:(id)arg2 and:(id)arg3;	// IMP=0x0000000000263ec1
- (id)associateOptionalFields:(long long)arg1 fromRequest:(id)arg2 toCommandRequest:(id)arg3 forCommandTracker:(id)arg4;	// IMP=0x00000000002638dc
- (id)associateRequiredFields:(long long)arg1 fromRequest:(id)arg2 toCommandRequest:(id)arg3 forCommandTracker:(id)arg4;	// IMP=0x0000000000261eef
- (_Bool)associateFieldsFromRequest:(id)arg1 withCommandTracker:(id)arg2;	// IMP=0x0000000000261c01
- (void)handleClientConnection:(id)arg1 on:(id)arg2;	// IMP=0x000000000025f9aa
- (void)handleClientConnection:(id)arg1 usingDispatchQueue:(id)arg2;	// IMP=0x000000000025f774
- (void)handleClientCommand:(id)arg1;	// IMP=0x000000000025f4d8
- (void)handleCommandGarbageCollect:(id)arg1;	// IMP=0x000000000025f4d2
- (void)handleCommandDumpClidentUsage:(id)arg1;	// IMP=0x000000000025f4cc
- (void)handleCommandNSURLStateDump:(id)arg1;	// IMP=0x000000000025f4c6
- (void)handleCommandRepairState:(id)arg1;	// IMP=0x000000000025f4c0
- (void)handleCommandOverrideGC:(id)arg1;	// IMP=0x000000000025f4ba
- (void)handleCommandUpdateClientUsage:(id)arg1;	// IMP=0x000000000025f4b4
- (void)handleCommandConfigDownload:(id)arg1;	// IMP=0x000000000025f4ae
- (void)handleCommandSpaceCheck:(id)arg1;	// IMP=0x000000000025f4a8
- (void)handleCommandRefreshAssetState:(id)arg1;	// IMP=0x000000000025f4a2
- (void)handleCommandGetSandboxExtension:(id)arg1;	// IMP=0x000000000025f49c
- (void)handleCommandPurgeAsset:(id)arg1;	// IMP=0x000000000025f496
- (void)handleCommandDownloadAsset:(id)arg1;	// IMP=0x000000000025f490
- (void)handleCommandDownloadMetadata:(id)arg1;	// IMP=0x000000000025f48a
- (void)handleCommandLoadAssetByID:(id)arg1;	// IMP=0x000000000025f484
- (void)handleCommandCancelCatalogDownload:(id)arg1;	// IMP=0x000000000025f47e
- (void)handleCommandCancelDownload:(id)arg1;	// IMP=0x000000000025f478
- (void)handleCommandQuerInstalledIDs:(id)arg1;	// IMP=0x000000000025f472
- (void)handleCommandQueryAssetType:(id)arg1;	// IMP=0x000000000025f46c
- (void)handleCommandSetPreferences:(id)arg1;	// IMP=0x000000000025f466
- (void)handleCommandPurgeCatalogs:(id)arg1;	// IMP=0x000000000025f460
- (void)handleCommandPurgeAll:(id)arg1;	// IMP=0x000000000025f45a
- (void)handleCommandCleanV1Assets:(id)arg1;	// IMP=0x000000000025f454
- (void)handleCommandMigrateAssets:(id)arg1;	// IMP=0x000000000025f44e
- (void)handleCommandServerURLOverride:(id)arg1;	// IMP=0x000000000025f448
- (void)handleCommandDownloadPMV:(id)arg1;	// IMP=0x000000000025f442
- (void)handleCommandQueryPMV:(id)arg1;	// IMP=0x000000000025f43c
- (void)handleCommandCancelPMVDownload:(id)arg1;	// IMP=0x000000000025f436
- (void)handleCommandGetPallasURL:(id)arg1;	// IMP=0x000000000025f430
- (void)handleCommandSetPallasURL:(id)arg1;	// IMP=0x000000000025f42a
- (void)handleCommandSetPallasEnabled:(id)arg1;	// IMP=0x000000000025f424
- (void)handleCommandSetPallasAudience:(id)arg1;	// IMP=0x000000000025f41e
- (void)handleCommandGetPallasEnabled:(id)arg1;	// IMP=0x000000000025f418
- (void)handleCommandGetPallasAudience:(id)arg1;	// IMP=0x000000000025f412
- (void)handleReportingRequest:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x000000000025f0b8
- (void)handleMigrateAssetsRequest:(id)arg1 using:(id)arg2 and:(id)arg3;	// IMP=0x000000000025e863
- (void)handleUpdateClientUsage:(id)arg1 using:(id)arg2 and:(id)arg3 clientName:(id)arg4;	// IMP=0x000000000025e1cc
- (void)dumpClientUsage:(id)arg1 using:(id)arg2 and:(id)arg3 clientName:(id)arg4;	// IMP=0x000000000025de7d
- (void)overrideGCValue:(id)arg1 using:(id)arg2 and:(id)arg3 clientName:(id)arg4;	// IMP=0x000000000025dade
- (void)handleGarbageCollect:(id)arg1 and:(id)arg2;	// IMP=0x000000000025d9ec
- (void)purgeAll:(id)arg1 and:(id)arg2 assetTypesList:(id)arg3 clientName:(id)arg4;	// IMP=0x000000000025cd0c
- (id)dictionaryWithArrayOfStringValues:(id)arg1 forXpcKey:(const char *)arg2 andLengthKey:(const char *)arg3 failureReason:(id *)arg4;	// IMP=0x000000000025c831
- (id)dictionaryWithArrayOfStringValues:(id)arg1 forXpcKey:(const char *)arg2 andLengthKey:(const char *)arg3 clientName:(id)arg4;	// IMP=0x000000000025c386
- (void)purgeCatalogs:(id)arg1 and:(id)arg2 assetTypesList:(id)arg3 clientName:(id)arg4;	// IMP=0x000000000025bdb1
- (void)getProductMarketingVersions:(id)arg1 and:(id)arg2 clientName:(id)arg3 assetType:(id)arg4;	// IMP=0x000000000025bce4
- (_Bool)purgeCatalogOfType:(id)arg1 clientName:(id)arg2 withPurpose:(id)arg3;	// IMP=0x000000000025ba22
- (_Bool)purgeAllAssetsOfType:(id)arg1 forPurpose:(id)arg2 clientName:(id)arg3 exceptForAssetIds:(id)arg4;	// IMP=0x000000000025b284
- (_Bool)purgeAllAssetsInDirectory:(id)arg1 clientName:(id)arg2 exceptForAssetIds:(id)arg3;	// IMP=0x000000000025adfb
- (void)respondToCacheDelete:(_Bool)arg1 targetingPurgeAmount:(long long)arg2 cacheDeleteResults:(id)arg3 withUrgency:(int)arg4 forVolume:(id)arg5 then:(CDUnknownBlockType)arg6;	// IMP=0x0000000000258bc3
- (_Bool)freedUpEnoughSpace:(long long)arg1;	// IMP=0x0000000000258b86
- (long long)performCacheDeleteForGroup:(id)arg1 forAssetTypeDir:(id)arg2 timeTaken:(double *)arg3 cacheDeleteResults:(id)arg4;	// IMP=0x0000000000258351
- (long long)performCacheDeleteCollection:(id)arg1 forCollectionType:(long long)arg2 withGarbageCollectionTypes:(id)arg3 cacheDeleteResults:(id)arg4;	// IMP=0x00000000002580c8
- (long long)performGarbageCollectionOfType:(long long)arg1 forAssetTypeDir:(id)arg2 fromDescriptors:(id)arg3 cacheDeleteResults:(id)arg4;	// IMP=0x0000000000257710
- (double)alterSecondsBeforeCollection:(double)arg1 forAssetTypeDir:(id)arg2 determinedDescriptorType:(long long)arg3 fromDescriptors:(id)arg4 isAutoAsset:(_Bool *)arg5 autoAssetDescriptor:(id *)arg6 assetFilesystemSize:(long long *)arg7 retentionPolicy:(long long)arg8;	// IMP=0x000000000025745f
- (id)alterGarbageColletionLevel:(id)arg1 basedOnAssetDirectory:(id)arg2;	// IMP=0x00000000002572ac
- (void)maintainReclaimCountsByCollectionType:(long long)arg1 reclaimAssetSpace:(long long)arg2 cacheDeleteResults:(id)arg3;	// IMP=0x0000000000257204
- (id)locateDescriptorForAssetDirectory:(id)arg1 fromDescriptors:(id)arg2;	// IMP=0x0000000000256ec9
- (id)chooseDescriptorsOfType:(long long)arg1;	// IMP=0x0000000000256e8e
- (long long)garbageCollectionDescriptorType:(id)arg1;	// IMP=0x00000000002561f7
- (id)getAssetAttributes:(id)arg1;	// IMP=0x00000000002560e6
- (id)getAssetAttributes:(id)arg1 purpose:(id)arg2 assetID:(id)arg3;	// IMP=0x0000000000255fbb
- (void)handleServerUrlOverride:(id)arg1 message:(id)arg2 client:(id)arg3 clientName:(id)arg4;	// IMP=0x0000000000255d13
- (void)handleGetServerUrl:(id)arg1 message:(id)arg2 client:(id)arg3 clientName:(id)arg4;	// IMP=0x0000000000255b1f
- (void)handleGetAllowNonUserInitiated:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x0000000000255a51
- (void)handleDataMigrator:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x00000000002559de
- (void)handleEnsureDataVault:(id)arg1 message:(id)arg2 client:(id)arg3 clientName:(id)arg4;	// IMP=0x000000000025585f
- (void)setPreferences:(id)arg1 replyUsing:(id)arg2 and:(id)arg3;	// IMP=0x00000000002557e9
- (void)setPreferenceKeyAsync:(id)arg1 andValue:(id)arg2 allowNilToClear:(_Bool)arg3 replyUsing:(id)arg4 and:(id)arg5;	// IMP=0x0000000000255752
- (void)setPreferenceKeySync:(id)arg1 andValue:(id)arg2 allowNilToClear:(_Bool)arg3;	// IMP=0x00000000002556fe
- (void)removeAssetDir:(id)arg1 assetType:(id)arg2 clientName:(id)arg3 using:(id)arg4;	// IMP=0x0000000000254cc4
- (long long)removeDirectoryAtPath:(id)arg1 firstRenamingWithExtension:(id)arg2;	// IMP=0x0000000000254c64
- (void)cancelDownload:(id)arg1 using:(id)arg2 for:(id)arg3 assetType:(id)arg4 purpose:(id)arg5 withExtension:(id)arg6;	// IMP=0x0000000000254708
- (id)newExtractor:(id)arg1 downloadOptions:(id)arg2 sessionID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000253a47
- (id)hashToString:(id)arg1;	// IMP=0x000000000025398e
- (void)checkAndInitiateDownloadForAssetType:(id)arg1 message:(id)arg2 forClientName:(id)arg3 usingConnection:(id)arg4 requiringClientExtractor:(_Bool)arg5;	// IMP=0x0000000000253045
- (_Bool)isAssetInCatalog:(id)arg1 assetId:(id)arg2;	// IMP=0x0000000000253030
- (_Bool)isAssetInCatalog:(id)arg1 assetId:(id)arg2 withPurpose:(id)arg3;	// IMP=0x0000000000252f75
- (void)getStateOfAsset:(id)arg1 incoming:(id)arg2 assetType:(id)arg3;	// IMP=0x0000000000252b76
- (long long)getStateOfAssetInCatalog:(id)arg1 assetId:(id)arg2 withPurpose:(id)arg3;	// IMP=0x0000000000252a20
- (void)sendStateOfAssetReply:(id)arg1 incoming:(id)arg2 with:(long long)arg3;	// IMP=0x00000000002529a7
- (void)ensureProperDirectoryState;	// IMP=0x00000000002527d2
- (void)removeDownloadsNotRecentlyInFlight:(id)arg1;	// IMP=0x0000000000252530
- (void)cleanObsoleteSURepo;	// IMP=0x00000000002517f5
- (void)ensureSUDownloadTempDir;	// IMP=0x0000000000251602
- (id)checkEntitlement:(id)arg1 forAssetTypes:(id)arg2;	// IMP=0x0000000000251319
- (id)checkEntitlement:(id)arg1 forAssetType:(id)arg2;	// IMP=0x0000000000251230
- (_Bool)checkEntitlementAndRespondIfErrorForConnection:(id)arg1 usingMessage:(id)arg2 forAssetTypes:(id)arg3 withCommand:(long long)arg4;	// IMP=0x0000000000250f36
- (_Bool)checkEntitlementAndRespondIfErrorForConnection:(id)arg1 usingMessage:(id)arg2 forAssetType:(id)arg3 withCommand:(long long)arg4;	// IMP=0x0000000000250e55
- (_Bool)isEntitledForCommand:(long long)arg1 forConnection:(id)arg2 forAssetType:(id)arg3;	// IMP=0x0000000000250b65
- (_Bool)isAllowlistedForCommand:(long long)arg1;	// IMP=0x0000000000250a73
- (_Bool)isCommandAllowedForAllClientsWithoutAssetType:(long long)arg1;	// IMP=0x0000000000250a07
- (_Bool)isAssetTypeOptionalForCommand:(long long)arg1;	// IMP=0x00000000002509bc
- (_Bool)isAssetTypeRequiredForCommand:(long long)arg1;	// IMP=0x000000000025097b
- (int)getNotEntitledResultForCommand:(unsigned long long)arg1;	// IMP=0x0000000000250932
- (_Bool)commandRequiresForcedSoftwareUpdateType:(id)arg1;	// IMP=0x00000000002508b4
- (_Bool)isCommandRequiringForcedSoftwareUpdateType:(long long)arg1;	// IMP=0x000000000025086e
- (void)handleLoadRequest:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4;	// IMP=0x00000000002502d9
- (id)decodeXpcObject:(id)arg1 ofClass:(Class)arg2 dataKey:(id)arg3 lengthKey:(id)arg4 decodeClasses:(id)arg5 error:(id *)arg6;	// IMP=0x000000000024fe9e
- (void)handleQueryRequest:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4;	// IMP=0x000000000024f777
- (void)handlePmvRequest:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4;	// IMP=0x000000000024f403
- (void)determineAssets:(id)arg1 clientName:(id)arg2 connection:(id)arg3 downloadingTasks:(id)arg4 message:(id)arg5 resultTypes:(long long)arg6 queryArray:(id)arg7 isForSpecificAsset:(_Bool)arg8 specificAssetId:(id)arg9 specificAllowedDifferences:(id)arg10;	// IMP=0x000000000024e555
- (void)determineOneAsset:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4 specificAssetId:(id)arg5 specificAllowedDifferences:(id)arg6;	// IMP=0x000000000024e510
- (void)determineAssets:(id)arg1 clientName:(id)arg2 connection:(id)arg3 downloadingTasks:(id)arg4 message:(id)arg5 resultTypes:(long long)arg6 queryArray:(id)arg7;	// IMP=0x000000000024e4d4
- (void)determinePmv:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4 queryDict:(id)arg5;	// IMP=0x000000000024d7cc
- (_Bool)categorizeAssetResults:(id)arg1 fromCatalogIds:(id)arg2 repositoryIds:(id)arg3 andPreinstalledIds:(id)arg4 intoServerOnlyIds:(id *)arg5 installedCatalogIds:(id *)arg6 andObsoleteIds:(id *)arg7;	// IMP=0x000000000024d696
- (_Bool)loadCatalog:(id)arg1 catalogAssets:(id *)arg2 assetIds:(id *)arg3 postedDate:(id *)arg4 lastFetchDate:(id *)arg5 catalogInfo:(id *)arg6;	// IMP=0x000000000024d66a
- (_Bool)loadCatalog:(id)arg1 catalogAssets:(id *)arg2 assetIds:(id *)arg3 postedDate:(id *)arg4 lastFetchDate:(id *)arg5 catalogInfo:(id *)arg6 withPurpose:(id)arg7;	// IMP=0x000000000024d419
- (_Bool)loadRepository:(id)arg1 localIds:(id *)arg2;	// IMP=0x000000000024d404
- (_Bool)loadRepository:(id)arg1 localIds:(id *)arg2 withPurpose:(id)arg3;	// IMP=0x000000000024d2da
- (_Bool)returnTypeIncludesServerOnly:(long long)arg1;	// IMP=0x000000000024d2c0
- (_Bool)returnTypeIncludesInstalledInCatalog:(long long)arg1;	// IMP=0x000000000024d2a6
- (_Bool)returnTypeIncludesObsolete:(long long)arg1 andHasCatalog:(_Bool)arg2;	// IMP=0x000000000024d28a
- (id)applyPmvQuery:(id)arg1 queryDict:(id)arg2 explanation:(id *)arg3;	// IMP=0x000000000024cf47
- (id)determineBestMatchFor:(id)arg1 absoluteId:(id)arg2 allowedDifferences:(id)arg3 fromResults:(id)arg4 isExact:(_Bool *)arg5 candidates:(unsigned long long *)arg6 bestMatch:(id *)arg7 differencesFound:(id *)arg8 missedTypeAndAssetIdMatch:(id *)arg9;	// IMP=0x000000000024c383
- (_Bool)hasOnlyAllowedDifferencesFrom:(id)arg1 inAttributes:(id)arg2 assetId:(id)arg3 assetType:(id)arg4 allowed:(id)arg5 foundAbsoluteId:(id *)arg6 foundDiff:(id *)arg7;	// IMP=0x000000000024c208
- (_Bool)returnTypeIncludesPreinstalled:(long long)arg1;	// IMP=0x000000000024c1fb
- (id)getCatalogLastModifiedDate:(id)arg1 ifFromXmlUrl:(id)arg2 withPurpose:(id)arg3;	// IMP=0x000000000024bae8
- (id)getMetadataFromCatalog:(id)arg1 key:(id)arg2 withPurpose:(id)arg3;	// IMP=0x000000000024ba00
- (id)newCatalogLoad:(id)arg1;	// IMP=0x000000000024b9ec
- (id)newCatalogLoad:(id)arg1 withPurpose:(id)arg2;	// IMP=0x000000000024b7cb
- (void)sendQueryResults:(id)arg1 assetType:(id)arg2 purpose:(id)arg3 catalogInfo:(id)arg4 returnTypes:(long long)arg5 postedDate:(id)arg6 lastFetchedDate:(id)arg7 result:(long long)arg8 isFiltered:(_Bool)arg9 requireSpecificAsset:(_Bool)arg10 connection:(id)arg11 message:(id)arg12 clientName:(id)arg13;	// IMP=0x000000000024b23e
- (void)sendPmvResults:(id)arg1 pmvInfo:(id)arg2 postedDate:(id)arg3 lastFetchedDate:(id)arg4 result:(long long)arg5 connection:(id)arg6 message:(id)arg7;	// IMP=0x000000000024b02a
- (_Bool)beforeFirstUnlock;	// IMP=0x000000000024b011
- (void)registerForCacheDeleteMigration;	// IMP=0x000000000024afeb
- (id)init;	// IMP=0x000000000024ad3a
- (void)updateSpaceAttributionForBundleID:(id)arg1 assetPath:(id)arg2 doRegistration:(_Bool)arg3;	// IMP=0x000000000024ad34
- (void)registerAssetsWithSpaceAttributes;	// IMP=0x000000000024ad2e
- (id)getSAFRegistrationBundleID:(id)arg1;	// IMP=0x000000000024ad26
- (void)loadAssetTypeDescriptors;	// IMP=0x000000000024a96e
- (void)applyDataVaults;	// IMP=0x000000000024a641
- (void)removeAllObsoletedV1Assets;	// IMP=0x000000000024a39f
- (id)convertToArchiveable:(id)arg1 incoming:(id)arg2 overrideState:(long long)arg3 filterToIds:(id)arg4 withPurpose:(id)arg5;	// IMP=0x0000000000249fd0

@end

