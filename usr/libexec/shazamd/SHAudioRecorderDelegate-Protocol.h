//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AVAudioPCMBuffer, AVAudioTime, NSError;
@protocol SHAudioRecorder;

@protocol SHAudioRecorderDelegate <NSObject>
- (void)recorder:(id <SHAudioRecorder>)arg1 failedToStartWithError:(NSError *)arg2;
- (void)recorder:(id <SHAudioRecorder>)arg1 producedAudioBuffer:(AVAudioPCMBuffer *)arg2 atTime:(AVAudioTime *)arg3;
@end

