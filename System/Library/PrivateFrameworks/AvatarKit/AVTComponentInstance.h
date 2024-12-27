//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSString, SCNNode;

__attribute__((visibility("hidden")))
@interface AVTComponentInstance : NSObject
{
    NSArray *_assets;	// 8 = 0x8
    SCNNode *_assetNode;	// 16 = 0x10
    NSString *_materialVariant;	// 24 = 0x18
    NSString *_assetImage;	// 32 = 0x20
    NSString *_assetImageVariant;	// 40 = 0x28
    float _skinnerVariantIntensity;	// 48 = 0x30
    _Bool _didInitializeVariantSkinnerPairs;	// 52 = 0x34
    NSMapTable *_variantSkinnerPairs;	// 56 = 0x38
    NSMutableDictionary *_visibilityRules;	// 64 = 0x40
    NSDictionary *_layers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002d7e5
@property(readonly) SCNNode *assetNode; // @synthesize assetNode=_assetNode;
- (id)assetImageForAsset:(id)arg1;	// IMP=0x000000000002d756
- (_Bool)has3DAsset;	// IMP=0x000000000002d748
- (void)setVisibilityRules:(id)arg1 dictatedByCategory:(long long)arg2;	// IMP=0x000000000002d5f4
- (void)setSkinnerVariantIntensity:(float)arg1 skeleton:(id)arg2;	// IMP=0x000000000002d37b
- (void)_initializeVariantSkinnerPairsIfNeeded;	// IMP=0x000000000002ced8
- (void)setMaterialVariant:(id)arg1;	// IMP=0x000000000002c8f4
- (void)setImageVariant:(id)arg1;	// IMP=0x000000000002c863
@property(readonly) NSString *assetImage; // @synthesize assetImage=_assetImage;
- (_Bool)has2DAsset;	// IMP=0x000000000002c83b
- (void)updateMaterialsWithComponent:(id)arg1;	// IMP=0x000000000002c0a1
- (id)initWithComponent:(id)arg1 assetResourceCache:(id)arg2;	// IMP=0x000000000002bbeb
@property(readonly) CDStruct_10883d13 uvRemappingInfo;
- (id)assetImageWithLayerNamed:(id)arg1;	// IMP=0x000000000002ba3b

@end

