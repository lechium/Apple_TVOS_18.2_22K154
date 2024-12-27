//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MLPredictionEventMetric : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_modelName;	// 16 = 0x10
    NSNumber *_firstPartyExecutable;	// 24 = 0x18
    NSNumber *_modelType;	// 32 = 0x20
    double _featuresPredictionDuration;	// 40 = 0x28
    long long _featuresPredictionCountSoFar;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000242a68
@property(readonly, nonatomic) long long featuresPredictionCountSoFar; // @synthesize featuresPredictionCountSoFar=_featuresPredictionCountSoFar;
@property(readonly, nonatomic) double featuresPredictionDuration; // @synthesize featuresPredictionDuration=_featuresPredictionDuration;
@property(readonly, nonatomic) NSNumber *modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) NSNumber *firstPartyExecutable; // @synthesize firstPartyExecutable=_firstPartyExecutable;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;
- (id)initWithBundleIdentifier:(id)arg1 modelName:(id)arg2 firstPartyExecutable:(id)arg3 modelType:(id)arg4 featuresPredictionDuration:(double)arg5 featuresPredictionCountSoFar:(long long)arg6;	// IMP=0x00000000002426ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

