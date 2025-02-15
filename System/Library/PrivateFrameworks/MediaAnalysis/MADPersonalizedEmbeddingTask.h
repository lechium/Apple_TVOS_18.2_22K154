//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUWGallery;

__attribute__((visibility("hidden")))
@interface MADPersonalizedEmbeddingTask
{
    VUWGallery *_gallery;	// 8 = 0x8
}

+ (id)embeddingFromMultiArray:(id)arg1 normalize:(_Bool)arg2 version:(unsigned long long)arg3;	// IMP=0x00600000002ceb67
+ (_Bool)prewarmRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002cde85
- (void).cxx_destruct;	// IMP=0x00000000002d70f7
- (int)run;	// IMP=0x00000000002d66be
- (int)processInput:(id)arg1 resource:(id)arg2 result:(id *)arg3;	// IMP=0x00000000002d5e91
- (int)processGenerativePlaygroundsOutput:(id)arg1 resource:(id)arg2 entitySegment:(id)arg3 imageSegment:(id)arg4 faceObservation:(id)arg5 personalizationIndex:(unsigned long long)arg6 embeddingResult:(id *)arg7 hiddenLayerResult:(id *)arg8 pooledEmbeddingResult:(id *)arg9;	// IMP=0x00000000002d481d
- (int)processSystemSearchOutput:(id)arg1 resource:(id)arg2 embeddingResult:(id *)arg3;	// IMP=0x00000000002d469c
- (int)processPixelBuffer:(struct __CVBuffer *)arg1 imageEmbedding:(id *)arg2;	// IMP=0x00000000002d3eb2
- (unsigned long long)imageEmbeddingVersion;	// IMP=0x00000000002d3e43
- (int)processSegments:(id)arg1 resource:(id)arg2 keyEntitySegment:(id *)arg3 keyImageSegment:(id *)arg4 faceObservation:(id *)arg5 personalizationIndex:(unsigned long long *)arg6 textEncoderInputs:(id)arg7;	// IMP=0x00000000002d20f0
- (int)processFaceprintSegment:(id)arg1 resource:(id)arg2 textEncoderInput:(id *)arg3 faceObservation:(id *)arg4;	// IMP=0x00000000002d1bc9
- (int)processImageSegment:(id)arg1 resource:(id)arg2 textEncoderInput:(id *)arg3 faceObservation:(id *)arg4 ageType:(unsigned short *)arg5;	// IMP=0x00000000002cf60d
- (struct CGRect)expandNormalizedRect:(struct CGRect)arg1;	// IMP=0x00000000002cf597
- (int)processEntitySegment:(id)arg1 tokenEmbeddingType:(long long)arg2 textEncoderInput:(id *)arg3 ageType:(unsigned short *)arg4;	// IMP=0x00000000002cee58
- (id)gallery;	// IMP=0x00000000002ce6f5
- (long long)revision;	// IMP=0x00000000002ce69d

@end

