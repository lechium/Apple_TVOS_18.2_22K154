//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTStartSpeechRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartSpeechRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cd1a3
- (id)flatbuffData;	// IMP=0x00000000000cd026
- (Offset_b7f57b05)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000cbfdd
@property(readonly, nonatomic) NSString *self_session_id;
@property(readonly, nonatomic) unsigned int initial_result_candidate_id;
- (void)multi_user_parameters_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cbd93
- (unsigned long long)multi_user_parameters_count;	// IMP=0x00000000000cbcf7
- (id)multi_user_parameters_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000cbbfd
@property(readonly, nonatomic) NSArray *multi_user_parameters;
@property(readonly, nonatomic) NSString *metadata;
@property(readonly, nonatomic) NSString *application_name;
@property(readonly, nonatomic) NSString *fork_id;
@property(readonly, nonatomic) long long speech_request_source;
@property(readonly, nonatomic) NSString *experiment_id;
@property(readonly, nonatomic) _Bool keyboard_dictation;
@property(readonly, nonatomic) _Bool disable_auto_punctuation;
@property(readonly, nonatomic) unsigned int initial_recognition_candidate_id;
@property(readonly, nonatomic) NSString *input_origin;
@property(readonly, nonatomic) NSString *keyboard_identifier;
@property(readonly, nonatomic) NSString *client_endpointer_model_version;
@property(readonly, nonatomic) _Bool enable_hybrid_endpoint;
@property(readonly, nonatomic) unsigned long long start_endpointing_at;
@property(readonly, nonatomic) unsigned long long start_recognition_at;
@property(readonly, nonatomic) _Bool enable_endpoint_candidate;
@property(readonly, nonatomic) _Bool enable_utterance_detection;
@property(readonly, nonatomic) _Bool is_far_field;
@property(readonly, nonatomic) int start_audio_bookmark;
@property(readonly, nonatomic) long long end_point_mode;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) _Bool stream_unstable_results;
@property(readonly, nonatomic) _Bool store_audio;
@property(readonly, nonatomic) _Bool tandem_mode;
@property(readonly, nonatomic) int udm_port;
@property(readonly, nonatomic) NSString *udm_host;
@property(readonly, nonatomic) NSString *mic_type;
@property(readonly, nonatomic) NSString *device_os;
@property(readonly, nonatomic) NSString *device_type;
@property(readonly, nonatomic) _Bool enable_server_side_endpoint;
@property(readonly, nonatomic) _Bool stream_results;
@property(readonly, nonatomic) long long codec;
@property(readonly, nonatomic) NSString *task_name;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb072
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000caec7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechRequest *)arg2;	// IMP=0x00000000000caeb2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cae98
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cae81

@end

