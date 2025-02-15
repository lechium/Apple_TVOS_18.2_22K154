//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSNumber, VCPCNNData, VCPCNNModel, VCPVideoActivityDescriptor;

__attribute__((visibility("hidden")))
@interface VCPVideoActivityAnalyzer
{
    VCPVideoActivityDescriptor *_activityDescriptor;	// 8 = 0x8
    NSMutableArray *_activityScores;	// 16 = 0x10
    NSMutableArray *_validActivityScores;	// 24 = 0x18
    NSMutableArray *_qualityResults;	// 32 = 0x20
    NSMutableArray *_interestingnessResults;	// 40 = 0x28
    NSMutableArray *_obstructionResults;	// 48 = 0x30
    NSMutableArray *_classificationResults;	// 56 = 0x38
    NSMutableArray *_fineActionResults;	// 64 = 0x40
    NSMutableArray *_faceResults;	// 72 = 0x48
    NSMutableArray *_results;	// 80 = 0x50
    float _sceneSwitchFrequency;	// 88 = 0x58
    long long _numOfFrames;	// 96 = 0x60
    CDStruct_1b6d18a9 _lastProcessTime;	// 104 = 0x68
    float _overallActivityLevel;	// 128 = 0x80
    VCPCNNModel *_model;	// 136 = 0x88
    VCPCNNData *_input;	// 144 = 0x90
    NSNumber *_sportsSceneId;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000012f5a9
- (id)results;	// IMP=0x000000000012f523
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1 fpsRate:(float)arg2;	// IMP=0x000000000012ef30
- (void)addSceneClassificationContributionToActivityLevel:(float *)arg1;	// IMP=0x000000000012ec9a
- (float)actionScoreInTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012e878
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float *)arg1;	// IMP=0x000000000012e82c
- (float)scaleBasedOnFaceForTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012e334
- (void)validateActivityScores;	// IMP=0x000000000012de62
- (float)validationScoreOfTimeRange:(CDStruct_e83c9415)arg1 fromResult:(id)arg2 startIdx:(int *)arg3;	// IMP=0x000000000012db1b
- (int)extractRequiredClassificationInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x000000000012d783
- (int)extractRequiredFaceInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x000000000012d44b
- (int)extractRequiredInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x000000000012d186
- (int)preProcessQualityResults:(id)arg1 interestingnessResults:(id)arg2 obstructionResults:(id)arg3 classificationResults:(id)arg4 fineActionResults:(id)arg5 faceResults:(id)arg6 sceneSwitchFrequency:(float)arg7;	// IMP=0x000000000012cfc7
- (int)analyzeFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 frameStats:(id)arg4 flags:(unsigned long long *)arg5;	// IMP=0x000000000012ccf8
- (int)computeActivityScoreAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000012c994
- (void)resetActivityStatsAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000012c950
- (void)normalizeActivityDescriptor;	// IMP=0x000000000012c8ca
- (void)generateActivityDescriptor;	// IMP=0x000000000012c839
- (id)init;	// IMP=0x000000000012c141

@end

