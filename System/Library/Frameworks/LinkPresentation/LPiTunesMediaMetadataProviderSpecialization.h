//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPFetcherGroup, LPSpecializationMetadata, LPiTunesMediaLookupTask, MPStoreLyricsSnippetURLComponents, NSString;
@protocol LPiTunesMediaUnresolvedMetadata;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMetadataProviderSpecialization
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_storefrontCountryCode;	// 16 = 0x10
    _Bool _canceled;	// 24 = 0x18
    LPiTunesMediaLookupTask *_lookupTask;	// 32 = 0x20
    LPSpecializationMetadata *_resolvedMetadata;	// 40 = 0x28
    id <LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;	// 48 = 0x30
    MPStoreLyricsSnippetURLComponents *_lyricComponents;	// 56 = 0x38
    LPFetcherGroup *_fetcherGroup;	// 64 = 0x40
}

+ (void)requestSourceApplicationMetadataForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000044008
+ (id)extractOffers:(id)arg1;	// IMP=0x006000000003d790
+ (id)assetFromVideoPreviewDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;	// IMP=0x006000000003d788
+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;	// IMP=0x006000000003d50d
+ (id)assetArrayFromScreenshotArray:(id)arg1;	// IMP=0x006000000003d38c
+ (id)assetArrayScreenshotArray:(id)arg1;	// IMP=0x006000000003cfa6
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;	// IMP=0x006000000003ce1c
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;	// IMP=0x006000000003ca8b
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x006000000003c740
+ (unsigned long long)specialization;	// IMP=0x006000000003c735
- (void).cxx_destruct;	// IMP=0x000000000004517f
- (void)_internalPostProcessResolvedMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000450db
- (void)done;	// IMP=0x000000000004502b
- (void)fail;	// IMP=0x0000000000044fbe
- (void)cancel;	// IMP=0x0000000000044f96
- (void)completed;	// IMP=0x0000000000044f79
- (void)start;	// IMP=0x0000000000043d26
- (void)resolve;	// IMP=0x00000000000433f3
- (id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2;	// IMP=0x0000000000042bb1
- (id)schema;	// IMP=0x000000000003da01
- (id)initWithLyricComponents:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000003cce4
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000003cc0f

@end

