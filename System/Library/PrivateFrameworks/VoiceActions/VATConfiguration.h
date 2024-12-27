//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DecoderConfig, FeatureExtractorConfig, MISSING_TYPE, NSString, NeuralNetworkConfig, RuntimeConfig, SecondPassConfig;

@interface VATConfiguration : NSObject
{
    MISSING_TYPE *neuralNetwork;	// 8 = 0x8
    MISSING_TYPE *featureExtractor;	// 16 = 0x10
    MISSING_TYPE *decoder;	// 24 = 0x18
    MISSING_TYPE *secondPass;	// 32 = 0x20
    MISSING_TYPE *runtime;	// 40 = 0x28
}

+ (id)logger;	// IMP=0x00400000000791c0
- (void).cxx_destruct;	// IMP=0x000000000007b760
@property(nonatomic, readonly) NSString *description;
- (void)_replaceModelPathWithCustomModelPathForTestWithPrefix:(id)arg1;	// IMP=0x000000000007b290
- (id)initWithFilename:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b120
- (id)init;	// IMP=0x0000000000079b10
@property(nonatomic, retain) RuntimeConfig *runtime; // @synthesize runtime;
@property(nonatomic, retain) SecondPassConfig *secondPass; // @synthesize secondPass;
@property(nonatomic, retain) DecoderConfig *decoder; // @synthesize decoder;
@property(nonatomic, retain) FeatureExtractorConfig *featureExtractor; // @synthesize featureExtractor;
@property(nonatomic, retain) NeuralNetworkConfig *neuralNetwork; // @synthesize neuralNetwork;

@end

