//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTBlazarService, NSDate, NSString, _LTBatchTranslationResponseHandler, _LTDSELFLoggingManager, _LTOspreySpeechTranslationSession, _LTTextToSpeechCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LTOnlineTranslationEngine : NSObject
{
    FTBlazarService *_blazarService;	// 8 = 0x8
    FTBlazarService *_siriService;	// 16 = 0x10
    FTBlazarService *_systemService;	// 24 = 0x18
    FTBlazarService *_webTaskService;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_translationQueue;	// 40 = 0x28
    _LTOspreySpeechTranslationSession *_speechSession;	// 48 = 0x30
    _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_timerQueue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_serverTimer;	// 72 = 0x48
    NSDate *_startTime;	// 80 = 0x50
    _LTDSELFLoggingManager *_selfLoggingManager;	// 88 = 0x58
    _LTTextToSpeechCache *_ttsCache;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_serverQueue;	// 104 = 0x68
}

+ (id)blazarServiceWithBundleID:(id)arg1;	// IMP=0x001000000005564c
+ (void)initialize;	// IMP=0x001000000005553d
- (void).cxx_destruct;	// IMP=0x000000000005ab77
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
@property(retain, nonatomic) _LTTextToSpeechCache *ttsCache; // @synthesize ttsCache=_ttsCache;
- (void)cancelSpeechTranslation:(_Bool)arg1;	// IMP=0x000000000005aa22
- (void)_speechSessionCompletedWithError:(id)arg1;	// IMP=0x000000000005a952
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000005a51b
- (_Bool)_hasOngoingSpeechSession;	// IMP=0x000000000005a4b4
- (void)endAudio;	// IMP=0x000000000005a49e
- (void)endpoint;	// IMP=0x000000000005a488
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x000000000005a472
- (void)setLanguagesRecognized:(id)arg1 context:(id)arg2;	// IMP=0x000000000005a45c
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000059eb1
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000593a0
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058cf7
- (void)sendBatchTranslationRequestWithDelegate:(id)arg1;	// IMP=0x00000000000579ff
- (void)_createOrUpdateBatchTranslationRequestWithParagraph:(id)arg1 index:(long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056aa7
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000560d4
- (id)_tokenizeString:(id)arg1 inLocale:(id)arg2;	// IMP=0x000000000005601f
- (void)serverTimeoutFired;	// IMP=0x0000000000055ed8
- (void)cancelServerTimeout;	// IMP=0x0000000000055db9
- (void)updateServerTimeout;	// IMP=0x0000000000055b1d
- (void)startServerTimeoutTimer;	// IMP=0x000000000005599e
- (void)preheatAsynchronously:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0000000000055998
- (_Bool)translatesPair:(id)arg1;	// IMP=0x0000000000055990
- (id)_serviceForTask:(long long)arg1;	// IMP=0x0000000000055958
- (id)_webTaskService;	// IMP=0x0000000000055906
- (id)_systemService;	// IMP=0x00000000000558b4
- (id)_siriService;	// IMP=0x0000000000055862
- (id)_blazarService;	// IMP=0x0000000000055810
- (id)initWithSelfLoggingManager:(id)arg1;	// IMP=0x000000000005557d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

