//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_CoverArtworkDataSource : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)_bundle;	// IMP=0x0010000000009c61
+ (id)sharedDataSource;	// IMP=0x00100000000047b2
- (void).cxx_destruct;	// IMP=0x0000000000009d00
- (id)_generateNineDotGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000000933d
- (id)_generateGradientArchesImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000008d21
- (id)_generateRadialGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000008820
- (id)_generateAngularGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x00000000000083f2
- (id)_generateGradientSoundwaveImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000007d64
- (id)_generateLinearGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000007827
- (id)_generateGradientVinylImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x00000000000068a5
- (id)_generateSimpleGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000006268
- (id)imageForCoverArtworkRecipe:(id)arg1;	// IMP=0x000000000000604e
- (id)_errorWithDescription:(id)arg1;	// IMP=0x0000000000005f73
- (double)roundValueFor:(double)arg1 toScale:(double)arg2;	// IMP=0x0000000000005ee1
- (id)_coverArtworkImageWithSize:(struct CGSize)arg1 destinationScale:(double)arg2 coverArtworkToken:(id)arg3;	// IMP=0x0000000000004c80
- (id)_cacheIdentifierForCoverArtworkRecipeToken:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000000004bf8
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x0000000000004be3
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004931
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x000000000000492b
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x000000000000486d
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x0000000000004865
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x000000000000485d
- (id)init;	// IMP=0x0000000000004807

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

