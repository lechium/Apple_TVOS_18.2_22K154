//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSNumber, VCPImageHumanPoseAnalyzer, VCPVideoObjectTracker;

__attribute__((visibility("hidden")))
@interface VCPVideoHumanActionAnalyzer
{
    VCPImageHumanPoseAnalyzer *_poseAnalyzer;	// 8 = 0x8
    CDStruct_1b6d18a9 _timeLastProcess;	// 16 = 0x10
    CDStruct_1b6d18a9 _timeLastProcessFullFrame;	// 40 = 0x28
    NSMutableArray *_bodyArray;	// 64 = 0x40
    float _maxScore;	// 72 = 0x48
    CDStruct_1b6d18a9 _endTime;	// 76 = 0x4c
    CDStruct_1b6d18a9 _startTime;	// 100 = 0x64
    NSMutableArray *_actionResults;	// 128 = 0x80
    NSMutableArray *_keyPersonResults;	// 136 = 0x88
    NSMutableArray *_poseResults;	// 144 = 0x90
    NSMutableArray *_activePoseResults;	// 152 = 0x98
    struct CGRect _crop;	// 160 = 0xa0
    struct CGRect _humanRect;	// 192 = 0xc0
    float _actionScoreAbsolute;	// 224 = 0xe0
    float _actionScoreRelative;	// 228 = 0xe4
    float _scoreAbsoluteMax;	// 232 = 0xe8
    float _scoreRelativeMax;	// 236 = 0xec
    float _humanPoseScore;	// 240 = 0xf0
    CDStruct_1b6d18a9 _lastHumanTimestamp;	// 244 = 0xf4
    VCPVideoObjectTracker *_tracker;	// 272 = 0x110
    _Bool _tracking;	// 280 = 0x118
    NSNumber *_timeOfInterest;	// 288 = 0x120
    NSMutableArray *_phFaces;	// 296 = 0x128
    struct Scaler _scaler;	// 304 = 0x130
}

- (id).cxx_construct;	// IMP=0x000000000036ec4d
- (void).cxx_destruct;	// IMP=0x000000000036eb87
- (id)privateResults;	// IMP=0x000000000036eae7
- (id)results;	// IMP=0x000000000036ea17
- (id)clipResults:(CDStruct_e83c9415)arg1;	// IMP=0x000000000036df74
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x000000000036df24
- (int)analyzeFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 frameStats:(id)arg4 flags:(unsigned long long *)arg5;	// IMP=0x000000000036c28d
- (void)addActiveResults:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000036bcb8
- (int)processPersons:(id)arg1 humanBounds:(id)arg2 dominantPersonIdx:(int)arg3 frame:(struct __CVBuffer *)arg4 timestamp:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6 frameStats:(id)arg7;	// IMP=0x000000000036a8af
- (id)associatePerson:(struct CGRect)arg1 withPHFaces:(id)arg2;	// IMP=0x000000000036a492
- (float)intersectionOverUnion:(struct CGRect)arg1 rect:(struct CGRect)arg2;	// IMP=0x000000000036a3f4
- (struct CGRect)scaleRect:(struct CGRect)arg1 scaleX:(float)arg2 scaleY:(float)arg3;	// IMP=0x000000000036a3ce
- (void)computeActionScore;	// IMP=0x0000000000369b72
- (void)computeVar:(int)arg1 index2:(int)arg2 interVar:(float *)arg3 intraVar:(float *)arg4;	// IMP=0x0000000000369144
- (float)normDistance:(id)arg1 point2:(id)arg2;	// IMP=0x0000000000368e73
- (id)initWithTimeOfInterest:(id)arg1 phFaces:(id)arg2;	// IMP=0x0000000000368976

@end

