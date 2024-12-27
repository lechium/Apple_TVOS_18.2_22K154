//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLPredictionOptions, NSString;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface MLGenericPredictionRequest : NSObject
{
    struct atomic<bool> _used;	// 8 = 0x8
    struct atomic<bool> _cancelled;	// 9 = 0x9
    id <MLFeatureProvider> _inputFeatures;	// 16 = 0x10
    MLPredictionOptions *_predictionOptions;	// 24 = 0x18
    MLModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000027a8b4
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) MLPredictionOptions *predictionOptions; // @synthesize predictionOptions=_predictionOptions;
@property(readonly, nonatomic) id <MLFeatureProvider> inputFeatures; // @synthesize inputFeatures=_inputFeatures;
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cancel;	// IMP=0x000000000027a826
- (void)submitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000027a605
- (id)initForModel:(id)arg1 inputFeatures:(id)arg2 options:(id)arg3;	// IMP=0x000000000027a330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

