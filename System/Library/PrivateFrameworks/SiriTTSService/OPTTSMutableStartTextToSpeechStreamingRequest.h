//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, OPTTSTTSRequestFeatureFlags, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestDebug, OPTTSTextToSpeechRequestDevConfig, OPTTSTextToSpeechRequestExperiment, OPTTSTextToSpeechRequestMeta, OPTTSTextToSpeechRequestProsodyControlConfig, OPTTSTextToSpeechRequestProsodyTransferConfig, OPTTSTextToSpeechUserProfile;

__attribute__((visibility("hidden")))
@interface OPTTSMutableStartTextToSpeechStreamingRequest
{
}

@property(copy, nonatomic) OPTTSTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property(copy, nonatomic) OPTTSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property(copy, nonatomic) OPTTSTextToSpeechRequestDevConfig *dev_config;
@property(copy, nonatomic) OPTTSTextToSpeechUserProfile *profile;
@property(copy, nonatomic) OPTTSTextToSpeechRequestDebug *debug;
@property(copy, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property(copy, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property(copy, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property(copy, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property(nonatomic) long long preferred_voice_type;
@property(copy, nonatomic) NSArray *context_info;
@property(copy, nonatomic) NSString *voice_name;
@property(nonatomic) _Bool enable_word_timing_info;
@property(nonatomic) long long audio_type;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *stream_id;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000101dc9
- (id)init;	// IMP=0x0000000000101d45

@end

