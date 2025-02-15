//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface SNVGGishEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000021a18d
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000021a0ff
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000219da7
- (void).cxx_destruct;	// IMP=0x000000000021aaee
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021a8a7
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021a817
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000021a61e
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021a43c
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021a321
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021a2ab
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021a087
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021a00f
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000219f8a
- (id)init;	// IMP=0x0000000000219f2d
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000219e9b

@end

