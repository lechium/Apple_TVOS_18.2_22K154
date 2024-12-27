//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSSpeechEndHostTimeEstimator : NSObject
{
    _Bool _endPointNotified;	// 8 = 0x8
    unsigned long long _numAudioSampleForwarded;	// 16 = 0x10
    unsigned long long _lastAudioChunkHostTime;	// 24 = 0x18
    double _trailingSilenceDurationAtEndpoint;	// 32 = 0x20
}

@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(nonatomic) _Bool endPointNotified; // @synthesize endPointNotified=_endPointNotified;
@property(nonatomic) unsigned long long lastAudioChunkHostTime; // @synthesize lastAudioChunkHostTime=_lastAudioChunkHostTime;
@property(nonatomic) unsigned long long numAudioSampleForwarded; // @synthesize numAudioSampleForwarded=_numAudioSampleForwarded;
- (unsigned long long)estimatedSpeechEndHostTimeWithLastAudioChunkHostTime:(unsigned long long)arg1;	// IMP=0x001000000000676d
- (unsigned long long)estimatedSpeechEndHostTime;	// IMP=0x0010000000006757
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)arg1;	// IMP=0x001000000000662e
- (void)addNumSamples:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x0010000000006620
- (void)reset;	// IMP=0x0010000000006607
- (id)init;	// IMP=0x00100000000065bb

@end

