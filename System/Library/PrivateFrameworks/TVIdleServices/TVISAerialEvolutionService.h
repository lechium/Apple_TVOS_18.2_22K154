//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSCache, NSString, TVISAerialManifest, TVISAerialOrderingService, TVISAerialServiceConfiguration, TVISAerialServiceDefaults, TVISAerialStore;
@protocol TVISEvolutionServiceDelegate;

__attribute__((visibility("hidden")))
@interface TVISAerialEvolutionService
{
    id <TVISEvolutionServiceDelegate> _delegate;	// 8 = 0x8
    TVISAerialServiceConfiguration *_configuration;	// 16 = 0x10
    TVISAerialServiceDefaults *_defaults;	// 24 = 0x18
    TVISAerialStore *_store;	// 32 = 0x20
    TVISAerialOrderingService *_orderingService;	// 40 = 0x28
    NSCache *_cachedResumeData;	// 48 = 0x30
    TVISAerialManifest *_localManifest;	// 56 = 0x38
    NSBundle *_localizationBundle;	// 64 = 0x40
}

+ (id)_opportunisticScheduledUpdateFromDate:(id)arg1 interval:(long long)arg2;	// IMP=0x0010000000008c90
+ (id)log;	// IMP=0x0010000000006000
- (void).cxx_destruct;	// IMP=0x0000000000010810
@property(retain, nonatomic) NSBundle *localizationBundle; // @synthesize localizationBundle=_localizationBundle;
@property(retain, nonatomic) TVISAerialManifest *localManifest; // @synthesize localManifest=_localManifest;
@property(readonly, nonatomic) NSCache *cachedResumeData; // @synthesize cachedResumeData=_cachedResumeData;
@property(readonly, nonatomic) TVISAerialOrderingService *orderingService; // @synthesize orderingService=_orderingService;
@property(readonly, nonatomic) TVISAerialStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) TVISAerialServiceDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) TVISAerialServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000106a0
- (id)delegate;	// IMP=0x0000000000010670
- (id)_purgeableItemsInDirectoryAtURL:(id)arg1;	// IMP=0x0000000000010080
- (id)_queryNextDownloadableAssetsForCount:(unsigned long long)arg1 excludingIdentifiers:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000fd80
- (id)_downloadAssetsIfNeededWithContext:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e580
- (unsigned long long)_expectedScheduledUpdateDownloadCount;	// IMP=0x000000000000e1b0
- (id)_batchDownloadAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cbd0
- (id)_downloadAssetWithID:(id)arg1 remoteURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b280
- (void)_batchDownloadPreviewsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a2b0
- (void)_updateManifestIfNeededWithData:(id)arg1 targetFileURL:(id)arg2 isResourceTar:(_Bool)arg3;	// IMP=0x00000000000097f0
- (void)_validateLocalizedStringsBundle:(id)arg1 resourcesTarURL:(id)arg2;	// IMP=0x00000000000091e0
- (void)_fetchRemoteMetadataWithURL:(id)arg1 targetFileURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008e70
- (_Bool)_localizationNeedsValidation;	// IMP=0x0000000000008bf0
- (id)_downloadedAssetIDs;	// IMP=0x0000000000008740
- (id)_currentSnapshot;	// IMP=0x0000000000008690
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x0000000000008250
- (void)onReleaseCachedResources;	// IMP=0x0000000000008210
- (void)willAccessWorkQueue;	// IMP=0x0000000000008050
- (void)onStart;	// IMP=0x0000000000007a50
- (id)generatePurgeableManifest;	// IMP=0x0000000000007130
- (void)executeUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006100
- (_Bool)shouldScheduleUpdateForContext:(unsigned long long)arg1;	// IMP=0x00000000000060c0
- (id)queryCurrentSnapshotWithError:(id *)arg1;	// IMP=0x0000000000006090
- (id)localCacheBaseURL;	// IMP=0x0000000000006020
- (void)deactivateCategoryWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005af0
- (void)activateCategoryWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000054c0
- (void)queryAllCategoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005180
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000004fa0
- (void)TVISConformanceAerial;	// IMP=0x0000000000004f90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

