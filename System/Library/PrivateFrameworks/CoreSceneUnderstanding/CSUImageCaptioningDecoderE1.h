//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSUCaptioningProcUtils, CSUImageCaptioningDecoderConfiguration;

@interface CSUImageCaptioningDecoderE1 : NSObject
{
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _decoderNet;	// 8 = 0x8
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _bridgeNet;	// 16 = 0x10
    struct EspressoTensor _inputTokens;	// 24 = 0x18
    struct EspressoTensor _bridgeInputBuffer;	// 80 = 0x50
    struct EspressoTensor _encodedFeaturesBuffer;	// 136 = 0x88
    CSUCaptioningProcUtils *_procUtils;	// 192 = 0xc0
    CSUImageCaptioningDecoderConfiguration *_configuration;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x0000000000026ca0
- (void).cxx_destruct;	// IMP=0x0000000000026b10
@property(readonly, nonatomic) CSUImageCaptioningDecoderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CSUCaptioningProcUtils *procUtils; // @synthesize procUtils=_procUtils;
- (id)postProcessResults:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000269a0
- (id)getCaptionsAfterGreedyDecodingOnEncodedFeatures;	// IMP=0x00000000000255e0
- (id)getCaptionsAfterBeamSearchDecodingOnEncodedFeatures;	// IMP=0x0000000000024400
- (id)computeDecodedCaptionsForFeatures:(id)arg1 withDecodingMethod:(long long)arg2 runDecoderOnly:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000242c0
- (id)getBridgeLayerOutput:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023f10
- (_Bool)reshapeEncodedFeaturesBufferForBridgeNet:(id)arg1 WithError:(id *)arg2;	// IMP=0x0000000000023860
- (_Bool)populateInputBufferWithBridgeFeatures:(id)arg1 WithError:(id *)arg2;	// IMP=0x0000000000022ed0
- (vector_8ca568ff)nextTokensForInputs:(const void *)arg1 AndforMaskPosition:(unsigned int)arg2;	// IMP=0x0000000000022580
- (_Bool)compareTensorShapesForShape1:(const void *)arg1 Shape2:(unsigned long long [5])arg2 rank:(unsigned long long)arg3;	// IMP=0x0000000000022510
- (_Bool)loadResources:(id *)arg1;	// IMP=0x0000000000022470
- (_Bool)loadDecoder:(id *)arg1;	// IMP=0x0000000000021fa0
- (_Bool)loadPostProcUtilsWithBeamWidth:(int)arg1 error:(id *)arg2;	// IMP=0x0000000000021f30
- (_Bool)loadBridge:(id *)arg1;	// IMP=0x0000000000021c00
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000021910

@end

