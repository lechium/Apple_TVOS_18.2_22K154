//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechRecognitionCommandAndControl/SFSpeechRecognitionTaskDelegate-Protocol.h>

@class AVAudioPCMBuffer, NSDictionary, NSString, SFSpeechRecognitionTask;

@protocol _SFSpeechRecognitionTaskDelegatePrivate <SFSpeechRecognitionTaskDelegate>

@optional
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didRecordAudioPCMBuffer:(AVAudioPCMBuffer *)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didReceiveSearchResults:(NSDictionary *)arg2 recognizedText:(NSString *)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
@end

