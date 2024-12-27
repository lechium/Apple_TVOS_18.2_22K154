//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/NSObject-Protocol.h>

@class CSAudioChunk, CSAudioChunkForTV;
@protocol CSAudioStreamProviding;

@protocol CSAudioStreamProvidingDelegate <NSObject>
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioChunkForTVAvailable:(CSAudioChunkForTV *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioBufferAvailable:(CSAudioChunk *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didStopStreamUnexpectedly:(long long)arg2;

@optional
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 numSamplesAvailableInExclave:(unsigned long long)arg2 hostTime:(unsigned long long)arg3 arrivalHostTimeToAudioRecorder:(unsigned long long)arg4 exclaveSampleCount:(unsigned long long)arg5;
@end

