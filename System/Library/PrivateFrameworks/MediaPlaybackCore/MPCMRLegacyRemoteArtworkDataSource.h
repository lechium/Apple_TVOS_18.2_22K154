//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

__attribute__((visibility("hidden")))
@interface MPCMRLegacyRemoteArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

+ (id)bestArtworkSizes;	// IMP=0x00400000001e4a06
+ (id)sharedDataSource;	// IMP=0x00400000001e49a3
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000001e4756
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e46d3
- (_Bool)hasExportableArtworkPropertiesForCatalog:(id)arg1;	// IMP=0x00000000001e46c1
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000001e4660
- (id)_urlForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000001e4511
- (id)supportedSizesForCatalog:(id)arg1;	// IMP=0x00000000001e41b7
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000001e4146

@end

