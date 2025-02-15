//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSSet;

@interface VCPMADSceneAssetEntryResults : NSObject
{
    short _probableRotationDirection;	// 8 = 0x8
    float _overallAestheticScore;	// 12 = 0xc
    float _wellFramedSubjectScore;	// 16 = 0x10
    float _wellChosenSubjectScore;	// 20 = 0x14
    float _tastefullyBlurredScore;	// 24 = 0x18
    float _sharplyFocusedSubjectScore;	// 28 = 0x1c
    float _wellTimedShotScore;	// 32 = 0x20
    float _pleasantLightingScore;	// 36 = 0x24
    float _pleasantReflectionsScore;	// 40 = 0x28
    float _harmoniousColorScore;	// 44 = 0x2c
    float _livelyColorScore;	// 48 = 0x30
    float _pleasantSymmetryScore;	// 52 = 0x34
    float _pleasantPatternScore;	// 56 = 0x38
    float _immersivenessScore;	// 60 = 0x3c
    float _pleasantPerspectiveScore;	// 64 = 0x40
    float _pleasantPostProcessingScore;	// 68 = 0x44
    float _noiseScore;	// 72 = 0x48
    float _failureScore;	// 76 = 0x4c
    float _pleasantCompositionScore;	// 80 = 0x50
    float _interestingSubjectScore;	// 84 = 0x54
    float _intrusiveObjectPresenceScore;	// 88 = 0x58
    float _pleasantCameraTiltScore;	// 92 = 0x5c
    float _lowLight;	// 96 = 0x60
    float _wallpaperScore;	// 100 = 0x64
    float _blurrinessScore;	// 104 = 0x68
    float _exposureScore;	// 108 = 0x6c
    float _probableRotationDirectionConfidence;	// 112 = 0x70
    float _iconicScore;	// 116 = 0x74
    NSSet *_sceneClassifications;	// 120 = 0x78
    NSArray *_objectSaliencyRects;	// 128 = 0x80
    NSData *_sceneprintData;	// 136 = 0x88
    NSData *_colorNormalizationData;	// 144 = 0x90
    NSData *_duplicateMatchingFeature;	// 152 = 0x98
    NSData *_duplicateMatchingAlternateFeature;	// 160 = 0xa0
    NSDictionary *_embeddingResults;	// 168 = 0xa8
    struct CGRect _preferredCropRect;	// 176 = 0xb0
    struct CGRect _acceptableCropRect;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0020000000027178
@property(retain, nonatomic) NSDictionary *embeddingResults; // @synthesize embeddingResults=_embeddingResults;
@property(nonatomic) float iconicScore; // @synthesize iconicScore=_iconicScore;
@property(nonatomic) float probableRotationDirectionConfidence; // @synthesize probableRotationDirectionConfidence=_probableRotationDirectionConfidence;
@property(nonatomic) short probableRotationDirection; // @synthesize probableRotationDirection=_probableRotationDirection;
@property(nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(nonatomic) float blurrinessScore; // @synthesize blurrinessScore=_blurrinessScore;
@property(retain, nonatomic) NSData *duplicateMatchingAlternateFeature; // @synthesize duplicateMatchingAlternateFeature=_duplicateMatchingAlternateFeature;
@property(retain, nonatomic) NSData *duplicateMatchingFeature; // @synthesize duplicateMatchingFeature=_duplicateMatchingFeature;
@property(retain, nonatomic) NSData *colorNormalizationData; // @synthesize colorNormalizationData=_colorNormalizationData;
@property(nonatomic) float wallpaperScore; // @synthesize wallpaperScore=_wallpaperScore;
@property(retain, nonatomic) NSData *sceneprintData; // @synthesize sceneprintData=_sceneprintData;
@property(retain, nonatomic) NSArray *objectSaliencyRects; // @synthesize objectSaliencyRects=_objectSaliencyRects;
@property(nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property(nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property(nonatomic) float lowLight; // @synthesize lowLight=_lowLight;
// Error: Property attributes should begin with the type ('T') attribute, property name: pleasantCameraTiltScore
// Property attributes: (null)

@property(nonatomic) float intrusiveObjectPresenceScore; // @synthesize intrusiveObjectPresenceScore=_intrusiveObjectPresenceScore;
@property(nonatomic) float interestingSubjectScore; // @synthesize interestingSubjectScore=_interestingSubjectScore;
@property(nonatomic) float pleasantCompositionScore; // @synthesize pleasantCompositionScore=_pleasantCompositionScore;
@property(nonatomic) float failureScore; // @synthesize failureScore=_failureScore;
@property(nonatomic) float noiseScore; // @synthesize noiseScore=_noiseScore;
@property(nonatomic) float pleasantPostProcessingScore; // @synthesize pleasantPostProcessingScore=_pleasantPostProcessingScore;
@property(nonatomic) float pleasantPerspectiveScore; // @synthesize pleasantPerspectiveScore=_pleasantPerspectiveScore;
@property(nonatomic) float immersivenessScore; // @synthesize immersivenessScore=_immersivenessScore;
@property(nonatomic) float pleasantPatternScore; // @synthesize pleasantPatternScore=_pleasantPatternScore;
@property(nonatomic) float pleasantSymmetryScore; // @synthesize pleasantSymmetryScore=_pleasantSymmetryScore;
@property(nonatomic) float livelyColorScore; // @synthesize livelyColorScore=_livelyColorScore;
@property(nonatomic) float harmoniousColorScore; // @synthesize harmoniousColorScore=_harmoniousColorScore;
@property(nonatomic) float pleasantReflectionsScore; // @synthesize pleasantReflectionsScore=_pleasantReflectionsScore;
@property(nonatomic) float pleasantLightingScore; // @synthesize pleasantLightingScore=_pleasantLightingScore;
@property(nonatomic) float wellTimedShotScore; // @synthesize wellTimedShotScore=_wellTimedShotScore;
@property(nonatomic) float sharplyFocusedSubjectScore; // @synthesize sharplyFocusedSubjectScore=_sharplyFocusedSubjectScore;
@property(nonatomic) float tastefullyBlurredScore; // @synthesize tastefullyBlurredScore=_tastefullyBlurredScore;
@property(nonatomic) float wellChosenSubjectScore; // @synthesize wellChosenSubjectScore=_wellChosenSubjectScore;
@property(nonatomic) float wellFramedSubjectScore; // @synthesize wellFramedSubjectScore=_wellFramedSubjectScore;
@property(nonatomic) float overallAestheticScore; // @synthesize overallAestheticScore=_overallAestheticScore;
@property(retain, nonatomic) NSSet *sceneClassifications; // @synthesize sceneClassifications=_sceneClassifications;

@end

