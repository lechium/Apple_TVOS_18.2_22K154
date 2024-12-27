//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableStartSpeechRequest
{
}

@property(copy, nonatomic) NSString *self_session_id;
@property(nonatomic) unsigned int initial_result_candidate_id;
@property(copy, nonatomic) NSArray *multi_user_parameters;
@property(copy, nonatomic) NSString *metadata;
@property(copy, nonatomic) NSString *application_name;
@property(copy, nonatomic) NSString *fork_id;
@property(nonatomic) long long speech_request_source;
@property(copy, nonatomic) NSString *experiment_id;
@property(nonatomic) _Bool keyboard_dictation;
@property(nonatomic) _Bool disable_auto_punctuation;
@property(nonatomic) unsigned int initial_recognition_candidate_id;
@property(copy, nonatomic) NSString *input_origin;
@property(copy, nonatomic) NSString *keyboard_identifier;
@property(copy, nonatomic) NSString *client_endpointer_model_version;
@property(nonatomic) _Bool enable_hybrid_endpoint;
@property(nonatomic) unsigned long long start_endpointing_at;
@property(nonatomic) unsigned long long start_recognition_at;
@property(nonatomic) _Bool enable_endpoint_candidate;
@property(nonatomic) _Bool enable_utterance_detection;
@property(nonatomic) _Bool is_far_field;
@property(nonatomic) int start_audio_bookmark;
@property(nonatomic) long long end_point_mode;
@property(copy, nonatomic) NSString *request_locale;
@property(nonatomic) _Bool stream_unstable_results;
@property(nonatomic) _Bool store_audio;
@property(nonatomic) _Bool tandem_mode;
@property(nonatomic) int udm_port;
@property(copy, nonatomic) NSString *udm_host;
@property(copy, nonatomic) NSString *mic_type;
@property(copy, nonatomic) NSString *device_os;
@property(copy, nonatomic) NSString *device_type;
@property(nonatomic) _Bool enable_server_side_endpoint;
@property(nonatomic) _Bool stream_results;
@property(nonatomic) long long codec;
@property(copy, nonatomic) NSString *task_name;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014c15b
- (id)init;	// IMP=0x000000000014c0cd

@end

