//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputUnknownHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;	// IMP=0x00800000000be41f
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;	// IMP=0x00000000000bea69
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000be918
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000be903
- (_Bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;	// IMP=0x00000000000be571
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000be540
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000be50f
- (void)setPreferredMediaChunkSize:(long long)arg1;	// IMP=0x00000000000be4de
- (void)setPreferredMediaChunkAlignment:(long long)arg1;	// IMP=0x00000000000be4ad
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000be482
- (void)setSourcePixelBufferAttributes:(id)arg1;	// IMP=0x00000000000be451
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000be43f
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;	// IMP=0x00000000000be3f0
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000be3c1
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000be392
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000be361
- (void)setPreferredVolume:(float)arg1;	// IMP=0x00000000000be32c
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000be2fd
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000be235
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000be16d
- (_Bool)_validateLanguageCode:(id)arg1;	// IMP=0x00000000000be0f8
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00000000000be0b6
- (void)setMaximizePowerEfficiency:(_Bool)arg1;	// IMP=0x00000000000be087
- (void)setExpectsMediaDataInRealTime:(_Bool)arg1;	// IMP=0x00000000000be058
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000bdf8e
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000bdf5d
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000bdf32
- (long long)status;	// IMP=0x00000000000bdf2a
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x00000000000bdca9
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000bdb7a

@end

