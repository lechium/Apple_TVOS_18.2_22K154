//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, MISSING_TYPE, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC6Speech18ObjCSpeechAnalyzer : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *inputStreamBuilder;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *normalizedTranscriber;	// 1701406303 = 0x6569665f
    MISSING_TYPE *contextualizedTranscriber;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *endpointDetector;	// 0 = 0x0
    MISSING_TYPE *speechAnalyzer;	// 1641432 = 0x190bd8
    MISSING_TYPE *languageDetector;	// 11676 = 0x2d9c
}

+ (id)modelDownloadRequestForClientIdentifier:(id)arg1 transcriberOptions:(id)arg2;	// IMP=0x0060000000123a08
- (void).cxx_destruct;	// IMP=0x00000000001266f6
- (id)init;	// IMP=0x00000000001266b3
- (void)setAnalysisContextWithGeoLMRegionID:(NSString *)arg1 contextualNamedEntities:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x000000000012647f
- (void)setInputAudioFile:(NSURL *)arg1 withAudioFormat:(AVAudioFormat *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0000000000125eb8
- (void)requestResultAtEndpointTimes:(id)arg1;	// IMP=0x0000000000125ce2
- (id)initWithObjCSpeechAnalyzer:(id)arg1 clientIdentifier:(id)arg2 audioFormat:(id)arg3 transcriberResultDelegate:(id)arg4 endpointingResultDelegate:(id)arg5 languageDetectorResultDelegate:(id)arg6 queue:(id)arg7 transcriberOptions:(id)arg8 options:(id)arg9 languageDetectorOptions:(id)arg10 restrictedLogging:(_Bool)arg11 geoLMRegionID:(id)arg12 contextualNamedEntities:(id)arg13 didChangeVolatileRange:(CDUnknownBlockType)arg14;	// IMP=0x0000000000121fc0

@end

