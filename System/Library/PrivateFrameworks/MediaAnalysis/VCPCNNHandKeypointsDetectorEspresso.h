//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNHandKeypointsDetectorEspresso
{
    float *_inputData;	// 8 = 0x8
    _Bool _forceCPU;	// 16 = 0x10
    _Bool _enableHandObject;	// 17 = 0x11
    VCPCNNModelEspresso *_modelEspresso;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000028b76
- (int)generateHandKeypoints:(struct CGPoint *)arg1 keypointConfidence:(float *)arg2 offset:(float)arg3 handHoldsObjectConfidence:(float *)arg4;	// IMP=0x000000000002863a
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4 offset:(float *)arg5;	// IMP=0x000000000002857f
- (void)dealloc;	// IMP=0x0000000000028539
- (id)init:(_Bool)arg1 sharedModel:(_Bool)arg2 modelName:(id)arg3 enableHandObject:(_Bool)arg4 options:(id)arg5;	// IMP=0x0000000000027dc6

@end

