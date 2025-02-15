//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRNeuralRecognizerConfiguration, NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModel : NSObject
{
    int *_codemapArray;	// 8 = 0x8
    unsigned long long _codemapSize;	// 16 = 0x10
    long long _ctcBlankLabelIndex;	// 24 = 0x18
    NSDictionary *_outputShape;	// 32 = 0x20
    NSNumber *_outputWidthDownscale;	// 40 = 0x28
    NSNumber *_outputWidthOffset;	// 48 = 0x30
    NSNumber *_outputFormatVersion;	// 56 = 0x38
    CRNeuralRecognizerConfiguration *_configuration;	// 64 = 0x40
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x001000000017b3fc
+ (id)defaultModelFileName;	// IMP=0x001000000017b396
- (void).cxx_destruct;	// IMP=0x000000000017b76f
@property(readonly) CRNeuralRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSNumber *outputFormatVersion; // @synthesize outputFormatVersion=_outputFormatVersion;
@property(retain, nonatomic) NSNumber *outputWidthOffset; // @synthesize outputWidthOffset=_outputWidthOffset;
@property(retain, nonatomic) NSNumber *outputWidthDownscale; // @synthesize outputWidthDownscale=_outputWidthDownscale;
@property(retain, nonatomic) NSDictionary *outputShape; // @synthesize outputShape=_outputShape;
@property(nonatomic) long long ctcBlankLabelIndex; // @synthesize ctcBlankLabelIndex=_ctcBlankLabelIndex;
@property(nonatomic) unsigned long long codemapSize; // @synthesize codemapSize=_codemapSize;
@property(nonatomic) int *codemapArray; // @synthesize codemapArray=_codemapArray;
- (void)releaseIntermediateBuffers;	// IMP=0x000000000017b6e9
- (_Bool)preheatWithError:(id *)arg1;	// IMP=0x000000000017b6e1
- (id)inputBatchFromLineRegions:(id)arg1 image:(id)arg2 regionWidth:(double)arg3 configuration:(id)arg4 rectifier:(id)arg5;	// IMP=0x000000000017b6d9
- (id)predictFromInputs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017b6cc
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017b69d
- (struct TextBoxesOffsets)wordBoxesOffsets;	// IMP=0x000000000017b67c
- (struct TextBoxesOffsets)characterBoxesOffsets;	// IMP=0x000000000017b65b
- (_Bool)supportCharacterBoxes;	// IMP=0x000000000017b653
@property(readonly) NSURL *modelURL;
- (id)populateInputBatchData:(float *)arg1 lineRegions:(id)arg2 image:(id)arg3 batchSize:(long long)arg4 width:(double)arg5 configuration:(id)arg6 rectifier:(id)arg7;	// IMP=0x0000000000179f0c
- (void)dealloc;	// IMP=0x0000000000179ec5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

