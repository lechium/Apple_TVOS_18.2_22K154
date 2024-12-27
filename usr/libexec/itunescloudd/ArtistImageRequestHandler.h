//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudArtistHeroImageImporter;

@interface ArtistImageRequestHandler
{
    CloudArtistHeroImageImporter *_importer;	// 8 = 0x8
}

+ (id)accountlessHandler;	// IMP=0x0040000000150463
+ (_Bool)supportsAccountlessHandling;	// IMP=0x00100000001503b2
+ (id)handlers;	// IMP=0x0010000000150382
- (void).cxx_destruct;	// IMP=0x002000000015036f
@property(readonly, nonatomic) CloudArtistHeroImageImporter *importer; // @synthesize importer=_importer;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;	// IMP=0x0010000000150341
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;	// IMP=0x0010000000150324
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000150307
- (void)importArtistHeroImageForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001502ea
- (void)cancelAllOperationsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x00100000001502cd
- (void)cancelAllOperations;	// IMP=0x00100000001502b9
- (void)updateArtistHeroImagesForArtistsAddedSinceLastUpdateUsingClientIdentity:(id)arg1;	// IMP=0x00100000001501d2
- (void)updateArtistHeroImagesWithClientIdentity:(id)arg1;	// IMP=0x00100000001501b5
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000150068

@end

