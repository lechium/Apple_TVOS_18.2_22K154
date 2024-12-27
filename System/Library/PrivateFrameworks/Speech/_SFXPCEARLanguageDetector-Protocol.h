//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint;

@protocol _SFXPCEARLanguageDetector
- (oneway void)runLanguageDetectionWithResultStream:(NSXPCListenerEndpoint *)arg1 samplingRate:(unsigned long long)arg2 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (oneway void)modelInfoWithReply:(void (^)(EARSpeechModelInfo *))arg1;
- (oneway void)supportedLocalesWithReply:(void (^)(NSArray *))arg1;
- (oneway void)hello;
@end

