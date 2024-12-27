//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MusicKit_SoftLinking_CatalogID, MusicKit_SoftLinking_DeviceLocalID, MusicKit_SoftLinking_MPModelKind, NSArray, NSDictionary, NSString;
@protocol MusicKit_SoftLinking_MPArtworkColorAnalysis;

@interface NSObject (StorageDictionaryProvider)
+ (id)_musicKit_modelObjectStorageDictionaryForStoreBrowseContentItem:(id)arg1;	// IMP=0x0010000000003903
+ (id)_musicKit_modelObjectStorageDictionaryForPlaylistEntry:(id)arg1;	// IMP=0x0010000000003842
+ (id)_musicKit_modelObjectStorageDictionaryForGenericModelObject:(id)arg1;	// IMP=0x0010000000003760
@property(readonly, nonatomic) NSDictionary *musicKit_modelObjectStorageDictionary;
- (id)_musicKit_modelObjectRawStorageDictionary;	// IMP=0x0010000000003361
@property(readonly, nonatomic) id musicKit_sanitizedLegacyModelObject;
@property(readonly, nonatomic) id musicKit_innerModelObject;
- (id)_musicKit_innerModelObject;	// IMP=0x0010000000003a50
@property(readonly, nonatomic) long long musicKit_nowPlayingInfoAudioFormat_badging;
- (id)_musicKit_self_nowPlayingInfoAudioFormat;	// IMP=0x001000000000cb68
- (id)archivedDataWithError:(id *)arg1;	// IMP=0x001000000000e375
- (id)unionSet:(id)arg1;	// IMP=0x001000000000e2e0
- (_Bool)intersectsSet:(id)arg1;	// IMP=0x001000000000e25d
@property(readonly, copy, nonatomic) NSArray *musicKit_identifierSetSources;
@property(readonly, nonatomic) _Bool musicKit_hasValidIdentifier;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_MPModelKind *musicKit_modelKind;
@property(readonly, copy, nonatomic) NSArray *musicKit_formerIDs;
@property(readonly, copy, nonatomic) NSString *musicKit_playbackID;
@property(readonly, nonatomic) long long musicKit_syncID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_containedDeviceLocalID;
@property(readonly, copy, nonatomic) NSString *musicKit_occurrenceID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_deviceLocalID;
@property(readonly, nonatomic) long long musicKit_assetAdamID;
@property(readonly, nonatomic) long long musicKit_reportingAdamID;
@property(readonly, nonatomic) long long musicKit_purchasedAdamID;
@property(readonly, nonatomic) long long musicKit_cloudID;
@property(readonly, copy, nonatomic) NSString *musicKit_cloudAlbumLibraryID;
@property(readonly, copy, nonatomic) NSString *musicKit_libraryID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_CatalogID *musicKit_catalogID;
- (id)_musicKit_self_identifierSet;	// IMP=0x001000000000d014
@property(readonly, nonatomic) struct CGColor *musicKit_tertiaryTextColor;
@property(readonly, nonatomic) struct CGColor *musicKit_secondaryTextColor;
@property(readonly, nonatomic) struct CGColor *musicKit_primaryTextColor;
@property(readonly, nonatomic) struct CGColor *musicKit_backgroundColor;
- (id)_musicKit_self_artworkColorAnalysis;	// IMP=0x001000000002de56
- (void)musicKit_requestColorAnalysisWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ea38
- (void)musicKit_requestImageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e7e8
@property(nonatomic, setter=musicKit_setFittingSize:) struct CGSize musicKit_fittingSize;
- (id)musicKit_artworkCatalogWithFittingSize:(struct CGSize)arg1;	// IMP=0x001000000002e60f
@property(readonly, nonatomic) id <MusicKit_SoftLinking_MPArtworkColorAnalysis> musicKit_existingColorAnalysis;
@property(readonly, copy, nonatomic) NSString *musicKit_visualIdenticalityIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *musicKit_artworkDictionary;
@property(readonly, copy, nonatomic) NSDictionary *musicKit_artworkTokenParameters;
@property(readonly, copy, nonatomic) NSString *musicKit_artworkDataSourceIdentifier;
@property(readonly, copy, nonatomic) NSString *musicKit_artworkDataSourceShortDescription;
- (id)_musicKit_self_artworkCatalog;	// IMP=0x001000000002e102
- (id)musicKit_artworkCatalogForProperty:(id)arg1;	// IMP=0x001000000002ed39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

