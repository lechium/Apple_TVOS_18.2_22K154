//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSUCaptionPostProcessingHandler, CSUCaptionRuntimeParameters;

@interface CSUCaptioningProcUtils : NSObject
{
    int _genderOptionForBeamSearch;	// 8 = 0x8
    CSUCaptionRuntimeParameters *_runTimeParams;	// 16 = 0x10
    CSUCaptionPostProcessingHandler *_postProcessingHandler;	// 24 = 0x18
    shared_ptr_79c86160 _vocabulary;	// 32 = 0x20
    shared_ptr_2fd4f744 _beamSearch;	// 48 = 0x30
    struct EspressoTensor _encodedFeaturesBuffer;	// 64 = 0x40
    struct BeamSearchOptions _beamSearchOptions;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x000000000004ea50
- (void).cxx_destruct;	// IMP=0x000000000004e900
@property(retain, nonatomic) CSUCaptionPostProcessingHandler *postProcessingHandler; // @synthesize postProcessingHandler=_postProcessingHandler;
@property(nonatomic) int genderOptionForBeamSearch; // @synthesize genderOptionForBeamSearch=_genderOptionForBeamSearch;
@property(retain, nonatomic) CSUCaptionRuntimeParameters *runTimeParams; // @synthesize runTimeParams=_runTimeParams;
@property(nonatomic) struct EspressoTensor encodedFeaturesBuffer; // @synthesize encodedFeaturesBuffer=_encodedFeaturesBuffer;
@property(nonatomic) struct BeamSearchOptions beamSearchOptions; // @synthesize beamSearchOptions=_beamSearchOptions;
@property(nonatomic) shared_ptr_2fd4f744 beamSearch; // @synthesize beamSearch=_beamSearch;
@property(nonatomic) shared_ptr_79c86160 vocabulary; // @synthesize vocabulary=_vocabulary;
- (id)initWithDecoderConfiguration:(id)arg1 beamWidth:(int)arg2 beamScorerType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000004d470

@end

