//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDisplayCriteria, AVMetadataItem, NSArray, NSData, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface AVAssetInspector
{
}

@property(readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property(readonly, nonatomic) NSArray *availableVideoDynamicRanges;
@property(readonly, nonatomic) struct CGSize maximumVideoResolution;
@property(readonly, nonatomic, getter=_isDefunct) _Bool defunct;
- (id)makePropertyListForProxyWithOptions:(id)arg1;	// IMP=0x000000000010a5b8
@property(readonly, nonatomic) id propertyListForProxy;
@property(readonly, nonatomic, getter=_moovAtomSize) long long moovAtomSize;
@property(readonly, nonatomic, getter=_assetAnalysisMessages) NSArray *assetAnalysisMessages;
@property(readonly, nonatomic) _Bool supportsAnalysisReporting;
@property(readonly, nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property(readonly, nonatomic) long long fragmentCount;
@property(readonly, nonatomic) long long firstFragmentSequenceNumber;
@property(readonly, nonatomic) _Bool containsFragments;
@property(readonly, nonatomic) _Bool canContainFragments;
@property(readonly, nonatomic) NSData *SHA1Digest;
@property(readonly, nonatomic, getter=isCompatibleWithAirPlayVideo) _Bool compatibleWithAirPlayVideo;
@property(readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;
@property(readonly, nonatomic, getter=isComposable) _Bool composable;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
@property(readonly, nonatomic, getter=isExportable) _Bool exportable;
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;	// IMP=0x000000000010a511
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
- (_Bool)hasProtectedContent;	// IMP=0x000000000010a501
@property(readonly, nonatomic) NSUUID *httpSessionIdentifier;
@property(readonly, nonatomic) NSString *identifyingTag;
@property(readonly, nonatomic) NSString *identifyingTagClass;
- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000010a4d0
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
@property(readonly, nonatomic) NSArray *commonMetadata;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) AVMetadataItem *creationDate;
@property(readonly, nonatomic, getter=_localizedMediaSelectionOptionDisplayNames) NSDictionary *localizedMediaSelectionOptionDisplayNames;
@property(readonly, nonatomic, getter=_mediaSelectionGroupDictionaries) NSArray *mediaSelectionGroupDictionaries;
@property(readonly, nonatomic) NSDictionary *trackReferences;
@property(readonly, nonatomic) NSArray *alternateTrackGroups;
@property(readonly, nonatomic) NSArray *trackIDs;
@property(readonly, nonatomic) long long trackCount;
@property(readonly, nonatomic) _Bool providesPreciseDurationAndTiming;
@property(readonly, nonatomic) int naturalTimeScale;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minimumTimeOffsetFromLive;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) float preferredSoundCheckVolumeNormalization;
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) float preferredRate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010a336

@end

