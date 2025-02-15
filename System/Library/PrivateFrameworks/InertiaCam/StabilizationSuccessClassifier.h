//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface StabilizationSuccessClassifier : NSObject
{
    int classifierMode;	// 8 = 0x8
    unsigned long long subsegmentLength;	// 16 = 0x10
    unsigned long long subsegmentStep;	// 24 = 0x18
    float lastClassifierScore;	// 32 = 0x20
}

@property(readonly) float lastClassifierScore; // @synthesize lastClassifierScore;
@property unsigned long long subsegmentStep; // @synthesize subsegmentStep;
@property unsigned long long subsegmentLength; // @synthesize subsegmentLength;
@property int classifierMode; // @synthesize classifierMode;
- (id)classifySequentialAnalysisSuccess:(void *)arg1 movieSize:(struct Int32Size)arg2 precalcedFeatures:(id)arg3 result:(float *)arg4;	// IMP=0x000000000004684d
- (id)applyClassifierToOverlappedSegments:(void *)arg1 withCoefficientsDict:(id)arg2 movieSize:(struct Int32Size)arg3 firstIndex:(int)arg4 lastIndex:(int)arg5 stride:(int)arg6 length:(int)arg7 result:(float *)arg8 verbose:(_Bool)arg9 minThreshold:(float)arg10;	// IMP=0x0000000000046511
- (_Bool)testForHomographies:(const void *)arg1 movieSize:(struct Int32Size)arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 scoreThreshold:(float)arg5 errorOut:(id *)arg6 verbose:(_Bool)arg7;	// IMP=0x000000000004625e
- (id)statsDictFromFrameArray:(id)arg1 firstIndex:(int)arg2 lastIndex:(int)arg3 errorOut:(id *)arg4;	// IMP=0x0000000000045dfd
- (id)calcStatsDictForArray:(id)arg1 withKey:(id)arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 usingTempStorage:(void *)arg5 outErr:(id *)arg6;	// IMP=0x0000000000045856
- (void)AddStats:(struct StabStatsRecord *)arg1 toDict:(id)arg2 withBaseName:(id)arg3;	// IMP=0x0000000000045495
- (id)getDefaultParamDict;	// IMP=0x0000000000045452
- (id)getSequentialAnalysisCoeffsDict;	// IMP=0x0000000000045445
- (id)getTripodCorrectionParamDict;	// IMP=0x0000000000045438
- (id)getSequentialParamDict;	// IMP=0x000000000004542b
- (float)calcLogisticForStats:(id)arg1 paramsForStats:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000045036
- (id)init;	// IMP=0x000000000004500f

@end

