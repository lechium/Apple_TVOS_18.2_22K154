//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Speech/_SFXPCEARInterface-Protocol.h>

@class NSArray, NSData, NSDictionary, NSLocale, NSSet, NSString, NSURL, SFEntitledAssetConfig, SFRequestParameters;

@protocol SFLSRProtocol <_SFXPCEARInterface>
- (void)synchronousComputeEuclidEmbeddingsForSources:(NSArray *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)synchronousCreateEuclidInstanceForLanguageStr:(NSString *)arg1 clientID:(NSString *)arg2 inputFormat:(long long)arg3 loadingOption:(long long)arg4 completion:(void (^)(NSError *))arg5;
- (oneway void)appLmNeedsRebuild:(NSURL *)arg1 language:(NSString *)arg2 sandboxExtensions:(NSArray *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (oneway void)trainAppLmFromNgramCountsArtifact:(NSURL *)arg1 forApp:(NSString *)arg2 language:(NSString *)arg3 writeToDirectory:(NSURL *)arg4 sandboxExtensions:(NSArray *)arg5 completion:(void (^)(NSURL *, NSURL *))arg6;
- (oneway void)createNgramCountsArtifactFromPhraseCountArtifact:(NSURL *)arg1 writeToDirectory:(NSURL *)arg2 sandboxExtensions:(NSArray *)arg3 completion:(void (^)(NSURL *))arg4;
- (oneway void)createPhraseCountsArtifactWithIdentifier:(NSString *)arg1 rawPhraseCountsPath:(NSURL *)arg2 customPronunciationsPath:(NSURL *)arg3 writeToDirectory:(NSURL *)arg4 sandboxExtensions:(NSArray *)arg5 completion:(void (^)(NSURL *))arg6;
- (oneway void)trainAppLmFromNgramsSerializedData:(NSData *)arg1 customPronsData:(NSData *)arg2 language:(NSString *)arg3 writeToDirectory:(NSURL *)arg4 sandboxExtension:(NSString *)arg5 completion:(void (^)(NSURL *, NSURL *))arg6;
- (oneway void)wakeUpWithCompletion:(void (^)(void))arg1;
- (oneway void)metricsWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)lmeThresholdWithCompletion:(void (^)(long long))arg1;
- (oneway void)deserializeNgramCountsData:(NSData *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (oneway void)generateNgramCountsSerializeDataWithCompletion:(void (^)(NSData *))arg1;
- (oneway void)trainFromPlainTextAndWriteToDirectory:(NSURL *)arg1 sandboxExtension:(NSString *)arg2 completion:(void (^)(NSURL *, NSURL *))arg3;
- (oneway void)oovWordsAndFrequenciesWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)addProns:(NSSet *)arg1 forWord:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (oneway void)addSentenceToNgramCounts:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)addSentenceToNgramCounts:(NSString *)arg1;
- (oneway void)initializeLmWithAssetPath:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)initializeLmWithLocale:(NSLocale *)arg1 clientID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)setPurgeabilityForAssetWithConfig:(SFEntitledAssetConfig *)arg1 purgeable:(_Bool)arg2 clientID:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)subscriptionsForClientId:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)unsubscribeFromAssetWithConfig:(SFEntitledAssetConfig *)arg1 clientID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)configParametersForVoicemailWithLanguage:(NSString *)arg1 clientID:(NSString *)arg2 completion:(void (^)(NSDictionary *))arg3;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 clientID:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (oneway void)pathToAssetWithConfig:(SFEntitledAssetConfig *)arg1 clientID:(NSString *)arg2 completion:(void (^)(NSString *))arg3;
- (oneway void)downloadAssetsForConfig:(SFEntitledAssetConfig *)arg1 clientID:(NSString *)arg2 detailedProgress:(_Bool)arg3;
- (oneway void)cleanupCacheWithCompletion:(void (^)(void))arg1;
- (oneway void)logCoreAnalyticsEvent:(NSString *)arg1 withAnalytics:(NSDictionary *)arg2;
- (oneway void)initializeWithSandboxExtensions:(NSArray *)arg1;
- (oneway void)installedLanguagesForAssetType:(unsigned long long)arg1 completion:(void (^)(NSSet *))arg2;
- (oneway void)supportedLanguagesForAssetType:(unsigned long long)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)preloadRecognizerForLanguage:(NSString *)arg1 task:(NSString *)arg2 clientID:(NSString *)arg3 recognitionOverrides:(NSDictionary *)arg4 modelOverrideURL:(NSURL *)arg5 completion:(void (^)(NSError *))arg6;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)cancelSpeech;
- (oneway void)stopSpeech;
- (oneway void)startRecordedAudioDictationWithParameters:(SFRequestParameters *)arg1;
@end

