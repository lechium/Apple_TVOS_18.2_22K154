//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPFaceUtils : NSObject
{
}

+ (struct CGRect)faceRectFromNormalizedCenterX:(double)arg1 normalizedCenterY:(double)arg2 normalizedSize:(double)arg3 sourceWidth:(double)arg4 sourceHeight:(double)arg5;	// IMP=0x00800000000947e8
+ (int)configureVNRequest:(id *)arg1 withClass:(Class)arg2 andProcessingVersion:(int)arg3;	// IMP=0x0080000000094788
+ (int)configureVNRequest:(id *)arg1 withClass:(Class)arg2 andVisionRevision:(unsigned long long)arg3;	// IMP=0x0080000000094570
+ (_Bool)isBestResourceForFaceProcessing:(id)arg1 fromResources:(id)arg2;	// IMP=0x0080000000094425
+ (id)resourceForFaceProcessingWithAsset:(id)arg1 allowStreaming:(_Bool)arg2;	// IMP=0x00800000000943ad
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)arg1;	// IMP=0x0080000000093fa8
+ (id)resourceForFaceProcessing:(id)arg1 allowStreaming:(_Bool)arg2;	// IMP=0x00800000000939e9
+ (id)_firstLocallyAvailableResourceFromResources:(id)arg1;	// IMP=0x008000000009384e
+ (id)phFaceFromVCPPhotosFace:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x00800000000936b7
+ (void)assignPropertiesOfVCPPhotosFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;	// IMP=0x0080000000092e98
+ (unsigned short)mad_PHValueFromVNFaceGazeDirection:(long long)arg1;	// IMP=0x0080000000092dc1
+ (id)mad_PHFaceGazeTypeDescription:(unsigned short)arg1;	// IMP=0x0080000000092d72
+ (id)mad_VNFaceGazeDirectionDescription:(long long)arg1;	// IMP=0x0080000000092d2a
+ (id)_vnFaceGazeDirectionToPHFaceGazeType;	// IMP=0x0080000000092c10
+ (unsigned short)mad_PHValueFromVNEthnicityCategoryLabel:(id)arg1;	// IMP=0x0080000000092b41
+ (id)_vnFaceAttributeEthnicityToPHFaceEthnicityType;	// IMP=0x0080000000092a27
+ (unsigned short)mad_PHValueFromVNSkintoneCategoryLabel:(id)arg1;	// IMP=0x0080000000092958
+ (id)_vnFaceAttributeSkintoneToPHFaceSkintoneType;	// IMP=0x0080000000092825
+ (unsigned short)mad_PHValueFromVNPoseCategoryLabel:(id)arg1;	// IMP=0x0080000000092756
+ (id)_vnFaceAttributePoseToPHFacePoseType;	// IMP=0x008000000009263c
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryV2Label:(id)arg1;	// IMP=0x008000000009256d
+ (id)_vnFaceAttributeHairTypeToPHFaceHairType;	// IMP=0x0080000000092410
+ (unsigned short)mad_PHValueFromVNHeadgearCategoryLabel:(id)arg1;	// IMP=0x0080000000092341
+ (id)_vnFaceAttributeHeadGearToPHFaceHeadGearType;	// IMP=0x0080000000092227
+ (unsigned short)mad_PHValueFromVNExpressionCategoryLabel:(id)arg1;	// IMP=0x0080000000092158
+ (id)_vnFaceAttributeFacialHairToPHFaceExpressionType;	// IMP=0x0080000000092025
+ (unsigned short)mad_PHValueFromVNGlassesCategoryLabel:(id)arg1;	// IMP=0x0080000000091f56
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;	// IMP=0x0080000000091e6e
+ (unsigned short)mad_PHValueFromVNHairColorCategoryLabel:(id)arg1;	// IMP=0x0080000000091d9f
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;	// IMP=0x0080000000091c6c
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryLabel:(id)arg1;	// IMP=0x0080000000091b9d
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;	// IMP=0x00800000000919e7
+ (unsigned short)mad_PHValueFromVNSmilingCategoryLabel:(id)arg1;	// IMP=0x0080000000091918
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;	// IMP=0x0080000000091849
+ (unsigned short)mad_PHValueFromVNEyesCategoryLabel:(id)arg1;	// IMP=0x008000000009177a
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;	// IMP=0x00800000000916ab
+ (unsigned short)mad_PHValueFromVNSexCategoryLabel:(id)arg1;	// IMP=0x00800000000915dc
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;	// IMP=0x008000000009150d
+ (unsigned short)mad_PHValueFromVNAgeCategoryLabel:(id)arg1;	// IMP=0x008000000009143e
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;	// IMP=0x0080000000091324
+ (id)phFacesFromVCPPhotosFaces:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x0080000000090f68
+ (id)imageCreationOptions;	// IMP=0x0080000000090e87

@end

