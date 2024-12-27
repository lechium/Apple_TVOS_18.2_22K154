//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, SFSpeechAnalyzer, SFTranscriberResult;

@protocol SFSpeechAnalyzerTranscriberResultDelegate
- (void)speechAnalyzer:(SFSpeechAnalyzer *)arg1 didStopTranscriptionWithError:(NSError *)arg2;
- (void)speechAnalyzer:(SFSpeechAnalyzer *)arg1 didProduceTranscriberResult:(SFTranscriberResult *)arg2;

@optional
- (void)speechAnalyzerDidProduceAllTranscriberResults:(SFSpeechAnalyzer *)arg1;
@end

