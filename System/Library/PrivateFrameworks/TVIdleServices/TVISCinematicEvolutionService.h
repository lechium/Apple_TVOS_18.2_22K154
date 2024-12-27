//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVISBagProvider, TVISCinematicManifest, TVISCinematicServiceConfiguration, TVISCinematicStore;
@protocol TVISEvolutionServiceDelegate;

__attribute__((visibility("hidden")))
@interface TVISCinematicEvolutionService
{
    _Bool _arePreviewsEnabled;	// 8 = 0x8
    id <TVISEvolutionServiceDelegate> _delegate;	// 16 = 0x10
    TVISCinematicServiceConfiguration *_configuration;	// 24 = 0x18
    TVISCinematicStore *_store;	// 32 = 0x20
    TVISBagProvider *_bagProvider;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    long long _snapshotState;	// 56 = 0x38
    NSString *_activeAssetVariant;	// 64 = 0x40
    TVISCinematicManifest *_manifest;	// 72 = 0x48
}

+ (id)_fileNameForAssetWithID:(id)arg1;	// IMP=0x001000000009e5a0
+ (id)log;	// IMP=0x0010000000094ba0
- (void).cxx_destruct;	// IMP=0x000000000009e870
@property(retain, nonatomic) TVISCinematicManifest *manifest; // @synthesize manifest=_manifest;
@property(retain) NSString *activeAssetVariant; // @synthesize activeAssetVariant=_activeAssetVariant;
@property(nonatomic) long long snapshotState; // @synthesize snapshotState=_snapshotState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool arePreviewsEnabled; // @synthesize arePreviewsEnabled=_arePreviewsEnabled;
@property(readonly, nonatomic) TVISBagProvider *bagProvider; // @synthesize bagProvider=_bagProvider;
@property(readonly, nonatomic) TVISCinematicStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) TVISCinematicServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)setDelegate:(id)arg1;	// IMP=0x000000000009e650
- (id)delegate;	// IMP=0x000000000009e620
- (id)_resolveCostMatrix;	// IMP=0x000000000009e1a0
- (void)_updatePlayOrderIfNeeded;	// IMP=0x000000000009d910
- (id)_purgeableItemsInDirectoryAtURL:(id)arg1;	// IMP=0x000000000009d320
- (id)_downloadAssetWithIdentifier:(id)arg1 remoteURL:(id)arg2 targetURL:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009ccc0
- (id)_downloadAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b910
- (id)_downloadAssetsIfNeededWithContext:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ad80
- (void)_downloadPreviewsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099f10
- (void)_updateStoreFromManifestAndPurgeCacheIfNeeded;	// IMP=0x0000000000099c90
- (void)_updateManifestIfNeededWithData:(id)arg1 targetFileURL:(id)arg2;	// IMP=0x00000000000993b0
- (void)_fetchRemoteMetadataWithURL:(id)arg1 targetFileURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000098fe0
- (id)_downloadedAssetIDs;	// IMP=0x0000000000098b30
- (id)_currentSnapshot;	// IMP=0x0000000000098900
- (long long)_resolveCurrentSnapshotState;	// IMP=0x0000000000098860
- (void)_queryRemoteMetadataURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000097fc0
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x0000000000097c70
- (void)_updateSnapshotState;	// IMP=0x0000000000097a40
- (void)_updateStateWithRemoteMetadataURL:(id)arg1;	// IMP=0x00000000000979d0
- (void)_establishInitialState;	// IMP=0x0000000000097810
- (void)didPurgeAssetsWithUrgency:(long long)arg1;	// IMP=0x0000000000097720
- (void)didEndUpdate:(id)arg1;	// IMP=0x0000000000097610
- (void)onReleaseCachedResources;	// IMP=0x00000000000975e0
- (void)willAccessWorkQueue;	// IMP=0x0000000000097450
- (void)onStart;	// IMP=0x0000000000096c60
- (id)generatePurgeableManifest;	// IMP=0x0000000000095f60
- (void)executeUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000094d90
- (_Bool)shouldScheduleUpdateForContext:(unsigned long long)arg1;	// IMP=0x0000000000094d50
- (id)queryCurrentSnapshotWithError:(id *)arg1;	// IMP=0x0000000000094c30
- (id)localCacheBaseURL;	// IMP=0x0000000000094bc0
- (id)initWithConfiguration:(id)arg1 bagProvider:(id)arg2;	// IMP=0x0000000000094a70
- (void)TVISConformanceCinematic;	// IMP=0x0000000000094a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

