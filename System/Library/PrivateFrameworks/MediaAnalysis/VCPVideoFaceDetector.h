//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceDetector
{
    int _angle;	// 8 = 0x8
    CDStruct_1b6d18a9 _timeLastDetection;	// 12 = 0xc
    NSMutableDictionary *_activeFaces;	// 40 = 0x28
    NSDictionary *_results;	// 48 = 0x30
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 tracking:(_Bool)arg3 faceDominated:(_Bool)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x00000000002941e3
- (void).cxx_destruct;	// IMP=0x00000000002942ea
- (int)analyzeFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 frameStats:(id)arg4 flags:(unsigned long long *)arg5;	// IMP=0x00000000002942df
- (id)faceRanges;	// IMP=0x00000000002942d7
- (id)results;	// IMP=0x00000000002942c2

@end

