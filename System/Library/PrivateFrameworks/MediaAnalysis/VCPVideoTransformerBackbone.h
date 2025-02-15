//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, VCPCNNModelEspressoV2;

@interface VCPVideoTransformerBackbone : NSObject
{
    VCPCNNModelEspressoV2 *_modelEspressoV2;	// 8 = 0x8
    _Bool _isFP16;	// 16 = 0x10
    int _embeddingHeight;	// 20 = 0x14
    int _embeddingWidth;	// 24 = 0x18
    int _embeddingChannels;	// 28 = 0x1c
    int _embeddingSequenceLength;	// 32 = 0x20
    NSData *_embedding;	// 40 = 0x28
    NSData *_spatialEmbedding;	// 48 = 0x30
    NSData *_hiddenEmbedding;	// 56 = 0x38
}

+ (id)sharedModel:(id)arg1 identifier:(id)arg2 outputNames:(id)arg3 inputNames:(id)arg4 functionName:(id)arg5;	// IMP=0x006000000038193c
+ (int)idealInputHeightWithRevision:(long long)arg1;	// IMP=0x0060000000381921
+ (int)idealInputWidthWithRevision:(long long)arg1;	// IMP=0x0060000000381906
+ (id)getNSDataFromOuput:(id)arg1 isFP16:(_Bool)arg2;	// IMP=0x006000000038174f
+ (unsigned long long)embeddingVersion;	// IMP=0x006000000038170c
+ (unsigned long long)embeddingVersionForRevision:(long long)arg1;	// IMP=0x0060000000381653
+ (long long)revision;	// IMP=0x0060000000381648
- (void).cxx_destruct;	// IMP=0x00000000003823c3
@property(readonly) NSData *hiddenEmbedding; // @synthesize hiddenEmbedding=_hiddenEmbedding;
@property(readonly) NSData *spatialEmbedding; // @synthesize spatialEmbedding=_spatialEmbedding;
@property(readonly) NSData *embedding; // @synthesize embedding=_embedding;
@property(readonly) _Bool isFP16; // @synthesize isFP16=_isFP16;
@property(readonly) int embeddingSequenceLength; // @synthesize embeddingSequenceLength=_embeddingSequenceLength;
@property(readonly) int embeddingChannels; // @synthesize embeddingChannels=_embeddingChannels;
@property(readonly) int embeddingWidth; // @synthesize embeddingWidth=_embeddingWidth;
@property(readonly) int embeddingHeight; // @synthesize embeddingHeight=_embeddingHeight;
- (int)inference:(id)arg1;	// IMP=0x0000000000381fdf
- (unsigned long long)inputTensorSize;	// IMP=0x0000000000381f46
- (unsigned long long)inputTensorType;	// IMP=0x0000000000381ead
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000381b63

@end

