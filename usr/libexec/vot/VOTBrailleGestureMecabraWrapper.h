//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface VOTBrailleGestureMecabraWrapper : NSObject
{
    NSString *_string;	// 8 = 0x8
    struct __Mecabra *_mecabra;	// 16 = 0x10
    struct __MecabraContext *_context;	// 24 = 0x18
    NSMutableDictionary *_candidateRefForSurface;	// 32 = 0x20
    NSString *_currentAnalysis;	// 40 = 0x28
    NSString *_currentSurface;	// 48 = 0x30
    _Bool _reachedEnd;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000121dd5
- (void)didSelectCandidateWithSurfaceString:(id)arg1;	// IMP=0x0010000000121d97
- (id)currentCandidateSurfaceString;	// IMP=0x0010000000121d89
- (id)currentCandidateAnalysisString;	// IMP=0x0010000000121d7b
- (_Bool)_moveToNextRawCandidate;	// IMP=0x0010000000121ceb
- (_Bool)moveToNextCandidate;	// IMP=0x0010000000121c80
- (void)anlayzeString:(id)arg1;	// IMP=0x0010000000121bf1
- (void)dealloc;	// IMP=0x0010000000121ba4
- (id)initWithLanguage:(id)arg1;	// IMP=0x0010000000121a17

@end

