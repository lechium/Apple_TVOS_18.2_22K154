//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface SNSoundPrintASmokeAlarmModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000021c539
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000021c4ab
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000021c153
- (void).cxx_destruct;	// IMP=0x000000000021d3c2
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021d022
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 thresholdedHistoryIn:(id)arg3 detectedHistoryIn:(id)arg4 error:(id *)arg5;	// IMP=0x000000000021cf33
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000021cc19
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021c916
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021c6cd
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021c657
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021c433
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021c3bb
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021c336
- (id)init;	// IMP=0x000000000021c2d9
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000021c247

@end

