//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioUnitSpatialContext : NSObject
{
    unsigned int _audioSessionId;	// 8 = 0x8
    unsigned int _maxChannelCountMic;	// 12 = 0xc
    unsigned int _maxChannelCountSpeaker;	// 16 = 0x10
    struct OpaqueCMBlockBuffer *_spatialMetadata;	// 24 = 0x18
}

@property(nonatomic) unsigned int maxChannelCountSpeaker; // @synthesize maxChannelCountSpeaker=_maxChannelCountSpeaker;
@property(nonatomic) unsigned int maxChannelCountMic; // @synthesize maxChannelCountMic=_maxChannelCountMic;
@property(nonatomic) unsigned int audioSessionId; // @synthesize audioSessionId=_audioSessionId;
- (void)dealloc;	// IMP=0x0000000000131739
@property(nonatomic) struct OpaqueCMBlockBuffer *spatialMetadata;
- (id)initWithAudioSessionId:(unsigned int)arg1 maxChannelCountMic:(unsigned int)arg2 maxChannelCountSpeaker:(unsigned int)arg3 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg4;	// IMP=0x0000000000131659

@end

