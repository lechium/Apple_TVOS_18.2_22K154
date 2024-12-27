//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VCPVideoEmbeddings : NSObject
{
    NSMutableArray *_videoEmbeddings;	// 8 = 0x8
    NSMutableArray *_summarizedEmbeddingIds;	// 16 = 0x10
    float *_averageEmbedding;	// 24 = 0x18
    float *_currentEmbedding;	// 32 = 0x20
    NSNumber *_version;	// 40 = 0x28
    long long _embeddingType;	// 48 = 0x30
    unsigned long long _embeddingSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003730fe
@property(readonly, nonatomic) unsigned long long embeddingSize; // @synthesize embeddingSize=_embeddingSize;
@property(readonly, nonatomic) long long embeddingType; // @synthesize embeddingType=_embeddingType;
- (id)convertToFloat16:(id)arg1;	// IMP=0x0000000000372f32
- (id)getEmbeddingsForRange:(CDStruct_e83c9415)arg1 useFP16:(_Bool)arg2;	// IMP=0x0000000000372a5c
- (void)dealloc;	// IMP=0x0000000000372a0f
- (id)videoEmbeddingsFp16;	// IMP=0x00000000003725bd
- (int)addEmbeddings:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000003721f9
- (id)initWithEmbeddingType:(long long)arg1 version:(id)arg2;	// IMP=0x00000000003720de
@property(readonly, nonatomic) NSArray *embeddingsArray;

@end

