//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OPTTSMutableFinalTextToSpeechStreamingResponse
{
}

@property(nonatomic) int total_pkt_number;
@property(copy, nonatomic) NSString *stream_id;
@property(copy, nonatomic) NSString *error_str;
@property(nonatomic) int error_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001039ea
- (id)init;	// IMP=0x0000000000103966

@end

