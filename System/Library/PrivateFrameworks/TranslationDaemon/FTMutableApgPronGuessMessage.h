//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTPronGuessResponse, FTStartPronGuessRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableApgPronGuessMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000a5fc8
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000a5ec6
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000a5e8c
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property(copy, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property(copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(copy, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5762
- (id)init;	// IMP=0x00000000000a56d4

@end

