//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface SNSoundPrintAEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000021b164
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000021b0d6
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000021ad7e
- (void).cxx_destruct;	// IMP=0x000000000021bac5
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021b87e
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021b7ee
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000021b5f5
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021b413
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021b2f8
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021b282
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021b05e
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021afe6
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021af61
- (id)init;	// IMP=0x000000000021af04
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000021ae72

@end

